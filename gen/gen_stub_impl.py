#!/usr/bin/env python3
import sys
import xml.etree.ElementTree as ET

if len(sys.argv) < 3:
    print("arguments missing")
    exit(-1)

iface_version = sys.argv[1]
steam_api_xml = sys.argv[2]

steam_api_tree = ET.parse(steam_api_xml)
steam_api = steam_api_tree.getroot()

iface = steam_api.find("interface[@version='" + iface_version + "']")
iface_name = iface.get("name")

for method in iface.findall("method"):
    method = steam_api.find("method[@id='" + method.get("id") + "']")
    assert(method != None)

    ret = method.find("return")
    ret_sig = ret.get("ref-id")
    if not ret_sig:
        ret_sig = ret.text

    sig = ret_sig + " " + iface_name + "_" + iface_version + "::" + method.get("name")
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
    sig += "(" + ", ".join(args) + ")\n"
    sig += "{\n"
    sig += "    STUB();\n"
    
    if ret_sig == "bool":
        sig += "    return false;\n"
    if ret_sig[0:3] == "int" or ret_sig[0:4] == "uint" or \
            ret_sig == "SteamAPICall_t":
        sig += "    return 0;\n"
    
    sig += "}\n"

    print(sig)


