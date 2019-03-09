#include "steam_api.h"

UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::UserStats_STEAMUSERSTATS_INTERFACE_VERSION011()
{

}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::RequestCurrentStats()
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetStat(char* pchName, int32* pData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetStat(char* pchName, float* pData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::SetStat(char* pchName, int32 nData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::SetStat(char* pchName, float nData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievement(char* pchName, bool* pbAchieved)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::SetAchievement(char* pchName)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::ClearAchievement(char* pchName)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievementAndUnlockTime(char* pchName, bool* pbAchieved, uint32* punUnlockTime)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::StoreStats()
{
    STUB();
    return false;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievementIcon(char* pchName)
{
    STUB();
    return 0;
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievementDisplayAttribute(char* pchName, char* pchKey)
{
    STUB();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    STUB();
    return false;
}

uint32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetNumAchievements()
{
    STUB();
    return 0;
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievementName(uint32 iAchievement)
{
    STUB();
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::RequestUserStats(CSteamID steamIDUser)
{
    STUB();
    return 0;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetUserStat(CSteamID steamIDUser, char* pchName, float* pData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetUserAchievementAndUnlockTime(CSteamID steamIDUser, char* pchName, bool* pbAchieved, uint32* punUnlockTime)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::ResetAllStats(bool bAchievementsToo)
{
    STUB();
    return false;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType)
{
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::FindLeaderboard(char* pchLeaderboardName)
{
    STUB();
    return 0;
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)
{
    STUB();
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)
{
    STUB();
    return 0;
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)
{
    STUB();
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)
{
    STUB();
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v2 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID* prgUsers, int cUsers)
{
    STUB();
    return 0;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v2* pLeaderboardEntry, int32* pDetails, int cDetailsMax)
{
    STUB();
    return false;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount)
{
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetNumberOfCurrentPlayers()
{
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::RequestGlobalAchievementPercentages()
{
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetMostAchievedAchievementInfo(char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved)
{
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved)
{
    STUB();
    return 0;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetAchievementAchievedPercent(char* pchName, float* pflPercent)
{
    STUB();
    return false;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::RequestGlobalStats(int nHistoryDays)
{
    STUB();
    return 0;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetGlobalStat(char* pchStatName, int64* pData)
{
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetGlobalStat(char* pchStatName, double* pData)
{
    STUB();
    return false;
}

int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetGlobalStatHistory(char* pchStatName, int64* pData, uint32 cubData)
{
    STUB();
    return 0;
}

int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011::GetGlobalStatHistory(char* pchStatName, double* pData, uint32 cubData)
{
    STUB();
    return 0;
}

