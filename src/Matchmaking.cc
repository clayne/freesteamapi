#include "steam_api.h"

/**** GetFavoriteGameCount****/
int Matchmaking_SteamMatchMaking009_GetFavoriteGameCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_GetFavoriteGameCount() {
    return Matchmaking_SteamMatchMaking009_GetFavoriteGameCount();
}

int Matchmaking_SteamMatchMaking007_GetFavoriteGameCount() {
    return Matchmaking_SteamMatchMaking008_GetFavoriteGameCount();
}

int Matchmaking_SteamMatchMaking006_GetFavoriteGameCount() {
    return Matchmaking_SteamMatchMaking007_GetFavoriteGameCount();
}

int Matchmaking_SteamMatchMaking004_GetFavoriteGameCount() {
    return Matchmaking_SteamMatchMaking006_GetFavoriteGameCount();
}

int Matchmaking_SteamMatchMaking002_GetFavoriteGameCount() {
    return Matchmaking_SteamMatchMaking004_GetFavoriteGameCount();
}

/**** GetFavoriteGame****/
bool Matchmaking_SteamMatchMaking009_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking009_GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

bool Matchmaking_SteamMatchMaking007_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking008_GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

bool Matchmaking_SteamMatchMaking006_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking007_GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

bool Matchmaking_SteamMatchMaking004_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking006_GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

bool Matchmaking_SteamMatchMaking002_GetFavoriteGame(int iGame, AppId_t* pnAppID, uint32* pnIP, uint16* pnConnPort, uint16* pnQueryPort, uint32* punFlags, uint32* pRTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking004_GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

/**** AddFavoriteGame****/
int Matchmaking_SteamMatchMaking009_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking009_AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

int Matchmaking_SteamMatchMaking007_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking008_AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

int Matchmaking_SteamMatchMaking006_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking007_AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

int Matchmaking_SteamMatchMaking004_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking006_AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

int Matchmaking_SteamMatchMaking002_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
    return Matchmaking_SteamMatchMaking004_AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

/**** RemoveFavoriteGame****/
bool Matchmaking_SteamMatchMaking009_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    return Matchmaking_SteamMatchMaking009_RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

bool Matchmaking_SteamMatchMaking007_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    return Matchmaking_SteamMatchMaking008_RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

bool Matchmaking_SteamMatchMaking006_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    return Matchmaking_SteamMatchMaking007_RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

bool Matchmaking_SteamMatchMaking004_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    return Matchmaking_SteamMatchMaking006_RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

bool Matchmaking_SteamMatchMaking002_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) {
    return Matchmaking_SteamMatchMaking004_RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

/**** RequestLobbyList****/
SteamAPICall_t Matchmaking_SteamMatchMaking009_RequestLobbyList() {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Matchmaking_SteamMatchMaking008_RequestLobbyList() {
    return Matchmaking_SteamMatchMaking009_RequestLobbyList();
}

SteamAPICall_t Matchmaking_SteamMatchMaking007_RequestLobbyList() {
    return Matchmaking_SteamMatchMaking008_RequestLobbyList();
}

SteamAPICall_t Matchmaking_SteamMatchMaking006_RequestLobbyList() {
    return Matchmaking_SteamMatchMaking007_RequestLobbyList();
}

void Matchmaking_SteamMatchMaking004_RequestLobbyList() {
    // FIXME: probably wrong
    Matchmaking_SteamMatchMaking006_RequestLobbyList();
}

void Matchmaking_SteamMatchMaking002_RequestLobbyList() {
    return Matchmaking_SteamMatchMaking004_RequestLobbyList();
}

/**** GetLobbyByIndex****/
CSteamID Matchmaking_SteamMatchMaking009_GetLobbyByIndex(int iLobby) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Matchmaking_SteamMatchMaking008_GetLobbyByIndex(int iLobby) {
    return Matchmaking_SteamMatchMaking009_GetLobbyByIndex(iLobby);
}

CSteamID Matchmaking_SteamMatchMaking007_GetLobbyByIndex(int iLobby) {
    return Matchmaking_SteamMatchMaking008_GetLobbyByIndex(iLobby);
}

CSteamID Matchmaking_SteamMatchMaking006_GetLobbyByIndex(int iLobby) {
    return Matchmaking_SteamMatchMaking007_GetLobbyByIndex(iLobby);
}

CSteamID Matchmaking_SteamMatchMaking004_GetLobbyByIndex(int iLobby) {
    return Matchmaking_SteamMatchMaking006_GetLobbyByIndex(iLobby);
}

CSteamID Matchmaking_SteamMatchMaking002_GetLobbyByIndex(int iLobby) {
    return Matchmaking_SteamMatchMaking004_GetLobbyByIndex(iLobby);
}

/**** CreateLobby****/
SteamAPICall_t Matchmaking_SteamMatchMaking009_CreateLobby(ELobbyType_v1 eLobbyType, int cMaxMembers) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Matchmaking_SteamMatchMaking008_CreateLobby(ELobbyType_v1 eLobbyType, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking009_CreateLobby(eLobbyType, cMaxMembers);
}

SteamAPICall_t Matchmaking_SteamMatchMaking007_CreateLobby(ELobbyType_v1 eLobbyType, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking008_CreateLobby(eLobbyType, cMaxMembers);
}

SteamAPICall_t Matchmaking_SteamMatchMaking006_CreateLobby(ELobbyType_v1 eLobbyType) {
    // FIXME: probably wrong
    int maxMembers = 0;
    return Matchmaking_SteamMatchMaking007_CreateLobby(eLobbyType, maxMembers);
}

void Matchmaking_SteamMatchMaking004_CreateLobby(bool bPrivate) {
    // FIXME: probably wrong
    ELobbyType_v1 lobbyType = bPrivate ? k_ELobbyTypeFriendsOnly_v1 : k_ELobbyTypePublic_v1;
    Matchmaking_SteamMatchMaking006_CreateLobby(lobbyType);
}

void Matchmaking_SteamMatchMaking002_CreateLobby(bool bPrivate) {
    return Matchmaking_SteamMatchMaking004_CreateLobby(bPrivate);
}

/**** JoinLobby****/
SteamAPICall_t Matchmaking_SteamMatchMaking009_JoinLobby(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Matchmaking_SteamMatchMaking008_JoinLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_JoinLobby(steamIDLobby);
}

SteamAPICall_t Matchmaking_SteamMatchMaking007_JoinLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_JoinLobby(steamIDLobby);
}

SteamAPICall_t Matchmaking_SteamMatchMaking006_JoinLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_JoinLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking004_JoinLobby(CSteamID steamIDLobby) {
    // FIXME: probably wrong
    Matchmaking_SteamMatchMaking006_JoinLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking002_JoinLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking004_JoinLobby(steamIDLobby);
}

/**** LeaveLobby****/
void Matchmaking_SteamMatchMaking009_LeaveLobby(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_LeaveLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_LeaveLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking007_LeaveLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_LeaveLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking006_LeaveLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_LeaveLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking004_LeaveLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking006_LeaveLobby(steamIDLobby);
}

void Matchmaking_SteamMatchMaking002_LeaveLobby(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking004_LeaveLobby(steamIDLobby);
}

/**** InviteUserToLobby****/
bool Matchmaking_SteamMatchMaking009_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    return Matchmaking_SteamMatchMaking009_InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

bool Matchmaking_SteamMatchMaking007_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    return Matchmaking_SteamMatchMaking008_InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

bool Matchmaking_SteamMatchMaking006_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    return Matchmaking_SteamMatchMaking007_InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

bool Matchmaking_SteamMatchMaking004_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    return Matchmaking_SteamMatchMaking006_InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

bool Matchmaking_SteamMatchMaking002_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) {
    return Matchmaking_SteamMatchMaking004_InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

/**** GetNumLobbyMembers****/
int Matchmaking_SteamMatchMaking009_GetNumLobbyMembers(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_GetNumLobbyMembers(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_GetNumLobbyMembers(steamIDLobby);
}

int Matchmaking_SteamMatchMaking007_GetNumLobbyMembers(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_GetNumLobbyMembers(steamIDLobby);
}

int Matchmaking_SteamMatchMaking006_GetNumLobbyMembers(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_GetNumLobbyMembers(steamIDLobby);
}

int Matchmaking_SteamMatchMaking004_GetNumLobbyMembers(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking006_GetNumLobbyMembers(steamIDLobby);
}

int Matchmaking_SteamMatchMaking002_GetNumLobbyMembers(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking004_GetNumLobbyMembers(steamIDLobby);
}

/**** GetLobbyMemberByIndex****/
CSteamID Matchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Matchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    return Matchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(steamIDLobby, iMember);
}

CSteamID Matchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    return Matchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(steamIDLobby, iMember);
}

CSteamID Matchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    return Matchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(steamIDLobby, iMember);
}

CSteamID Matchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    return Matchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(steamIDLobby, iMember);
}

CSteamID Matchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) {
    return Matchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(steamIDLobby, iMember);
}

/**** GetLobbyData****/
const char * Matchmaking_SteamMatchMaking009_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Matchmaking_SteamMatchMaking008_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking009_GetLobbyData(steamIDLobby, pchKey);
}

const char * Matchmaking_SteamMatchMaking007_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking008_GetLobbyData(steamIDLobby, pchKey);
}

const char * Matchmaking_SteamMatchMaking006_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking007_GetLobbyData(steamIDLobby, pchKey);
}

const char * Matchmaking_SteamMatchMaking004_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking006_GetLobbyData(steamIDLobby, pchKey);
}

const char * Matchmaking_SteamMatchMaking002_GetLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking004_GetLobbyData(steamIDLobby, pchKey);
}

/**** SetLobbyData****/
bool Matchmaking_SteamMatchMaking009_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking009_SetLobbyData(steamIDLobby, pchKey, pchValue);
}

bool Matchmaking_SteamMatchMaking007_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking008_SetLobbyData(steamIDLobby, pchKey, pchValue);
}

bool Matchmaking_SteamMatchMaking006_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking007_SetLobbyData(steamIDLobby, pchKey, pchValue);
}

bool Matchmaking_SteamMatchMaking004_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking006_SetLobbyData(steamIDLobby, pchKey, pchValue);
}

bool Matchmaking_SteamMatchMaking002_SetLobbyData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking004_SetLobbyData(steamIDLobby, pchKey, pchValue);
}

/**** GetLobbyMemberData****/
const char * Matchmaking_SteamMatchMaking009_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Matchmaking_SteamMatchMaking008_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    return Matchmaking_SteamMatchMaking009_GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

const char * Matchmaking_SteamMatchMaking007_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    return Matchmaking_SteamMatchMaking008_GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

const char * Matchmaking_SteamMatchMaking006_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    return Matchmaking_SteamMatchMaking007_GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

const char * Matchmaking_SteamMatchMaking004_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    return Matchmaking_SteamMatchMaking006_GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

const char * Matchmaking_SteamMatchMaking002_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, char* pchKey) {
    return Matchmaking_SteamMatchMaking004_GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

/**** SetLobbyMemberData****/
void Matchmaking_SteamMatchMaking009_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking009_SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

void Matchmaking_SteamMatchMaking007_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking008_SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

void Matchmaking_SteamMatchMaking006_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking007_SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

void Matchmaking_SteamMatchMaking004_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking006_SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

void Matchmaking_SteamMatchMaking002_SetLobbyMemberData(CSteamID steamIDLobby, char* pchKey, char* pchValue) {
    return Matchmaking_SteamMatchMaking004_SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

/**** SendLobbyChatMsg****/
bool Matchmaking_SteamMatchMaking009_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    return Matchmaking_SteamMatchMaking009_SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

bool Matchmaking_SteamMatchMaking007_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    return Matchmaking_SteamMatchMaking008_SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

bool Matchmaking_SteamMatchMaking006_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    return Matchmaking_SteamMatchMaking007_SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

bool Matchmaking_SteamMatchMaking004_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    return Matchmaking_SteamMatchMaking006_SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

bool Matchmaking_SteamMatchMaking002_SendLobbyChatMsg(CSteamID steamIDLobby, void* pvMsgBody, int cubMsgBody) {
    return Matchmaking_SteamMatchMaking004_SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

/**** GetLobbyChatEntry****/
int Matchmaking_SteamMatchMaking009_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Matchmaking_SteamMatchMaking009_GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

int Matchmaking_SteamMatchMaking007_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Matchmaking_SteamMatchMaking008_GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

int Matchmaking_SteamMatchMaking006_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Matchmaking_SteamMatchMaking007_GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

int Matchmaking_SteamMatchMaking004_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Matchmaking_SteamMatchMaking006_GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

int Matchmaking_SteamMatchMaking002_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID* pSteamIDUser, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Matchmaking_SteamMatchMaking004_GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

/**** RequestLobbyData****/
bool Matchmaking_SteamMatchMaking009_RequestLobbyData(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_RequestLobbyData(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_RequestLobbyData(steamIDLobby);
}

bool Matchmaking_SteamMatchMaking007_RequestLobbyData(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_RequestLobbyData(steamIDLobby);
}

bool Matchmaking_SteamMatchMaking006_RequestLobbyData(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_RequestLobbyData(steamIDLobby);
}

bool Matchmaking_SteamMatchMaking004_RequestLobbyData(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking006_RequestLobbyData(steamIDLobby);
}

bool Matchmaking_SteamMatchMaking002_RequestLobbyData(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking004_RequestLobbyData(steamIDLobby);
}

/**** SetLobbyGameServer****/
void Matchmaking_SteamMatchMaking009_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    return Matchmaking_SteamMatchMaking009_SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

void Matchmaking_SteamMatchMaking007_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    return Matchmaking_SteamMatchMaking008_SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

void Matchmaking_SteamMatchMaking006_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    return Matchmaking_SteamMatchMaking007_SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

void Matchmaking_SteamMatchMaking004_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    return Matchmaking_SteamMatchMaking006_SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

void Matchmaking_SteamMatchMaking002_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) {
    return Matchmaking_SteamMatchMaking004_SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

/**** AddRequestLobbyListFilter****/
void Matchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(char* pchKeyToMatch, char* pchValueToMatch) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(char* pchKeyToMatch, char* pchValueToMatch) {
    return Matchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(pchKeyToMatch, pchValueToMatch);
}

/**** AddRequestLobbyListNumericalFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(char* pchKeyToMatch, int nValueToMatch, ELobbyComparison_v2 eComparisonType) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(char* pchKeyToMatch, int nValueToMatch, ELobbyComparison_v2 eComparisonType) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}

void Matchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(char* pchKeyToMatch, int nValueToMatch, ELobbyComparison_v2 eComparisonType) {
    return Matchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}

void Matchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(char* pchKeyToMatch, int nValueToMatch, int nComparisonType) {
    // FIXME: probably wrong
    ELobbyComparison_v2 comparisonType = static_cast<ELobbyComparison_v2>(nComparisonType);
    return Matchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, comparisonType);
}

void Matchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(char* pchKeyToMatch, int nValueToMatch, int nComparisonType) {
    return Matchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, nComparisonType);
}

/**** AddRequestLobbyListSlotsAvailableFilter****/
void Matchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter() {
    // FIXME: implement
    STUB();
}

/**** GetLobbyGameServer****/
bool Matchmaking_SteamMatchMaking009_GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, CSteamID* psteamIDGameServer) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, CSteamID* psteamIDGameServer) {
    return Matchmaking_SteamMatchMaking009_GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool Matchmaking_SteamMatchMaking007_GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, CSteamID* psteamIDGameServer) {
    return Matchmaking_SteamMatchMaking008_GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool Matchmaking_SteamMatchMaking006_GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, CSteamID* psteamIDGameServer) {
    return Matchmaking_SteamMatchMaking007_GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool Matchmaking_SteamMatchMaking004_GetLobbyGameServer(CSteamID steamIDLobby, uint32* punGameServerIP, uint16* punGameServerPort, CSteamID* psteamIDGameServer) {
    return Matchmaking_SteamMatchMaking006_GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

/**** SetLobbyMemberLimit****/
bool Matchmaking_SteamMatchMaking009_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking009_SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

bool Matchmaking_SteamMatchMaking007_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking008_SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

bool Matchmaking_SteamMatchMaking006_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking007_SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

bool Matchmaking_SteamMatchMaking004_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) {
    return Matchmaking_SteamMatchMaking006_SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

/**** GetLobbyMemberLimit****/
int Matchmaking_SteamMatchMaking009_GetLobbyMemberLimit(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_GetLobbyMemberLimit(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_GetLobbyMemberLimit(steamIDLobby);
}

int Matchmaking_SteamMatchMaking007_GetLobbyMemberLimit(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_GetLobbyMemberLimit(steamIDLobby);
}

int Matchmaking_SteamMatchMaking006_GetLobbyMemberLimit(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_GetLobbyMemberLimit(steamIDLobby);
}

int Matchmaking_SteamMatchMaking004_GetLobbyMemberLimit(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking006_GetLobbyMemberLimit(steamIDLobby);
}

/**** RequestFriendsLobbies****/
bool Matchmaking_SteamMatchMaking004_RequestFriendsLobbies() {
    // FIXME: implement
    STUB();
    return false;
}

/**** AddRequestLobbyListNearValueFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(char* pchKeyToMatch, int nValueToBeCloseTo) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(char* pchKeyToMatch, int nValueToBeCloseTo) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}

void Matchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(char* pchKeyToMatch, int nValueToBeCloseTo) {
    return Matchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}

void Matchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(char* pchKeyToMatch, int nValueToBeCloseTo) {
    return Matchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}

/**** SetLobbyType****/
bool Matchmaking_SteamMatchMaking009_SetLobbyType(CSteamID steamIDLobby, ELobbyType_v1 eLobbyType) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SetLobbyType(CSteamID steamIDLobby, ELobbyType_v1 eLobbyType) {
    return Matchmaking_SteamMatchMaking009_SetLobbyType(steamIDLobby, eLobbyType);
}

bool Matchmaking_SteamMatchMaking007_SetLobbyType(CSteamID steamIDLobby, ELobbyType_v1 eLobbyType) {
    return Matchmaking_SteamMatchMaking008_SetLobbyType(steamIDLobby, eLobbyType);
}

bool Matchmaking_SteamMatchMaking006_SetLobbyType(CSteamID steamIDLobby, ELobbyType_v1 eLobbyType) {
    return Matchmaking_SteamMatchMaking007_SetLobbyType(steamIDLobby, eLobbyType);
}

/**** GetLobbyOwner****/
CSteamID Matchmaking_SteamMatchMaking009_GetLobbyOwner(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Matchmaking_SteamMatchMaking008_GetLobbyOwner(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_GetLobbyOwner(steamIDLobby);
}

CSteamID Matchmaking_SteamMatchMaking007_GetLobbyOwner(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_GetLobbyOwner(steamIDLobby);
}

CSteamID Matchmaking_SteamMatchMaking006_GetLobbyOwner(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking007_GetLobbyOwner(steamIDLobby);
}

/**** AddRequestLobbyListStringFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(char* pchKeyToMatch, char* pchValueToMatch, ELobbyComparison_v2 eComparisonType) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(char* pchKeyToMatch, char* pchValueToMatch, ELobbyComparison_v2 eComparisonType) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, eComparisonType);
}

void Matchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(char* pchKeyToMatch, char* pchValueToMatch, ELobbyComparison_v2 eComparisonType) {
    return Matchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, eComparisonType);
}

/**** AddRequestLobbyListFilterSlotsAvailable****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}

void Matchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {
    return Matchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}

/**** GetLobbyDataCount****/
int Matchmaking_SteamMatchMaking009_GetLobbyDataCount(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
    return 0;
}

int Matchmaking_SteamMatchMaking008_GetLobbyDataCount(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking009_GetLobbyDataCount(steamIDLobby);
}

int Matchmaking_SteamMatchMaking007_GetLobbyDataCount(CSteamID steamIDLobby) {
    return Matchmaking_SteamMatchMaking008_GetLobbyDataCount(steamIDLobby);
}

/**** GetLobbyDataByIndex****/
bool Matchmaking_SteamMatchMaking009_GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char* pchKey, int cchKeyBufferSize, char* pchValue, int cchValueBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char* pchKey, int cchKeyBufferSize, char* pchValue, int cchValueBufferSize) {
    return Matchmaking_SteamMatchMaking009_GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

bool Matchmaking_SteamMatchMaking007_GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char* pchKey, int cchKeyBufferSize, char* pchValue, int cchValueBufferSize) {
    return Matchmaking_SteamMatchMaking008_GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

/**** DeleteLobbyData****/
bool Matchmaking_SteamMatchMaking009_DeleteLobbyData(CSteamID steamIDLobby, char* pchKey) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_DeleteLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking009_DeleteLobbyData(steamIDLobby, pchKey);
}

bool Matchmaking_SteamMatchMaking007_DeleteLobbyData(CSteamID steamIDLobby, char* pchKey) {
    return Matchmaking_SteamMatchMaking008_DeleteLobbyData(steamIDLobby, pchKey);
}

/**** SetLobbyJoinable****/
bool Matchmaking_SteamMatchMaking009_SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) {
    return Matchmaking_SteamMatchMaking009_SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}

bool Matchmaking_SteamMatchMaking007_SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) {
    return Matchmaking_SteamMatchMaking008_SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}

/**** SetLobbyOwner****/
bool Matchmaking_SteamMatchMaking009_SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) {
    // FIXME: implement
    STUB();
    return false;
}

bool Matchmaking_SteamMatchMaking008_SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) {
    return Matchmaking_SteamMatchMaking009_SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

bool Matchmaking_SteamMatchMaking007_SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) {
    return Matchmaking_SteamMatchMaking008_SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

/**** AddRequestLobbyListDistanceFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter_v1 eLobbyDistanceFilter) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter_v1 eLobbyDistanceFilter) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);
}

/**** AddRequestLobbyListResultCountFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(int cMaxResults) {
    // FIXME: implement
    STUB();
}

void Matchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(int cMaxResults) {
    return Matchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(cMaxResults);
}

/**** AddRequestLobbyListCompatibleMembersFilter****/
void Matchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
}

/**** SetLinkedLobby****/
bool Matchmaking_SteamMatchMaking009_SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent) {
    // FIXME: implement
    STUB();
    return false;
}

