#include <iostream>
#include <vector>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include "../inih/cpp/INIReader.h"

#include "steam_api.h"

struct InterfaceInitializer {
    std::string version;
    void *(*init)();
};

const std::vector<InterfaceInitializer> interfaces({
    {"STEAMUGC_INTERFACE_VERSION007", UGC_STEAMUGC_INTERFACE_VERSION007_INIT},
    {"SteamUser018", User_SteamUser018_INIT},
    {"SteamUtils007", Utils_SteamUtils007_INIT},
    {"STEAMUSERSTATS_INTERFACE_VERSION011", UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_INIT}
});

static ISteamApps *sapiApps = NULL;
static ISteamAppList *sapiAppList = NULL;
static ISteamClient *sapiClient = NULL;
static ISteamController *sapiController = NULL;
static ISteamFriends *sapiFriends = NULL;
static ISteamHTMLSurface *sapiHTMLSurface = NULL;
static ISteamHTTP *sapiHTTP = NULL;
static ISteamInventory *sapiInventory = NULL;
static ISteamMatchmaking *sapiMatchmaking = NULL;
static ISteamMatchmakingServers *sapiMatchmakingServers = NULL;
static ISteamMusic *sapiMusic = NULL;
static ISteamMusicRemote *sapiMusicRemote = NULL;
static ISteamNetworking *sapiNetworking = NULL;
static ISteamRemoteStorage *sapiRemoteStorage = NULL;
static ISteamScreenshots *sapiScreenshots = NULL;
static ISteamUGC *sapiUGC = NULL;
static ISteamUser *sapiUser = NULL;
static ISteamUserStats *sapiUserStats = NULL;
static ISteamUtils *sapiUtils = NULL;
static ISteamVideo *sapiVideo = NULL;
static ISteamAppTicket *sapiAppTicket = NULL;
static ISteamGameServer *sapiGameServer = NULL;
static ISteamGameServerStats *sapiGameServerStats = NULL;
static ISteamGameCoordinator *sapiGameCoordinator = NULL;
static ISteamParentalSettings *sapiParentalSettings = NULL;

STEAM_API bool SteamAPI_Init()
{
    TRACE("initializing");

    char *selfp = realpath("/proc/self/exe", NULL);
    if (!selfp)
        std::abort();
    char *selfpc = strdup(selfp);
    if (!selfpc)
        std::abort();
    char *dirp = dirname(selfpc);
    auto dir = std::string(dirp);
    free(selfp);
    free(selfpc);

    auto config_file = dir + "/freesteamapi.ini";
    TRACE("loadding freesteamapi.ini from \"" + config_file + "\"");

    INIReader reader(config_file);
    if (reader.ParseError() < 0) {
        ERR("cannot load config from " << config_file);
        std::abort();
    }

#define LOAD_INTERFACE(Name) \
    if (reader.HasValue("Interfaces", "Steam" TOSTRING(Name))) { \
        auto iface_version = reader.Get("Interfaces", "Steam" TOSTRING(Name), ""); \
        for (auto it = interfaces.begin(); it != interfaces.end(); ++it) { \
            if ((*it).version == iface_version) { \
                sapi##Name = reinterpret_cast<ISteam##Name *>((*it).init()); \
                TRACE("loaded interface " << iface_version); \
                break; \
            } \
        } \
        if (!sapi##Name) { \
            ERR(TOSTRING(Name) " Interface " << iface_version << " not implemented"); \
            std::abort(); \
        } \
    }

    LOAD_INTERFACE(Apps);
    LOAD_INTERFACE(AppList);
    LOAD_INTERFACE(Client);
    LOAD_INTERFACE(Controller);
    LOAD_INTERFACE(Friends);
    LOAD_INTERFACE(HTMLSurface);
    LOAD_INTERFACE(HTTP);
    LOAD_INTERFACE(Inventory);
    LOAD_INTERFACE(Matchmaking);
    LOAD_INTERFACE(MatchmakingServers);
    LOAD_INTERFACE(Music);
    LOAD_INTERFACE(MusicRemote);
    LOAD_INTERFACE(Networking);
    LOAD_INTERFACE(RemoteStorage);
    LOAD_INTERFACE(Screenshots);
    LOAD_INTERFACE(UGC);
    LOAD_INTERFACE(User);
    LOAD_INTERFACE(UserStats);
    LOAD_INTERFACE(Utils);
    LOAD_INTERFACE(Video);
    LOAD_INTERFACE(AppTicket);
    LOAD_INTERFACE(GameServer);
    LOAD_INTERFACE(GameServerStats);
    LOAD_INTERFACE(GameCoordinator);
    LOAD_INTERFACE(ParentalSettings);

    return true;
}

STEAM_API void SteamAPI_Shutdown()
{
    STUB();
}

STEAM_API void SteamAPI_ReleaseCurrentThreadMemory()
{
    STUB();
}

STEAM_API bool SteamAPI_RestartAppIfNecessary( uint32 unOwnAppID )
{
    STUB();
    return false;
}

STEAM_API void SteamAPI_SetMiniDumpComment( const char *pchMsg )
{
    STUB();
}

STEAM_API void SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID )
{
    STUB();
}

STEAM_API void SteamAPI_RunCallbacks()
{
    STUB();
}

STEAM_API void SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback )
{
    STUB();
}

STEAM_API void SteamAPI_UnregisterCallback( class CCallbackBase *pCallback )
{
    STUB();
}

STEAM_API void SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall )
{
    STUB();
}

STEAM_API void SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall )
{
    STUB();
}

STEAM_API bool SteamAPI_IsSteamRunning()
{
    STUB();
    return true;
}

STEAM_API void Steam_RunCallbacks( HSteamPipe hSteamPipe, bool bGameServerCallbacks )
{
    STUB();
}

STEAM_API void Steam_RegisterInterfaceFuncs( void *hModule )
{
    STUB();
}

STEAM_API HSteamUser Steam_GetHSteamUserCurrent()
{
    STUB();
}

STEAM_API const char *SteamAPI_GetSteamInstallPath()
{
    STUB();
}

STEAM_API HSteamPipe SteamAPI_GetHSteamPipe()
{
    STUB();
}

STEAM_API void SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks )
{
    STUB();
}

STEAM_API bool SteamAPI_InitSafe()
{
    STUB();
    return true;
}

STEAM_API HSteamPipe GetHSteamPipe()
{
    STUB();
}

STEAM_API HSteamUser GetHSteamUser()
{
    STUB();
}

#define ENTRYPOINT(Name) \
    STEAM_API ISteam ##Name *Steam ##Name() \
    { \
        if (!sapi ##Name) \
            WARN(TOSTRING(Name) " is getting accessed but is NULL"); \
        return sapi ##Name; \
    }

ENTRYPOINT(Apps);
ENTRYPOINT(AppList);
ENTRYPOINT(Client);
ENTRYPOINT(Controller);
ENTRYPOINT(Friends);
ENTRYPOINT(HTMLSurface);
ENTRYPOINT(HTTP);
ENTRYPOINT(Inventory);
ENTRYPOINT(Matchmaking);
ENTRYPOINT(MatchmakingServers);
ENTRYPOINT(Music);
ENTRYPOINT(MusicRemote);
ENTRYPOINT(Networking);
ENTRYPOINT(RemoteStorage);
ENTRYPOINT(Screenshots);
ENTRYPOINT(UGC);
ENTRYPOINT(User);
ENTRYPOINT(UserStats);
ENTRYPOINT(Utils);
ENTRYPOINT(Video);
ENTRYPOINT(AppTicket);
ENTRYPOINT(GameServer);
ENTRYPOINT(GameServerStats);
ENTRYPOINT(GameCoordinator);
ENTRYPOINT(ParentalSettings);


