#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <cassert>
#include <iomanip>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/sha.h>
#include <sys/mman.h>
#include <sys/mman.h>

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
    std::abort();
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
// all entrypoints
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

class Configuration {
private:
    std::vector<std::pair<std::string, std::map<std::string, std::string>>> mSections;

public:
    class Section {
    private:
        const std::string &mName;
        const std::map<std::string, std::string> &mMap;
    public:
        Section(const std::string& n, const std::map<std::string, std::string>& m)
          : mName(n), mMap(m) {}

        const std::string& name() {
            return mName;
        }
        const std::string& get(const std::string& key, const std::string& def) {
            auto match = mMap.find(key);
            if (match != mMap.end())
                return (*match).second;
            return def;
        }
        bool has(const std::string& key) {
            return mMap.find(key) != mMap.end();
        }
    };

    Configuration(std::ifstream& config_stream)
    {
        bool success = parse_ini(config_stream, [&](struct ini_token& tok) {
            if (tok.type == INI_TOKEN_SECTION) {
                mSections.push_back(std::make_pair(std::string(tok.section), std::map<std::string, std::string>()));
                return;
            }
            if (tok.type == INI_TOKEN_ENTRY) {
                std::map<std::string, std::string>& section = mSections.back().second;
                section[std::string(tok.key)] = std::string(tok.value);
            }
        });
        if (!success) {
            ERR("configuration file is malformed");
            std::abort();
        }
    }

    Section section(const std::string& name) {
        for (auto it = mSections.begin(); it != mSections.end(); ++it) {
            const std::string& s_name = (*it).first;
            std::map<std::string, std::string>& section = (*it).second;
            if (name == s_name)
                return Section(s_name, section);
        }
        ERR("section " << name << " not found");
        std::abort();
    }

    bool has_section(const std::string& name) {
        for (auto it = mSections.begin(); it != mSections.end(); ++it) {
            const std::string& s_name = (*it).first;
            if (name == s_name)
                return true;
        }
        return false;
    }

    template<typename Func>
    void sections(const std::string& name, Func f) {
        for (auto it = mSections.begin(); it != mSections.end(); ++it) {
            const std::string& s_name = (*it).first;
            std::map<std::string, std::string>& section = (*it).second;
            if (name == s_name)
                f(Section(s_name, section));
        }
    }
};

static inline std::string executable_path() {
    char *selfp = realpath("/proc/self/exe", NULL);
    std::string self(selfp);
    free(selfp);
    return self;
}

static inline std::string executable_name() {
    auto self = executable_path();
    return std::string(std::find(self.rbegin(), self.rend(), '/').base(), self.end());
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
    if (str.length() >= 2 && str[0] == '0' && str[1] == 'x')
        ss << std::hex << str.substr(2);
    else
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

struct MemoryMap {
    MemoryMap() : begin(0), end(0), prot(0) {};
    MemoryMap(size_t b, size_t e, int p)
      : begin(b), end(e), prot(p) {};
    size_t begin;
    size_t end;
    int prot;
};

class WriteableMemoryGuard {
private:
    MemoryMap mMap;

public:
    WriteableMemoryGuard(MemoryMap &map) : mMap(map) {
        if (mMap.begin == mMap.end)
            return;

        int prot = PROT_NONE;
        prot |= PROT_READ;
        prot |= PROT_WRITE;
        if (mprotect(reinterpret_cast<void *>(mMap.begin), mMap.end - mMap.begin, prot) != 0) {
            ERR("mprotect failed");
            std::abort();
        }
        TRACE("make memory region " << mMap.begin << "-" << mMap.end << " writeable");
    }

    ~WriteableMemoryGuard() {
        if (mMap.begin == mMap.end)
            return;

        if (mprotect(reinterpret_cast<void *>(mMap.begin), mMap.end - mMap.begin, mMap.prot) != 0) {
            ERR("mprotect failed");
            std::abort();
        }
        TRACE("restore permissions for memory region " << mMap.begin << "-" << mMap.end);
    }
};

void patch_entrypoint(size_t target_loc, size_t entrypoint_loc, size_t scratch_loc)
{
    // patching by overwriting the first 7 bytes of entrypoint
    // We cannot use more than 7 bytes because that's the length of some
    // SteamAPI functions (singletons for interfaces)
    //   :> !rasm2 -a x86 -b 64 'mov eax, 0x87654321; jmp eax'
    //   b821436587ffe0
    // gives us 32 bits of address space
    // works on x86_64 and i386
    // this jumps to the scratch buffer where we have enough space to
    // jump to arbitrary locations:
    //  :> !rasm2 -a x86 -b 32 'mov rax, 0xcccccccceeeeeeee; jmp rax'
    //  48b8eeeeeeeeccccccccffe0
    //

    assert(scratch_loc < 0xffffffff);

    // FIXME this only works for one symbol because we always overwrite
    uint8_t *scratch_code = reinterpret_cast<uint8_t *>(scratch_loc);
    scratch_code[0] = 0x48;
    scratch_code[1] = 0xb8;
    scratch_code[2] = static_cast<uint8_t>(target_loc);
    scratch_code[3] = static_cast<uint8_t>(target_loc >> 8);
    scratch_code[4] = static_cast<uint8_t>(target_loc >> 16);
    scratch_code[5] = static_cast<uint8_t>(target_loc >> 24);
    scratch_code[6] = static_cast<uint8_t>(target_loc >> 32);
    scratch_code[7] = static_cast<uint8_t>(target_loc >> 40);
    scratch_code[8] = static_cast<uint8_t>(target_loc >> 48);
    scratch_code[9] = static_cast<uint8_t>(target_loc >> 56);
    scratch_code[10] = 0xff;
    scratch_code[11] = 0xe0;

    uint8_t *patch = reinterpret_cast<uint8_t *>(entrypoint_loc);
    patch[0] = 0xb8;
    patch[1] = static_cast<uint8_t>(scratch_loc);
    patch[2] = static_cast<uint8_t>(scratch_loc >> 8);
    patch[3] = static_cast<uint8_t>(scratch_loc >> 16);
    patch[4] = static_cast<uint8_t>(scratch_loc >> 24);
    patch[5] = 0xff;
    patch[6] = 0xe0;
}

__attribute__ ((constructor))
static void init() {
    std::ios_base::Init init_io;
    TRACE("initializing");

    const char *config_env = std::getenv("FREESTEAMAPI_CONFIG");
    auto config_file = config_env ? std::string(config_env) : std::string("./freesteamapi.ini");
    std::ifstream config_stream(config_file);
    Configuration config(config_stream);

    auto interfaces = config.section("Interfaces");
    #define STEAMAPI_ENABLE_User
    #define STEAMAPI_ENABLE_UserStats
    #define STEAMAPI_ENABLE_Utils
    #define STEAMAPI_ENABLE_UGC
    #include "interface_loader.h"

    auto self = std::string("/proc/self/exe");
    std::vector<uint8_t> self_hash(SHA_DIGEST_LENGTH, 0);
    sha1sum_from_file(self, self_hash);

    auto exe_name = executable_path();
    MemoryMap map;
    memory_mappings([&](std::string& name, size_t begin, size_t end, int prot) -> bool {
        if (exe_name == name) {
            map = MemoryMap(begin, end, prot);
            return false;
        }
        return true;
    });

    config.sections("Entrypoints", [&](Configuration::Section section) {
        auto sha1sum = section.get(std::string("sha1sum"), std::string(""));
        std::vector<uint8_t> target_hash(SHA_DIGEST_LENGTH, 0);
        sha1sum_from_hex(sha1sum, target_hash);
        if (!std::equal(self_hash.begin(), self_hash.end(), target_hash.begin()))
            return;

        // sha1sum matches
        // do the entrypoint patching!
        // we might need scratch memory to put some code into in the lower

        // 32 bit address range
        // FIXME handle the case that there already is something mapped at the specific address
        //       and choose new address
        void *scratch_buf = mmap(reinterpret_cast<void *>(0x2a000000), 1024*1024, PROT_EXEC|PROT_READ, MAP_ANONYMOUS|MAP_PRIVATE, -1, 0);
        size_t scratch_loc = reinterpret_cast<size_t>(scratch_buf);
        assert(scratch_loc == 0x2a000000);
        MemoryMap scratch_map(scratch_loc, scratch_loc + (1024*1024), PROT_EXEC|PROT_READ);

        // make sure both the exexutable and scratch memory are writeable for patching
        auto guard1 = WriteableMemoryGuard(map);
        auto guard2 = WriteableMemoryGuard(scratch_map);

        const std::string& sym_location = section.get(std::string("SteamAPI_Init"), std::string(""));
        if (sym_location != "") {
            patch_entrypoint(reinterpret_cast<size_t>(SteamAPI_Init), from_hex(sym_location), scratch_loc);
        }
        
    });
}

