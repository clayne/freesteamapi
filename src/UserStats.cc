#include <cstring>
#include "steam_api.h"

/**** RequestCurrentStats****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats() {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats();
}

/**** GetStat****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(char* pchName, float* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(char* pchName, int32* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(pchName, pData);
}

/**** SetStat****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(char* pchName, float nData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(char* pchName, int32 nData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(char* pchName, float nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(pchName, nData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(char* pchName, int32 nData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(pchName, nData);
}

/**** UpdateAvgRateStat****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(char* pchName, float flCountThisSession, double dSessionLength) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

/**** GetAchievement****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(char* pchName, bool* pbAchieved) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(pchName, pbAchieved);
}

/**** SetAchievement****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(char* pchName) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(pchName);
}

/**** ClearAchievement****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(char* pchName) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(pchName);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(pchName);
}

/**** StoreStats****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats() {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats();
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats();
}

/**** GetAchievementIcon****/
int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(char* pchName) {
    // FIXME: implement
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(pchName);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(char* pchName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(pchName);
}

/**** GetAchievementDisplayAttribute****/
const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(pchName, pchKey);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(char* pchName, char* pchKey) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(pchName, pchKey);
}

/**** IndicateAchievementProgress****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(char* pchName, uint32 nCurProgress, uint32 nMaxProgress) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

/**** RequestUserStats****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(CSteamID steamIDUser) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(steamIDUser);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(steamIDUser);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(steamIDUser);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(steamIDUser);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(steamIDUser);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(CSteamID steamIDUser) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(steamIDUser);
}

/**** GetUserStat****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(CSteamID steamIDUser, char* pchName, float* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(steamIDUser, pchName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(CSteamID steamIDUser, char* pchName, int32* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(steamIDUser, pchName, pData);
}

/**** GetUserAchievement****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(CSteamID steamIDUser, char* pchName, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

/**** ResetAllStats****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(bool bAchievementsToo) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(bool bAchievementsToo) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(bAchievementsToo);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(bool bAchievementsToo) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(bAchievementsToo);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(bool bAchievementsToo) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(bAchievementsToo);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(bool bAchievementsToo) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(bAchievementsToo);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(bool bAchievementsToo) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(bAchievementsToo);
}

/**** FindOrCreateLeaderboard****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(char* pchLeaderboardName, ELeaderboardSortMethod_v1 eLeaderboardSortMethod, ELeaderboardDisplayType_v1 eLeaderboardDisplayType) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

/**** FindLeaderboard****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(char* pchLeaderboardName) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(char* pchLeaderboardName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(pchLeaderboardName);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(char* pchLeaderboardName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(pchLeaderboardName);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(char* pchLeaderboardName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(pchLeaderboardName);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(char* pchLeaderboardName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(pchLeaderboardName);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(char* pchLeaderboardName) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(pchLeaderboardName);
}

/**** GetLeaderboardName****/
const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(hSteamLeaderboard);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(hSteamLeaderboard);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(hSteamLeaderboard);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(hSteamLeaderboard);
}

const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(hSteamLeaderboard);
}

/**** GetLeaderboardEntryCount****/
int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    // FIXME: implement
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(hSteamLeaderboard);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(hSteamLeaderboard);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(hSteamLeaderboard);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(hSteamLeaderboard);
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(hSteamLeaderboard);
}

/**** GetLeaderboardSortMethod****/
ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    // FIXME: probably wrong
    return k_ELeaderboardSortMethodNone_v1;
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(hSteamLeaderboard);
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(hSteamLeaderboard);
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(hSteamLeaderboard);
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(hSteamLeaderboard);
}

ELeaderboardSortMethod_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(hSteamLeaderboard);
}

/**** GetLeaderboardDisplayType****/
ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    // FIXME: probably wrong
    return k_ELeaderboardDisplayTypeNone_v1;
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(hSteamLeaderboard);
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(hSteamLeaderboard);
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(hSteamLeaderboard);
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(hSteamLeaderboard);
}

ELeaderboardDisplayType_v1 UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(hSteamLeaderboard);
}

/**** DownloadLeaderboardEntries****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest_v1 eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

/**** GetDownloadedLeaderboardEntry****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v2* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v2* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v2* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v1* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    LeaderboardEntry_t_v2 pLeaderboardEntry_v2;
    bool res = UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, &pLeaderboardEntry_v2, pDetails, cDetailsMax);
    std::memcpy(pLeaderboardEntry, &pLeaderboardEntry_v2, sizeof(*pLeaderboardEntry));
    return res;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v1* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t_v1* pLeaderboardEntry, int32* pDetails, int cDetailsMax) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

/**** UploadLeaderboardScore****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32* pScoreDetails, int cScoreDetailsCount) {
    // FIXME: probably wrong
    ELeaderboardUploadScoreMethod_v1 eLeaderboardUploadScoreMethod = k_ELeaderboardUploadScoreMethodNone_v1;
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

/**** GetNumberOfCurrentPlayers****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers() {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers();
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers();
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers();
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers();
}

/**** GetAchievementAndUnlockTime****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(pchName, pbAchieved, punUnlockTime);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(pchName, pbAchieved, punUnlockTime);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(pchName, pbAchieved, punUnlockTime);
}

/**** GetUserAchievementAndUnlockTime****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(steamIDUser, pchName, pbAchieved, punUnlockTime);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(steamIDUser, pchName, pbAchieved, punUnlockTime);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, char* pchName, bool* pbAchieved, uint32* punUnlockTime) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(steamIDUser, pchName, pbAchieved, punUnlockTime);
}

/**** DownloadLeaderboardEntriesForUsers****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID* prgUsers, int cUsers) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID* prgUsers, int cUsers) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(hSteamLeaderboard, prgUsers, cUsers);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID* prgUsers, int cUsers) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(hSteamLeaderboard, prgUsers, cUsers);
}

/**** AttachLeaderboardUGC****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(hSteamLeaderboard, hUGC);
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(hSteamLeaderboard, hUGC);
}

/**** RequestGlobalAchievementPercentages****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages() {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages() {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages();
}

/**** GetMostAchievedAchievementInfo****/
int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved) {
    // FIXME: implement
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(pchName, unNameBufLen, pflPercent, pbAchieved);
}

/**** GetNextMostAchievedAchievementInfo****/
int UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved) {
    // FIXME: implement
    STUB();
    return 0;
}

int UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char* pchName, uint32 unNameBufLen, float* pflPercent, bool* pbAchieved) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

/**** GetAchievementAchievedPercent****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(char* pchName, float* pflPercent) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(char* pchName, float* pflPercent) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(pchName, pflPercent);
}

/**** RequestGlobalStats****/
SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(int nHistoryDays) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(int nHistoryDays) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(nHistoryDays);
}

/**** GetGlobalStat****/
bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(char* pchStatName, double* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(char* pchStatName, int64* pData) {
    // FIXME: implement
    STUB();
    return false;
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(char* pchStatName, double* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(pchStatName, pData);
}

bool UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(char* pchStatName, int64* pData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(pchStatName, pData);
}

/**** GetGlobalStatHistory****/
int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(char* pchStatName, double* pData, uint32 cubData) {
    // FIXME: implement
    STUB();
    return 0;
}

int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(char* pchStatName, int64* pData, uint32 cubData) {
    // FIXME: implement
    STUB();
    return 0;
}

int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(char* pchStatName, double* pData, uint32 cubData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(pchStatName, pData, cubData);
}

int32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(char* pchStatName, int64* pData, uint32 cubData) {
    return UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(pchStatName, pData, cubData);
}

/**** GetNumAchievements****/
uint32 UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements() {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetAchievementName****/
const char * UserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(uint32 iAchievement) {
    // FIXME: implement
    STUB();
    return NULL;
}

