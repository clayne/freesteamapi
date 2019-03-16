#include "steam_api.h"

/**** LogOn****/
void GameServer_SteamGameServer012_LogOn(char* pszToken) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_LogOn(char* pszAccountName, char* pszPassword) {
    // FIXME: probably wrong
    char *token = pszAccountName;
    return GameServer_SteamGameServer012_LogOn(token);
}

void GameServer_SteamGameServer010_LogOn() {
    // FIXME: probably wrong
    char* accountName = NULL;
    char* password = NULL;
    return GameServer_SteamGameServer011_LogOn(accountName, password);
}

void GameServer_SteamGameServer009_LogOn() {
    return GameServer_SteamGameServer010_LogOn();
}

void GameServer_SteamGameServer008_LogOn() {
    return GameServer_SteamGameServer009_LogOn();
}

void GameServer_SteamGameServer005_LogOn() {
    return GameServer_SteamGameServer008_LogOn();
}

void GameServer_SteamGameServer004_LogOn() {
    return GameServer_SteamGameServer005_LogOn();
}

/**** LogOff****/
void GameServer_SteamGameServer012_LogOff() {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_LogOff() {
    return GameServer_SteamGameServer012_LogOff();
}

void GameServer_SteamGameServer010_LogOff() {
    return GameServer_SteamGameServer011_LogOff();
}

void GameServer_SteamGameServer009_LogOff() {
    return GameServer_SteamGameServer010_LogOff();
}

void GameServer_SteamGameServer008_LogOff() {
    return GameServer_SteamGameServer009_LogOff();
}

void GameServer_SteamGameServer005_LogOff() {
    return GameServer_SteamGameServer008_LogOff();
}

void GameServer_SteamGameServer004_LogOff() {
    return GameServer_SteamGameServer005_LogOff();
}

/**** BLoggedOn****/
bool GameServer_SteamGameServer012_BLoggedOn() {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_BLoggedOn() {
    return GameServer_SteamGameServer012_BLoggedOn();
}

bool GameServer_SteamGameServer010_BLoggedOn() {
    return GameServer_SteamGameServer011_BLoggedOn();
}

bool GameServer_SteamGameServer009_BLoggedOn() {
    return GameServer_SteamGameServer010_BLoggedOn();
}

bool GameServer_SteamGameServer008_BLoggedOn() {
    return GameServer_SteamGameServer009_BLoggedOn();
}

bool GameServer_SteamGameServer005_BLoggedOn() {
    return GameServer_SteamGameServer008_BLoggedOn();
}

bool GameServer_SteamGameServer004_BLoggedOn() {
    return GameServer_SteamGameServer005_BLoggedOn();
}

/**** BSecure****/
bool GameServer_SteamGameServer012_BSecure() {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_BSecure() {
    return GameServer_SteamGameServer012_BSecure();
}

bool GameServer_SteamGameServer010_BSecure() {
    return GameServer_SteamGameServer011_BSecure();
}

bool GameServer_SteamGameServer009_BSecure() {
    return GameServer_SteamGameServer010_BSecure();
}

bool GameServer_SteamGameServer008_BSecure() {
    return GameServer_SteamGameServer009_BSecure();
}

bool GameServer_SteamGameServer005_BSecure() {
    return GameServer_SteamGameServer008_BSecure();
}

bool GameServer_SteamGameServer004_BSecure() {
    return GameServer_SteamGameServer005_BSecure();
}

/**** GetSteamID****/
CSteamID GameServer_SteamGameServer012_GetSteamID() {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID GameServer_SteamGameServer011_GetSteamID() {
    return GameServer_SteamGameServer012_GetSteamID();
}

CSteamID GameServer_SteamGameServer010_GetSteamID() {
    return GameServer_SteamGameServer011_GetSteamID();
}

CSteamID GameServer_SteamGameServer009_GetSteamID() {
    return GameServer_SteamGameServer010_GetSteamID();
}

CSteamID GameServer_SteamGameServer008_GetSteamID() {
    return GameServer_SteamGameServer009_GetSteamID();
}

CSteamID GameServer_SteamGameServer005_GetSteamID() {
    return GameServer_SteamGameServer008_GetSteamID();
}

CSteamID GameServer_SteamGameServer004_GetSteamID() {
    return GameServer_SteamGameServer005_GetSteamID();
}

/**** SendUserConnectAndAuthenticate****/
bool GameServer_SteamGameServer012_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    return GameServer_SteamGameServer012_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

bool GameServer_SteamGameServer010_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    return GameServer_SteamGameServer011_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

bool GameServer_SteamGameServer009_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    return GameServer_SteamGameServer010_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

bool GameServer_SteamGameServer008_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    return GameServer_SteamGameServer009_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

bool GameServer_SteamGameServer005_SendUserConnectAndAuthenticate(uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize, CSteamID* pSteamIDUser) {
    return GameServer_SteamGameServer008_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

void GameServer_SteamGameServer004_SendUserConnectAndAuthenticate(CSteamID steamIDUser, uint32 unIPClient, void* pvAuthBlob, uint32 cubAuthBlobSize) {
    // FIXME: probably wrong
    GameServer_SteamGameServer005_SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, &steamIDUser);
}

/**** CreateUnauthenticatedUserConnection****/
CSteamID GameServer_SteamGameServer012_CreateUnauthenticatedUserConnection() {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID GameServer_SteamGameServer011_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer012_CreateUnauthenticatedUserConnection();
}

CSteamID GameServer_SteamGameServer010_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer011_CreateUnauthenticatedUserConnection();
}

CSteamID GameServer_SteamGameServer009_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer010_CreateUnauthenticatedUserConnection();
}

CSteamID GameServer_SteamGameServer008_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer009_CreateUnauthenticatedUserConnection();
}

CSteamID GameServer_SteamGameServer005_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer008_CreateUnauthenticatedUserConnection();
}

CSteamID GameServer_SteamGameServer004_CreateUnauthenticatedUserConnection() {
    return GameServer_SteamGameServer005_CreateUnauthenticatedUserConnection();
}

/**** SendUserDisconnect****/
void GameServer_SteamGameServer012_SendUserDisconnect(CSteamID steamIDUser) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer012_SendUserDisconnect(steamIDUser);
}

void GameServer_SteamGameServer010_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer011_SendUserDisconnect(steamIDUser);
}

void GameServer_SteamGameServer009_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer010_SendUserDisconnect(steamIDUser);
}

void GameServer_SteamGameServer008_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer009_SendUserDisconnect(steamIDUser);
}

void GameServer_SteamGameServer005_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer008_SendUserDisconnect(steamIDUser);
}

void GameServer_SteamGameServer004_SendUserDisconnect(CSteamID steamIDUser) {
    return GameServer_SteamGameServer005_SendUserDisconnect(steamIDUser);
}

/**** BUpdateUserData****/
bool GameServer_SteamGameServer012_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer012_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool GameServer_SteamGameServer010_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer011_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool GameServer_SteamGameServer009_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer010_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool GameServer_SteamGameServer008_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer009_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool GameServer_SteamGameServer005_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer008_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool GameServer_SteamGameServer004_BUpdateUserData(CSteamID steamIDUser, char* pchPlayerName, uint32 uScore) {
    return GameServer_SteamGameServer005_BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

/**** BSetServerType****/
bool GameServer_SteamGameServer010_BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, char* pchGameDir, char* pchVersion, bool bLANMode) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer009_BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, char* pchGameDir, char* pchVersion, bool bLANMode) {
    return GameServer_SteamGameServer010_BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

bool GameServer_SteamGameServer008_BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, char* pchGameDir, char* pchVersion, bool bLANMode) {
    return GameServer_SteamGameServer009_BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

bool GameServer_SteamGameServer005_BSetServerType(uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, char* pchGameDir, char* pchVersion, bool bLANMode) {
    return GameServer_SteamGameServer008_BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

bool GameServer_SteamGameServer004_BSetServerType(int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, char* pchGameDir, char* pchVersion, bool bLANMode) {
    // FIXME: probably wrong
    return GameServer_SteamGameServer005_BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

/**** UpdateServerStatus****/
void GameServer_SteamGameServer010_UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, char* pchServerName, char* pSpectatorServerName, char* pchMapName) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer009_UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, char* pchServerName, char* pSpectatorServerName, char* pchMapName) {
    return GameServer_SteamGameServer010_UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void GameServer_SteamGameServer008_UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, char* pchServerName, char* pSpectatorServerName, char* pchMapName) {
    return GameServer_SteamGameServer009_UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void GameServer_SteamGameServer005_UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, char* pchServerName, char* pSpectatorServerName, char* pchMapName) {
    return GameServer_SteamGameServer008_UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void GameServer_SteamGameServer004_UpdateServerStatus(int cPlayers, int cPlayersMax, int cBotPlayers, char* pchServerName, char* pSpectatorServerName, char* pchMapName) {
    return GameServer_SteamGameServer005_UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

/**** UpdateSpectatorPort****/
void GameServer_SteamGameServer010_UpdateSpectatorPort(uint16 unSpectatorPort) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer009_UpdateSpectatorPort(uint16 unSpectatorPort) {
    return GameServer_SteamGameServer010_UpdateSpectatorPort(unSpectatorPort);
}

void GameServer_SteamGameServer008_UpdateSpectatorPort(uint16 unSpectatorPort) {
    return GameServer_SteamGameServer009_UpdateSpectatorPort(unSpectatorPort);
}

void GameServer_SteamGameServer005_UpdateSpectatorPort(uint16 unSpectatorPort) {
    return GameServer_SteamGameServer008_UpdateSpectatorPort(unSpectatorPort);
}

void GameServer_SteamGameServer004_UpdateSpectatorPort(uint16 unSpectatorPort) {
    return GameServer_SteamGameServer005_UpdateSpectatorPort(unSpectatorPort);
}

/**** SetGameType****/
void GameServer_SteamGameServer009_SetGameType(char* pchGameType) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer008_SetGameType(char* pchGameType) {
    return GameServer_SteamGameServer009_SetGameType(pchGameType);
}

void GameServer_SteamGameServer005_SetGameType(char* pchGameType) {
    return GameServer_SteamGameServer008_SetGameType(pchGameType);
}

void GameServer_SteamGameServer004_SetGameType(char* pchGameType) {
    return GameServer_SteamGameServer005_SetGameType(pchGameType);
}

/**** BGetUserAchievementStatus****/
bool GameServer_SteamGameServer009_BGetUserAchievementStatus(CSteamID steamID, char* pchAchievementName) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer008_BGetUserAchievementStatus(CSteamID steamID, char* pchAchievementName) {
    return GameServer_SteamGameServer009_BGetUserAchievementStatus(steamID, pchAchievementName);
}

bool GameServer_SteamGameServer005_BGetUserAchievementStatus(CSteamID steamID, char* pchAchievementName) {
    return GameServer_SteamGameServer008_BGetUserAchievementStatus(steamID, pchAchievementName);
}

bool GameServer_SteamGameServer004_BGetUserAchievementStatus(CSteamID steamID, char* pchAchievementName) {
    return GameServer_SteamGameServer005_BGetUserAchievementStatus(steamID, pchAchievementName);
}

/**** GetGameplayStats****/
void GameServer_SteamGameServer012_GetGameplayStats() {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_GetGameplayStats() {
    return GameServer_SteamGameServer012_GetGameplayStats();
}

void GameServer_SteamGameServer010_GetGameplayStats() {
    return GameServer_SteamGameServer011_GetGameplayStats();
}

void GameServer_SteamGameServer009_GetGameplayStats() {
    return GameServer_SteamGameServer010_GetGameplayStats();
}

void GameServer_SteamGameServer008_GetGameplayStats() {
    return GameServer_SteamGameServer009_GetGameplayStats();
}

/**** RequestUserGroupStatus****/
bool GameServer_SteamGameServer012_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    return GameServer_SteamGameServer012_RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

bool GameServer_SteamGameServer010_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    return GameServer_SteamGameServer011_RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

bool GameServer_SteamGameServer009_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    return GameServer_SteamGameServer010_RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

bool GameServer_SteamGameServer008_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) {
    return GameServer_SteamGameServer009_RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

/**** GetPublicIP****/
uint32 GameServer_SteamGameServer012_GetPublicIP() {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 GameServer_SteamGameServer011_GetPublicIP() {
    return GameServer_SteamGameServer012_GetPublicIP();
}

uint32 GameServer_SteamGameServer010_GetPublicIP() {
    return GameServer_SteamGameServer011_GetPublicIP();
}

uint32 GameServer_SteamGameServer009_GetPublicIP() {
    return GameServer_SteamGameServer010_GetPublicIP();
}

uint32 GameServer_SteamGameServer008_GetPublicIP() {
    return GameServer_SteamGameServer009_GetPublicIP();
}

/**** SetGameData****/
void GameServer_SteamGameServer012_SetGameData(char* pchGameData) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetGameData(char* pchGameData) {
    return GameServer_SteamGameServer012_SetGameData(pchGameData);
}

void GameServer_SteamGameServer010_SetGameData(char* pchGameData) {
    return GameServer_SteamGameServer011_SetGameData(pchGameData);
}

void GameServer_SteamGameServer009_SetGameData(char* pchGameData) {
    return GameServer_SteamGameServer010_SetGameData(pchGameData);
}

/**** UserHasLicenseForApp****/
EUserHasLicenseForAppResult_v1 GameServer_SteamGameServer012_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    // FIXME: implement
    STUB();
    return k_EUserHasLicenseResultHasLicense;
}

EUserHasLicenseForAppResult_v1 GameServer_SteamGameServer011_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    return GameServer_SteamGameServer012_UserHasLicenseForApp(steamID, appID);
}

EUserHasLicenseForAppResult_v1 GameServer_SteamGameServer010_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    return GameServer_SteamGameServer011_UserHasLicenseForApp(steamID, appID);
}

EUserHasLicenseForAppResult_v1 GameServer_SteamGameServer009_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    return GameServer_SteamGameServer010_UserHasLicenseForApp(steamID, appID);
}

/**** SetGameTags****/
void GameServer_SteamGameServer012_SetGameTags(char* pchGameTags) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetGameTags(char* pchGameTags) {
    return GameServer_SteamGameServer012_SetGameTags(pchGameTags);
}

void GameServer_SteamGameServer010_SetGameTags(char* pchGameTags) {
    return GameServer_SteamGameServer011_SetGameTags(pchGameTags);
}

/**** GetServerReputation****/
SteamAPICall_t GameServer_SteamGameServer012_GetServerReputation() {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t GameServer_SteamGameServer011_GetServerReputation() {
    return GameServer_SteamGameServer012_GetServerReputation();
}

SteamAPICall_t GameServer_SteamGameServer010_GetServerReputation() {
    return GameServer_SteamGameServer011_GetServerReputation();
}

/**** GetAuthSessionTicket****/
HAuthTicket GameServer_SteamGameServer012_GetAuthSessionTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket) {
    // FIXME: implement
    STUB();
    return 0;
}

HAuthTicket GameServer_SteamGameServer011_GetAuthSessionTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket) {
    return GameServer_SteamGameServer012_GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

HAuthTicket GameServer_SteamGameServer010_GetAuthSessionTicket(void* pTicket, int cbMaxTicket, uint32* pcbTicket) {
    return GameServer_SteamGameServer011_GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

/**** BeginAuthSession****/
EBeginAuthSessionResult_v1 GameServer_SteamGameServer012_BeginAuthSession(void* pAuthTicket, int cbAuthTicket, CSteamID steamID) {
    // FIXME: implement
    STUB();
    return k_EBeginAuthSessionResultOK;
}

EBeginAuthSessionResult_v1 GameServer_SteamGameServer011_BeginAuthSession(void* pAuthTicket, int cbAuthTicket, CSteamID steamID) {
    return GameServer_SteamGameServer012_BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

EBeginAuthSessionResult_v1 GameServer_SteamGameServer010_BeginAuthSession(void* pAuthTicket, int cbAuthTicket, CSteamID steamID) {
    return GameServer_SteamGameServer011_BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

/**** EndAuthSession****/
void GameServer_SteamGameServer012_EndAuthSession(CSteamID steamID) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_EndAuthSession(CSteamID steamID) {
    return GameServer_SteamGameServer012_EndAuthSession(steamID);
}

void GameServer_SteamGameServer010_EndAuthSession(CSteamID steamID) {
    return GameServer_SteamGameServer011_EndAuthSession(steamID);
}

/**** CancelAuthTicket****/
void GameServer_SteamGameServer012_CancelAuthTicket(HAuthTicket hAuthTicket) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_CancelAuthTicket(HAuthTicket hAuthTicket) {
    return GameServer_SteamGameServer012_CancelAuthTicket(hAuthTicket);
}

void GameServer_SteamGameServer010_CancelAuthTicket(HAuthTicket hAuthTicket) {
    return GameServer_SteamGameServer011_CancelAuthTicket(hAuthTicket);
}

/**** InitGameServer****/
bool GameServer_SteamGameServer012_InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, char* pchVersionString) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, char* pchVersionString) {
    return GameServer_SteamGameServer012_InitGameServer(unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
}

/**** SetProduct****/
void GameServer_SteamGameServer012_SetProduct(char* pszProduct) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetProduct(char* pszProduct) {
    return GameServer_SteamGameServer012_SetProduct(pszProduct);
}

/**** SetGameDescription****/
void GameServer_SteamGameServer012_SetGameDescription(char* pszGameDescription) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetGameDescription(char* pszGameDescription) {
    return GameServer_SteamGameServer012_SetGameDescription(pszGameDescription);
}

/**** SetModDir****/
void GameServer_SteamGameServer012_SetModDir(char* pszModDir) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetModDir(char* pszModDir) {
    return GameServer_SteamGameServer012_SetModDir(pszModDir);
}

/**** SetDedicatedServer****/
void GameServer_SteamGameServer012_SetDedicatedServer(bool bDedicated) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetDedicatedServer(bool bDedicated) {
    return GameServer_SteamGameServer012_SetDedicatedServer(bDedicated);
}

/**** LogOnAnonymous****/
void GameServer_SteamGameServer012_LogOnAnonymous() {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_LogOnAnonymous() {
    return GameServer_SteamGameServer012_LogOnAnonymous();
}

/**** WasRestartRequested****/
bool GameServer_SteamGameServer012_WasRestartRequested() {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_WasRestartRequested() {
    return GameServer_SteamGameServer012_WasRestartRequested();
}

/**** SetMaxPlayerCount****/
void GameServer_SteamGameServer012_SetMaxPlayerCount(int cPlayersMax) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetMaxPlayerCount(int cPlayersMax) {
    return GameServer_SteamGameServer012_SetMaxPlayerCount(cPlayersMax);
}

/**** SetBotPlayerCount****/
void GameServer_SteamGameServer012_SetBotPlayerCount(int cBotplayers) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetBotPlayerCount(int cBotplayers) {
    return GameServer_SteamGameServer012_SetBotPlayerCount(cBotplayers);
}

/**** SetServerName****/
void GameServer_SteamGameServer012_SetServerName(char* pszServerName) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetServerName(char* pszServerName) {
    return GameServer_SteamGameServer012_SetServerName(pszServerName);
}

/**** SetMapName****/
void GameServer_SteamGameServer012_SetMapName(char* pszMapName) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetMapName(char* pszMapName) {
    return GameServer_SteamGameServer012_SetMapName(pszMapName);
}

/**** SetPasswordProtected****/
void GameServer_SteamGameServer012_SetPasswordProtected(bool bPasswordProtected) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetPasswordProtected(bool bPasswordProtected) {
    return GameServer_SteamGameServer012_SetPasswordProtected(bPasswordProtected);
}

/**** SetSpectatorPort****/
void GameServer_SteamGameServer012_SetSpectatorPort(uint16 unSpectatorPort) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetSpectatorPort(uint16 unSpectatorPort) {
    return GameServer_SteamGameServer012_SetSpectatorPort(unSpectatorPort);
}

/**** SetSpectatorServerName****/
void GameServer_SteamGameServer012_SetSpectatorServerName(char* pszSpectatorServerName) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetSpectatorServerName(char* pszSpectatorServerName) {
    return GameServer_SteamGameServer012_SetSpectatorServerName(pszSpectatorServerName);
}

/**** ClearAllKeyValues****/
void GameServer_SteamGameServer012_ClearAllKeyValues() {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_ClearAllKeyValues() {
    return GameServer_SteamGameServer012_ClearAllKeyValues();
}

/**** SetKeyValue****/
void GameServer_SteamGameServer012_SetKeyValue(char* pKey, char* pValue) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetKeyValue(char* pKey, char* pValue) {
    return GameServer_SteamGameServer012_SetKeyValue(pKey, pValue);
}

/**** SetRegion****/
void GameServer_SteamGameServer012_SetRegion(char* pszRegion) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetRegion(char* pszRegion) {
    return GameServer_SteamGameServer012_SetRegion(pszRegion);
}

/**** HandleIncomingPacket****/
bool GameServer_SteamGameServer012_HandleIncomingPacket(void* pData, int cbData, uint32 srcIP, uint16 srcPort) {
    // FIXME: implement
    STUB();
    return false;
}

bool GameServer_SteamGameServer011_HandleIncomingPacket(void* pData, int cbData, uint32 srcIP, uint16 srcPort) {
    return GameServer_SteamGameServer012_HandleIncomingPacket(pData, cbData, srcIP, srcPort);
}

/**** GetNextOutgoingPacket****/
int GameServer_SteamGameServer012_GetNextOutgoingPacket(void* pOut, int cbMaxOut, uint32* pNetAdr, uint16* pPort) {
    // FIXME: implement
    STUB();
    return 0;
}

int GameServer_SteamGameServer011_GetNextOutgoingPacket(void* pOut, int cbMaxOut, uint32* pNetAdr, uint16* pPort) {
    return GameServer_SteamGameServer012_GetNextOutgoingPacket(pOut, cbMaxOut, pNetAdr, pPort);
}

/**** EnableHeartbeats****/
void GameServer_SteamGameServer012_EnableHeartbeats(bool bActive) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_EnableHeartbeats(bool bActive) {
    return GameServer_SteamGameServer012_EnableHeartbeats(bActive);
}

/**** SetHeartbeatInterval****/
void GameServer_SteamGameServer012_SetHeartbeatInterval(int iHeartbeatInterval) {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_SetHeartbeatInterval(int iHeartbeatInterval) {
    return GameServer_SteamGameServer012_SetHeartbeatInterval(iHeartbeatInterval);
}

/**** ForceHeartbeat****/
void GameServer_SteamGameServer012_ForceHeartbeat() {
    // FIXME: implement
    STUB();
}

void GameServer_SteamGameServer011_ForceHeartbeat() {
    return GameServer_SteamGameServer012_ForceHeartbeat();
}

/**** AssociateWithClan****/
SteamAPICall_t GameServer_SteamGameServer012_AssociateWithClan(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t GameServer_SteamGameServer011_AssociateWithClan(CSteamID steamIDClan) {
    return GameServer_SteamGameServer012_AssociateWithClan(steamIDClan);
}

/**** ComputeNewPlayerCompatibility****/
SteamAPICall_t GameServer_SteamGameServer012_ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t GameServer_SteamGameServer011_ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) {
    return GameServer_SteamGameServer012_ComputeNewPlayerCompatibility(steamIDNewPlayer);
}

