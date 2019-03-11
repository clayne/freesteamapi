#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>
#include <sys/mman.h>
#include "../inih/cpp/INIReader.h"
#include "../inih/ini.h"

#include "steam_api.h"

#define ENTRYPOINT(Name) \
    ISteam ##Name *sapi ##Name = NULL; \
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

enum ini_token_type {
    INI_TOKEN_SECTION,
    INI_TOKEN_ENTRY,
    INI_TOKEN_DONE,
};

struct ini_token {
    enum ini_token_type type;
    const char *section;
    const char* key;
    const char* value;
};

template<typename Func>
static bool parse_ini(std::ifstream& stream, Func f)
{
    bool inside_section = false;
    std::string line;
    while(std::getline(stream, line)) {
        auto it = line.begin();
        auto end = line.end();
        // empty lines
        if (it == end)
            continue;

        // whitespace lines
        if (it != end && (std::isspace(*it) || *it == ';' || *it == '#')) {
            while(it != end && std::isspace(*it)) ++it;
            if (it == end || *it == ';' || *it == '#')
                continue;
            else
                return false;
        }

        // sections
        if (*it == '[') {
            it++;
            auto section_end = std::find(it, end, ']');
            if (section_end == end)
                return false;
            std::string section(it, section_end);
            it = section_end + 1;

            while(it != end && std::isspace(*it)) ++it;
            if (it != end && *it != ';' && *it != '#')
                return false;

            struct ini_token token {
                INI_TOKEN_SECTION,
                section.c_str(),
                NULL,
            };
            f(token);
            inside_section = true;
            continue;
        }

        // key-value pairs
        if (inside_section) {
            auto data_end = std::min(std::find(it, end, '#'), std::find(it, end, ';'));
            auto seperator = std::min(std::find(it, data_end, '='), std::find(it, data_end, ':'));
            if (seperator == end)
                return false;

            std::string key(it, seperator);
            std::string value(seperator + 1, data_end);

            struct ini_token token {
                INI_TOKEN_ENTRY,
                NULL,
                key.c_str(),
                value.c_str(),
            };
            f(token);
            continue;
        }

        return false;
    }

    struct ini_token token {
        INI_TOKEN_DONE,
        NULL,
    };
    f(token);

    return true;
}

bool sha1sum_from_file(std::string& filename, std::vector<uint8_t>& result)
{
    if (result.capacity() != SHA_DIGEST_LENGTH)
        return false;

    // compute the sha1sum of the executable
    std::ifstream file(filename, std::ios::binary);
    std::vector<char> buffer(1024*1024, 0);
    SHA_CTX sha;
    if (SHA1_Init(&sha) != 1)
        return false;

    while(file.good()) {
        file.read(buffer.data(), buffer.size());
        std::streamsize size = file.gcount();
        if (SHA1_Update(&sha, buffer.data(), size) != 1)
            return false;
    }

    return SHA1_Final(result.data(), &sha) == 1;
}

bool sha1sum_from_hex(std::string& hex, std::vector<uint8_t>& result)
{
    if (hex.length() != SHA_DIGEST_LENGTH * 2)
        return false;
    if (result.capacity() != SHA_DIGEST_LENGTH)
        return false;

    size_t i = 0;
    for(auto it = hex.begin(); it != hex.end(); std::advance(it, 2)) {
        unsigned tmp;
        std::stringstream ss;
        ss << *it;
        ss << *(std::next(it));
        ss >> std::hex >> tmp;
        result[i++] = static_cast<uint8_t>(tmp);
    }

    return true;
}

size_t from_hex(const std::string& str)
{
    size_t res;
    std::stringstream ss;
    ss << std::hex << str;
    ss >> res;
    return res;
}

template <typename Iter>
std::string next_section(Iter& it, const Iter& end)
{
    auto sec_end = std::find(it, end, ' ');
    std::string section(it, sec_end);
    it = sec_end + 1;
    while (it != end && *it == ' ') ++it;
    return section;
}

template <typename Func>
void memory_mappings(Func f)
{
    std::ifstream maps("/proc/self/maps");
    std::string line;
    while (std::getline(maps, line)) {
        auto it = line.begin();
        auto end = line.end();
        
        auto mapping = next_section(it, end);
        auto permissions = next_section(it, end);
        next_section(it, end);
        next_section(it, end);
        next_section(it, end);
        std::string name(it, end);

        auto split = std::find(mapping.begin(), mapping.end(), '-');
        auto mb = std::string(mapping.begin(), split);
        auto me = std::string(split + 1, mapping.end());
        size_t map_begin = from_hex(mb);
        size_t map_end = from_hex(me);

        int prot = PROT_NONE;
        if(permissions[0] == 'r') prot |= PROT_READ;
        if(permissions[1] == 'w') prot |= PROT_WRITE;
        if(permissions[2] == 'x') prot |= PROT_EXEC;

        if (!f(name, map_begin, map_end, prot))
            return;
    }
}

class MakeMapWriteable {
private:
    size_t map_begin;
    size_t map_end;
    int permissions;

public:
    MakeMapWriteable(std::string& map_name) {
        size_t map_begin;
        size_t map_end;
        int permissions;

        memory_mappings([&](std::string& name, size_t begin, size_t end, int prot) -> bool {
            if (map_name == name) {
                map_begin = begin;
                map_end = end;
                permissions = prot;
                return false;
            }
            return true;
        });

        int new_prot = PROT_NONE;
        new_prot |= PROT_READ;
        new_prot |= PROT_WRITE;
        if (mprotect(reinterpret_cast<void *>(map_begin), map_end-map_begin, new_prot) != 0) {
            ERR("mprotect failed");
            std::abort();
        }

        this->map_begin = map_begin;
        this->map_end = map_end;
        this->permissions = permissions;
    }

    ~MakeMapWriteable() {
        size_t map_begin = this->map_begin;
        size_t map_end = this->map_end;
        int permissions = this->permissions;
        if (mprotect(reinterpret_cast<void *>(map_begin), map_end-map_begin, permissions) != 0) {
            ERR("mprotect failed");
            std::abort();
        }
    }
};

__attribute__ ((constructor))
static void init() {
    std::ios_base::Init init_io;
    TRACE("initializing");

    const char *config_env = std::getenv("FREESTEAMAPI_CONFIG");
    auto config_file = config_env ? std::string(config_env) : std::string("./freesteamapi.ini");
    std::ifstream config_stream(config_file);

    enum {
        STATE_NONE,
        STATE_INTERFACE,
        STATE_ENTRYPOINTS,
    } state = STATE_NONE;

    enum {
        ENTRYP_NONE = 0,
        ENTRYP_MATCHES = 1,
        ENTRYP_FAILED = 2,
        ENTRYP_CHECKED = ENTRYP_MATCHES | ENTRYP_FAILED,
    } entryp_matches = ENTRYP_NONE;

    auto self = std::string("/proc/self/exe");
    std::vector<uint8_t> self_hash(SHA_DIGEST_LENGTH, 0);
    sha1sum_from_file(self, self_hash);

    bool success = parse_ini(config_stream, [&](struct ini_token& tok) {
        if (tok.type == INI_TOKEN_SECTION) {
            auto sec = std::string(tok.section);

            if (sec == "Interfaces") {
                state = STATE_INTERFACE;
                return;
            }
            if (sec == "Entrypoints") {
                state = STATE_ENTRYPOINTS;
                entryp_matches = ENTRYP_NONE;
                return;
            }

            ERR("unknown section " << sec);
            std::abort();
        }

        if (tok.type == INI_TOKEN_ENTRY) {
            auto key = std::string(tok.key);
            auto value = std::string(tok.value);

            if (state == STATE_INTERFACE) {
                #define STEAMAPI_ENABLE_User
                #define STEAMAPI_ENABLE_UserStats
                #define STEAMAPI_ENABLE_Utils
                #define STEAMAPI_ENABLE_UGC
                #include "interface_loader.h"
            }

            if (state == STATE_ENTRYPOINTS) {
                if (entryp_matches == ENTRYP_NONE) {
                    if (key != "sha1sum") {
                        ERR("Entrypoints requires sha1sum as first key");
                        std::abort();
                    }
                    std::vector<uint8_t> target_hash(SHA_DIGEST_LENGTH, 0);
                    sha1sum_from_hex(value, target_hash);
                    if (std::equal(target_hash.begin(), target_hash.end(), self_hash.begin()))
                        entryp_matches = ENTRYP_MATCHES;
                    else
                        entryp_matches = ENTRYP_FAILED;
                    return;
                }
                if (entryp_matches == ENTRYP_MATCHES) {
                    std::cout << "load entrypoint " << key << ":" << value << std::endl;
                }
            }
        }
    });
    if (!success)
        std::cout << "failed parsing" << std::endl;

    MakeMapWriteable writeable();

    std::abort();
}


