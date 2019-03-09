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

def gen_method(o, method):
    o.write("    ")
    ret = method.find("return")
    ret_sig = ret.get("ref-id")
    if not ret_sig:
        ret_sig = ret.text
    o.write("virtual " + ret_sig + " " + method.get("name") + "(")
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
    o.write(", ".join(args))
    o.write(");\n")

def gen_iface(o, iface_name):
    for iface in steam_api.findall("interface[@name='" + iface_name + "']"):
        o.write("class " + iface_name + "_" + iface.get("version") + " {\n")
        o.write("private:\n")
        o.write("    ~" + iface_name + "_" + iface.get("version") + "();\n")
        o.write("public:\n")
        o.write("    " + iface_name + "_" + iface.get("version") + "();\n")

        for method in iface.findall("method"):
            method = steam_api.find("method[@id='" + method.get("id") + "']")
            assert(method != None)
            gen_method(o, method)

        o.write("};\n")
        o.write("inline void *" + iface_name + "_" + iface.get("version") + "_INIT() {\n")
        o.write("    return reinterpret_cast<void*>(new " + iface_name + "_" + iface.get("version") + "());\n")
        o.write("};\n\n")


with open(output_h, 'w') as o:
    for iface_name in iface_names:
        gen_iface(o, iface_name)

