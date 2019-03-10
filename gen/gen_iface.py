#!/usr/bin/env python3
import sys
import xml.etree.ElementTree as ET

iface_names = [
    "Apps",
    "AppList",
    "AppTicket",
    "Client",
    "Controller",
    "Friends",
    "HTMLSurface",
    "HTTP",
    "Inventory",
    "Matchmaking",
    "MatchmakingServers",
    "Music",
    "MusicRemote",
    "Networking",
    "RemoteStorage",
    "Screenshots",
    "UGC",
    "User",
    "UserStats",
    "Utils",
    "Video",
    "GameServer",
    "GameServerStats",
    "GameCoordinator",
    "ParentalSettings"
]

if len(sys.argv) < 3:
    print("arguments missing")
    exit(-1)

steam_api_xml = sys.argv[1]
output_h = sys.argv[2]

steam_api_tree = ET.parse(steam_api_xml)
steam_api = steam_api_tree.getroot()

def gen_method(method, class_name):
    res = "    "
    ret = method.find("return")
    ret_sig = ret.get("ref-id")
    if not ret_sig:
        ret_sig = ret.text
    c_func = ret_sig + " " + class_name + "_" + method.get("name") + "("
    res += "virtual " + ret_sig + " " + method.get("name") + "("
    args = []
    for arg in method.findall("param"):
        frags = []
        for it in arg.iter():
            if it == arg:
                continue
            if it.tag == "type" and it.get("ref-id"):
                frags.append(it.get("ref-id"))
            elif it.text:
                frags.append(it.text)
            if it.tail:
                frags.append(it.tail)
        args.append("".join(frags))
    c_func += ", ".join(args)
    res += ", ".join(args)
    res += ") {\n"
    res += "        return "
    res += class_name + "_" + method.get("name")
    frags = []
    for arg in method.findall("param"):
        frags.append(arg.find("name").text)
    res += "(" + ", ".join(frags) + ");\n"
    res += "    };\n"
    c_func += ");\n"
    return (res, c_func)

def gen_iface(o, iface_name):
    for iface in steam_api.findall("interface[@name='" + iface_name + "']"):
        res = ""
        res += "class " + iface_name + "_" + iface.get("version") + " {\n"
        res += "private:\n"
        res += "    ~" + iface_name + "_" + iface.get("version") + "();\n"
        res += "public:\n"
        res += "    " + iface_name + "_" + iface.get("version") + "() {};\n"

        c_funcs = []
        for method in iface.findall("method"):
            method = steam_api.find("method[@id='" + method.get("id") + "']")
            assert(method != None)
            (method_res, c_func) = gen_method(method, iface_name + "_" + iface.get("version"))
            c_funcs.append(c_func)
            res += method_res

        res += "};\n"
        res += "inline void *" + iface_name + "_" + iface.get("version") + "_INIT() {\n"
        res += "    return reinterpret_cast<void*>(new " + iface_name + "_" + iface.get("version") + "());\n"
        res += "};\n\n"

        for c_func in c_funcs:
            o.write(c_func)
        o.write(res)


with open(output_h, 'w') as o:
    for iface_name in iface_names:
        gen_iface(o, iface_name)

