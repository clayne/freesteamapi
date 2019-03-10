#!/usr/bin/env python3
import sys
import xml.etree.ElementTree as ET

if len(sys.argv) < 3:
    print("arguments missing")
    exit(-1)

iface_name = sys.argv[1]
steam_api_xml = sys.argv[2]

steam_api_tree = ET.parse(steam_api_xml)
steam_api = steam_api_tree.getroot()

def class_stub_impl(iface):
    pass

methods = {}
prev_sdk = "0"
prev_iface = None
for sdk in steam_api.findall("sdk"):
    assert(prev_sdk < sdk.get("version"))
    prev_sdk = sdk.get("version")

    iface = sdk.find("interface[@name='" + iface_name + "']")
    if iface != None:
        iface = steam_api.find("interface[@version='" + iface.get("id") + "']")
        assert(iface != None)
        if prev_iface == iface:
            continue
        prev_iface = iface

        for method in iface.findall("method"):
            method = steam_api.find("method[@id='" + method.get("id") + "']")
            method_name = method.get("name")
            if not method_name in methods:
                methods[method_name] = []
            methods[method_name].append((iface, method))

print("#include \"steam_api.h\"\n")    

for method_name in methods.keys():
    data = methods[method_name]
    data.append((None, None))
    data.reverse()

    print("/**** " + method_name + "****/")

    first = True
    for ((iface_up, method_up), (iface, method)) in zip(data, data[1:]):
        name = iface.get("name") + "_" + iface.get("version") + "_" + method.get("name")
        ret = method.find("return").get("ref-id") or method.find("return").text
        if iface_up != None:
            name_up = iface_up.get("name") + "_" + iface_up.get("version") + "_" + method.get("name")
        args = []
        arg_names = []
        for arg in method.findall("param"):
            arg_names.append(arg.find("name").text)
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
        print(ret + " " + name + "(" + ", ".join(args) + ") {")
        if first:
            first = False
            print("    // FIXME: implement")
            if ret[:3] == "int" or ret[:4] == "uint" or ret[:6] == "HSteam" or ret == "SteamAPICall_t":
                print("    return 0;")
            elif ret[-1] == "*":
                print("    return NULL;")
            elif ret == "bool":
                print("    return false;")
        elif method.get("id") != method_up.get("id"):
            print("    // FIXME: fix signature mismatch")
            print("    // return " + name_up + "( arguments );")
        else:
            print("    return " + name_up + "(" + ", ".join(arg_names) + ");")
        print("}\n")

