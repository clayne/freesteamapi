#!/usr/bin/env python3
import sys
import xml.etree.ElementTree as ET

if len(sys.argv) < 3:
    print("arguments missing")
    exit(-1)

steam_api_xml = sys.argv[1]
output_h = sys.argv[2]

steam_api_tree = ET.parse(steam_api_xml)
steam_api = steam_api_tree.getroot()

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


with open(output_h, 'w') as o:
    o.write("/* TYPEDEFS */\n")

    # typedefs
    for typedef in steam_api.findall("typedef"):
        o.write("typedef " + "".join(typedef.itertext()) + ";")
        o.write("\n")

    o.write("\n/* CONSTANTS */\n")

    # global constants
    for constant in steam_api.findall("constant"):
        if constant.get("scope") != None:
            continue
        o.write("".join(constant.itertext()) + ";\n");

    o.write("\n/* ENUMS */\n")

    # global enums
    for enum in steam_api.findall("enum"):
        if enum.get("scope") != None:
            continue
        o.write("enum " + enum.get("id") + " {\n")
        for entry in enum.findall("entry"):
            expr = entry.get("expr")
            if not expr:
                expr = entry.get("value")
            o.write("    " + entry.get("name") + " = " + expr + ",\n")
        o.write("};\n\n")

    for iface_name in iface_names:
        o.write("\n/* CONSTANTS " + iface_name + "*/\n")

        # constants
        # FIXME constants are versioned in non-global scopes
        for constant in steam_api.findall("constant[@scope='" + iface_name + "']"):
            o.write("".join(constant.itertext()) + ";\n");

        o.write("\n/* ENUMS " + iface_name + "*/\n")

        # enums
        for enum in steam_api.findall("enum[@scope='" + iface_name + "']"):
            o.write("enum " + enum.get("id") + " {\n")
            enumv = enum.get("id")[-3:]
            for entry in enum.findall("entry"):
                expr = entry.get("expr")
                if not expr:
                    expr = entry.get("value")
                o.write("    " + entry.get("name") + enumv + " = " + expr + ",\n")
            o.write("};\n\n")

        o.write("\n/* STRUCTS */\n")

        # structs
        for struct in steam_api.findall("struct[@scope='" + iface_name + "']"):
            o.write("struct " + struct.get("id") + " {\n")
            for field in struct.findall("field"):
                frags = []
                for it in field.iter():
                    if it == field:
                        continue
                    if it.tag == "type" and it.get("ref-id"):
                        frags.append(it.get("ref-id"))
                    elif it.text:
                        frags.append(it.text)
                    if it.tail:
                        frags.append(it.tail)
                o.write("    " + "".join(frags) + ";\n")
            o.write("};\n\n")

