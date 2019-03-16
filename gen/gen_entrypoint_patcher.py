#!/usr/bin/env python3
import sys
import xml.etree.ElementTree as ET

entrypoints = [
    "SteamAPI_Init",
    "SteamAPI_Shutdown",
    "SteamAPI_ReleaseCurrentThreadMemory",
    "SteamAPI_RestartAppIfNecessary",
    "SteamAPI_SetMiniDumpComment",
    "SteamAPI_WriteMiniDump",
    "SteamAPI_RunCallbacks",
    "SteamAPI_RegisterCallback",
    "SteamAPI_UnregisterCallback",
    "SteamAPI_RegisterCallResult",
    "SteamAPI_UnregisterCallResult",
    "SteamAPI_IsSteamRunning",
    "Steam_RunCallbacks",
    "Steam_RegisterInterfaceFuncs",
    "Steam_GetHSteamUserCurrent",
    "SteamAPI_GetSteamInstallPath",
    "SteamAPI_GetHSteamPipe",
    "SteamAPI_SetTryCatchCallbacks",
    "SteamAPI_InitSafe",
    "GetHSteamPipe",
    "GetHSteamUser",
    "SteamApps",
    "SteamAppList",
    "SteamClient",
    "SteamController",
    "SteamFriends",
    "SteamHTMLSurface",
    "SteamHTTP",
    "SteamInventory",
    "SteamMatchmaking",
    "SteamMatchmakingServers",
    "SteamMusic",
    "SteamMusicRemote",
    "SteamNetworking",
    "SteamRemoteStorage",
    "SteamScreenshots",
    "SteamUGC",
    "SteamUser",
    "SteamUserStats",
    "SteamUtils",
    "SteamVideo",
    "SteamAppTicket",
    "SteamGameServer",
    "SteamGameServerStats",
    "SteamGameCoordinator",
    "SteamParentalSettings",
]

if len(sys.argv) < 2:
    print("arguments missing")
    exit(-1)

output_h = sys.argv[1]

with open(output_h, 'w') as o:
    for entrypoint in entrypoints:
        o.write("{\n")
        o.write("    const std::string& sym_location = section.get(std::string(\"" + entrypoint + "\"), std::string(\"\"));\n")
        o.write("    if (sym_location != \"\") {\n")
        o.write("        patch_entrypoint(reinterpret_cast<size_t>(" + entrypoint + "), from_hex(sym_location), scratch_buf);\n")
        o.write("        TRACE(\"patching entrypoint " + entrypoint + "\");\n")
        o.write("    }\n")
        o.write("}\n")

