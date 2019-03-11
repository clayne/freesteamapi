#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>
#include <sys/mman.h>
#include "../inih/cpp/INIReader.h"
#include "../inih/ini.h"

#include "steam_api.h"

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

STEAM_API bool SteamAPI_Init()
{
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
    return 0;
}

STEAM_API const char *SteamAPI_GetSteamInstallPath()
{
    STUB();
    return NULL;
}

STEAM_API HSteamPipe SteamAPI_GetHSteamPipe()
{
    STUB();
    return 0;
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
    return 0;
}

STEAM_API HSteamUser GetHSteamUser()
{
    STUB();
    return 0;
}




#if 0
SteamAPI_Init
SteamAPI_Shutdown
SteamAPI_ReleaseCurrentThreadMemory
SteamAPI_RestartAppIfNecessary
SteamAPI_SetMiniDumpComment
SteamAPI_WriteMiniDump
SteamAPI_RunCallbacks
SteamAPI_RegisterCallback
SteamAPI_UnregisterCallback
SteamAPI_RegisterCallResult
SteamAPI_UnregisterCallResult
SteamAPI_IsSteamRunning
Steam_RunCallbacks
Steam_RegisterInterfaceFuncs
Steam_GetHSteamUserCurrent
SteamAPI_GetSteamInstallPath
SteamAPI_GetHSteamPipe
SteamAPI_SetTryCatchCallbacks
SteamAPI_InitSafe
GetHSteamPipe
GetHSteamUser
ISteamApps
ISteamAppList
ISteamClient
ISteamController
ISteamFriends
ISteamHTMLSurface
ISteamHTTP
ISteamInventory
ISteamMatchmaking
ISteamMatchmakingServers
ISteamMusic
ISteamMusicRemote
ISteamNetworking
ISteamRemoteStorage
ISteamScreenshots
ISteamUGC
ISteamUser
ISteamUserStats
ISteamUtils
ISteamVideo
ISteamAppTicket
ISteamGameServer
ISteamGameServerStats
ISteamGameCoordinator
ISteamParentalSettings
#endif

void patch_entrypoint(void *to, unsigned int from)
{
    uint8_t *p = reinterpret_cast<uint8_t *>(from);
    std::cout << std::hex << static_cast<unsigned int>(*p) << std::endl;
    std::cout << std::hex << static_cast<unsigned int>(*(p+1)) << std::endl;
    std::cout << std::hex << static_cast<unsigned int>(*(p+2)) << std::endl;

    *p = 0;
    *(p+1) = 0;
    *(p+2) = 0;
}

struct init_info {
    const std::string &self_exe;
    uint8_t self_hash[SHA_DIGEST_LENGTH];
};

int ini_handle(void* user, const char* csection, const char* cname, const char* cvalue)
{
    init_info *info = static_cast<init_info*>(user);

    // we handle Entrypoint sections here only
    auto section = std::string(csection);
    if (section.find("Entrypoints ") != 0)
        return 1;

    auto target_hex = section.substr(12);
    if (target_hex.length() != SHA_DIGEST_LENGTH*2) {
        ERR("Entrypoint sha1sum is faulty");
        std::abort();
    }

    int i=0;
    for (auto it = target_hex.begin(); it != target_hex.end(); std::advance(it, 2)) {
        std::stringstream ss;
        ss << *it;
        ss << *(std::next(it));
        unsigned tmp;
        ss >> std::hex >> tmp;
        if (info->self_hash[i++] != static_cast<uint8_t>(tmp)) {
            TRACE("skipping Entrypoints section. Not a match.");
            return 1;
        }
    }

    auto symbol = std::string(cname);
    auto value = std::string(cvalue);
    if (value.substr(0, 2) != "0x") {
        ERR("symbol address is not a hex number");
        std::abort();
    }

    unsigned int offset;
    std::stringstream ss;
    ss << std::hex << value.substr(2);
    ss >> offset;

    if (symbol == "SteamAPI_Init") {
        TRACE("patching symbol SteamAPI_Init");
        patch_entrypoint(reinterpret_cast<void *>(SteamAPI_Init), offset);
    }
    else {
        ERR("unknown symbol " << symbol);
        std::abort();
    }

    return 1;
}

__attribute__ ((constructor))
static void init() {
    std::ios_base::Init mInitializer;
    TRACE("initializing");

    // lookup the executable and the directory of the exe
    char *selfp = realpath("/proc/self/exe", NULL);
    if (!selfp)
        std::abort();
    char *selfpc = strdup(selfp);
    if (!selfpc)
        std::abort();
    char *dirp = dirname(selfpc);
    auto dir = std::string(dirp);
    auto self_exe = std::string(selfp);
    free(selfp);
    free(selfpc);

    init_info info = {
        .self_exe = self_exe,
    };

    std::string config_file;
    if (std::getenv("FREESTEAMAPI_INI")) {
        config_file = std::string(std::getenv("FREESTEAMAPI_INI"));
    } else {
        std::ifstream test1("./freesteamapi.ini");
        if (test1.good()) {
            config_file = std::string("./freesteamapi.ini");
        } else {
            std::ifstream test2(dir + "/freesteamapi.ini");
            if (test2.good()) {
                config_file = dir + "/freesteamapi.ini";
            } else {
                ERR("cannot find freesteamapi.ini");
            }
        }
    }

    INIReader reader(config_file);
    if (reader.ParseError() < 0) {
        ERR("cannot load config from " << config_file);
        std::abort();
    }

    // lookup the execute map for self
    int orig_prot = 0;
    int new_prot = 0;
    size_t start_addr;
    size_t end_addr;
    std::ifstream maps("/proc/self/maps");
    std::string line;
    while (std::getline(maps, line)) {
        size_t idx = 0;
        size_t i;

        i = line.find(' ', idx);
        std::string addrs = line.substr(idx, i-idx);
        for (idx = i; line[idx] == ' '; idx++);

        i = line.find(' ', idx);
        std::string perms = line.substr(idx, i-idx);
        for (idx = i; line[idx] == ' '; idx++);

        i = line.find(' ', idx);
        for (idx = i; line[idx] == ' '; idx++);

        i = line.find(' ', idx);
        for (idx = i; line[idx] == ' '; idx++);

        i = line.find(' ', idx);
        for (idx = i; line[idx] == ' '; idx++);

        std::string fullpath = line.substr(idx);
        if (fullpath == info.self_exe && perms[2] == 'x') {

            size_t split = addrs.find("-");
            std::stringstream ss;
            ss << std::hex << addrs.substr(0, split);
            ss >> start_addr;
            std::stringstream ss2;
            ss2 << std::hex << addrs.substr(split+1);
            ss2 >> end_addr;

            int orig_prot = PROT_NONE;
            if(perms[0] == 'r') orig_prot |= PROT_READ;
            if(perms[1] == 'w') orig_prot |= PROT_WRITE;
            if(perms[2] == 'x') orig_prot |= PROT_EXEC;

            if (!(orig_prot & PROT_WRITE)) {
                TRACE("mprotect: make section writeable " << start_addr << " " << end_addr-start_addr);
                new_prot = PROT_NONE;
                new_prot |= PROT_READ;
                new_prot |= PROT_WRITE;
                if (mprotect(reinterpret_cast<void *>(start_addr), end_addr-start_addr, new_prot) != 0) {
                    ERR("mprotect failed");
                    std::abort();
                }
            }

            break;
        }
    }

    // compute the sha1sum of the executable
    std::ifstream self(info.self_exe, std::ios::binary);
    std::vector<char> buffer(1024*1024, 0);
    SHA_CTX sha;
    if (SHA1_Init(&sha) != 1) {
        ERR("cannot create hashsum of self");
        std::abort();
    }

    while(self.good()) {
        self.read(buffer.data(), buffer.size());
        std::streamsize size = self.gcount();
        if (SHA1_Update(&sha, buffer.data(), size) != 1) {
            ERR("cannot update hashsum of self");
            std::abort();
        }
    }
    if (SHA1_Final(info.self_hash, &sha) != 1) {
        ERR("cannot finalize hashsum of self");
        std::abort();
    }

    // load the config file from the exe directory
    TRACE("loadding freesteamapi.ini from \"" + config_file + "\"");

    // special ini parsing for Entrypoint patching
    if (ini_parse(config_file.c_str(), ini_handle, &info) != 0) {
        ERR("cannot load config from " << config_file);
        std::abort();
    }

    // undo mprotect changes
    if (orig_prot != new_prot) {
        TRACE("undo mprotect changes");
        if (mprotect(reinterpret_cast<void *>(start_addr), end_addr-start_addr, orig_prot) != 0) {
            ERR("mprotect failed");
            std::abort();
        }
    }

    #define STEAMAPI_ENABLE_User
    #define STEAMAPI_ENABLE_UserStats
    #define STEAMAPI_ENABLE_Utils
    #define STEAMAPI_ENABLE_UGC
    #include "interface_loader.h"
}


