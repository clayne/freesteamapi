#include "steam_api.h"

User_SteamUser018::User_SteamUser018()
{
}

HSteamUser User_SteamUser018::GetHSteamUser()
{
    STUB();
    return 0;
}

bool User_SteamUser018::BLoggedOn()
{
    STUB();
    return false;
}

CSteamID User_SteamUser018::GetSteamID()
{
    STUB();
    return CSteamID();
}

int User_SteamUser018::InitiateGameConnection(void* pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    STUB();
    return 0;
}

void User_SteamUser018::TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
{
    STUB();
}

void User_SteamUser018::TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, char* pchExtraInfo)
{
    STUB();
}

bool User_SteamUser018::GetUserDataFolder(char* pchBuffer, int cubBuffer)
{
    STUB();
    return false;
}

void User_SteamUser018::StartVoiceRecording()
{
    STUB();
}

void User_SteamUser018::StopVoiceRecording()
{
    STUB();
}

EVoiceResult_v1 User_SteamUser018::GetAvailableVoice(uint32* pcbCompressed, uint32* pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    STUB();
    return k_EVoiceResultOK;
}

EVoiceResult_v1 User_SteamUser018::GetVoice(bool bWantCompressed, void* pDestBuffer, uint32 cbDestBufferSize, uint32* nBytesWritten, bool bWantUncompressed, void* pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32* nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    STUB();
    return k_EVoiceResultOK;
}

EVoiceResult_v1 User_SteamUser018::DecompressVoice(void* pCompressed, uint32 cbCompressed, void* pDestBuffer, uint32 cbDestBufferSize, uint32* nBytesWritten, uint32 nDesiredSampleRate)
{
    STUB();
    return k_EVoiceResultOK;
}

uint32 User_SteamUser018::GetVoiceOptimalSampleRate()
{
    STUB();
    return 0;
}

HAuthTicket User_SteamUser018::GetAuthSessionTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket)
{
    STUB();
    return 0;
}

EBeginAuthSessionResult_v1 User_SteamUser018::BeginAuthSession(void* pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    STUB();
    return k_EBeginAuthSessionResultOK;
}

void User_SteamUser018::EndAuthSession(CSteamID steamID)
{
    STUB();
}

void User_SteamUser018::CancelAuthTicket(HAuthTicket hAuthTicket)
{
    STUB();
}

EUserHasLicenseForAppResult_v1 User_SteamUser018::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
    STUB();
    return k_EUserHasLicenseResultHasLicense;
}

bool User_SteamUser018::BIsBehindNAT()
{
    STUB();
    return false;
}

void User_SteamUser018::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    STUB();
}

SteamAPICall_t User_SteamUser018::RequestEncryptedAppTicket(void* pDataToInclude, int cbDataToInclude)
{
    STUB();
    return 0;
}

bool User_SteamUser018::GetEncryptedAppTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket)
{
    STUB();
    return false;
}

int User_SteamUser018::GetGameBadgeLevel(int nSeries, bool bFoil)
{
    STUB();
    return 0;
}

int User_SteamUser018::GetPlayerSteamLevel()
{
    STUB();
    return 0;
}

SteamAPICall_t User_SteamUser018::RequestStoreAuthURL(char* pchRedirectURL)
{
    STUB();
    return 0;
}

