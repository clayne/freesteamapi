#include "steam_api.h"

/**** GetPersonaName****/
const char * Friends_SteamFriends015_GetPersonaName() {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetPersonaName() {
    return Friends_SteamFriends015_GetPersonaName();
}

const char * Friends_SteamFriends013_GetPersonaName() {
    return Friends_SteamFriends014_GetPersonaName();
}

const char * Friends_SteamFriends011_GetPersonaName() {
    return Friends_SteamFriends013_GetPersonaName();
}

const char * Friends_SteamFriends009_GetPersonaName() {
    return Friends_SteamFriends011_GetPersonaName();
}

const char * Friends_SteamFriends008_GetPersonaName() {
    return Friends_SteamFriends009_GetPersonaName();
}

const char * Friends_SteamFriends007_GetPersonaName() {
    return Friends_SteamFriends008_GetPersonaName();
}

const char * Friends_SteamFriends006_GetPersonaName() {
    return Friends_SteamFriends007_GetPersonaName();
}

const char * Friends_SteamFriends005_GetPersonaName() {
    return Friends_SteamFriends006_GetPersonaName();
}

const char * Friends_SteamFriends004_GetPersonaName() {
    return Friends_SteamFriends005_GetPersonaName();
}

const char * Friends_SteamFriends003_GetPersonaName() {
    return Friends_SteamFriends004_GetPersonaName();
}

/**** SetPersonaName****/
SteamAPICall_t Friends_SteamFriends015_SetPersonaName(char* pchPersonaName) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends015_SetPersonaName(pchPersonaName);
}

SteamAPICall_t Friends_SteamFriends013_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends014_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends011_SetPersonaName(char* pchPersonaName) {
    // FIXME: return type?
    Friends_SteamFriends013_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends009_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends011_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends008_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends009_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends007_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends008_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends006_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends007_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends005_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends006_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends004_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends005_SetPersonaName(pchPersonaName);
}

void Friends_SteamFriends003_SetPersonaName(char* pchPersonaName) {
    return Friends_SteamFriends004_SetPersonaName(pchPersonaName);
}

/**** GetPersonaState****/
EPersonaState_v2 Friends_SteamFriends015_GetPersonaState() {
    // FIXME: implement
    STUB();
    return k_EPersonaStateOffline_v2;
}

EPersonaState_v2 Friends_SteamFriends014_GetPersonaState() {
    return Friends_SteamFriends015_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends013_GetPersonaState() {
    return Friends_SteamFriends014_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends011_GetPersonaState() {
    return Friends_SteamFriends013_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends009_GetPersonaState() {
    return Friends_SteamFriends011_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends008_GetPersonaState() {
    return Friends_SteamFriends009_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends007_GetPersonaState() {
    return Friends_SteamFriends008_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends006_GetPersonaState() {
    return Friends_SteamFriends007_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends005_GetPersonaState() {
    return Friends_SteamFriends006_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends004_GetPersonaState() {
    return Friends_SteamFriends005_GetPersonaState();
}

EPersonaState_v2 Friends_SteamFriends003_GetPersonaState() {
    return Friends_SteamFriends004_GetPersonaState();
}

/**** GetFriendCount****/
int Friends_SteamFriends015_GetFriendCount(int iFriendFlags) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends015_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends013_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends014_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends011_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends013_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends009_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends011_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends008_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends009_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends007_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends008_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends006_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends007_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends005_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends006_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends004_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends005_GetFriendCount(iFriendFlags);
}

int Friends_SteamFriends003_GetFriendCount(int iFriendFlags) {
    return Friends_SteamFriends004_GetFriendCount(iFriendFlags);
}

/**** GetFriendByIndex****/
CSteamID Friends_SteamFriends015_GetFriendByIndex(int iFriend, int iFriendFlags) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends015_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends013_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends014_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends011_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends013_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends009_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends011_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends008_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends009_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends007_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends008_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends006_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends007_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends005_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends006_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends004_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends005_GetFriendByIndex(iFriend, iFriendFlags);
}

CSteamID Friends_SteamFriends003_GetFriendByIndex(int iFriend, int iFriendFlags) {
    return Friends_SteamFriends004_GetFriendByIndex(iFriend, iFriendFlags);
}

/**** GetFriendRelationship****/
EFriendRelationship_v2 Friends_SteamFriends015_GetFriendRelationship(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return k_EFriendRelationshipNone_v2;
}

EFriendRelationship_v2 Friends_SteamFriends014_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends013_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends011_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends009_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends008_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends007_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends006_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends007_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends005_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends006_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends004_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends005_GetFriendRelationship(steamIDFriend);
}

EFriendRelationship_v2 Friends_SteamFriends003_GetFriendRelationship(CSteamID steamIDFriend) {
    return Friends_SteamFriends004_GetFriendRelationship(steamIDFriend);
}

/**** GetFriendPersonaState****/
EPersonaState_v2 Friends_SteamFriends015_GetFriendPersonaState(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return k_EPersonaStateOffline_v2;
}

EPersonaState_v2 Friends_SteamFriends014_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends013_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends011_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends009_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends008_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends007_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends006_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends007_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends005_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends006_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends004_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends005_GetFriendPersonaState(steamIDFriend);
}

EPersonaState_v2 Friends_SteamFriends003_GetFriendPersonaState(CSteamID steamIDFriend) {
    return Friends_SteamFriends004_GetFriendPersonaState(steamIDFriend);
}

/**** GetFriendPersonaName****/
const char * Friends_SteamFriends015_GetFriendPersonaName(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends013_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends011_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends009_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends008_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends007_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends006_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends007_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends005_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends006_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends004_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends005_GetFriendPersonaName(steamIDFriend);
}

const char * Friends_SteamFriends003_GetFriendPersonaName(CSteamID steamIDFriend) {
    return Friends_SteamFriends004_GetFriendPersonaName(steamIDFriend);
}

/**** GetFriendAvatar****/
int Friends_SteamFriends006_GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends005_GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize) {
    return Friends_SteamFriends006_GetFriendAvatar(steamIDFriend, eAvatarSize);
}

int Friends_SteamFriends004_GetFriendAvatar(CSteamID steamIDFriend, int eAvatarSize) {
    return Friends_SteamFriends005_GetFriendAvatar(steamIDFriend, eAvatarSize);
}

int Friends_SteamFriends003_GetFriendAvatar(CSteamID steamIDFriend) {
    // FIXME: probably wrong
    EAvatarSize_v1 avatarSize = k_EAvatarSize32x32_v1;
    return Friends_SteamFriends004_GetFriendAvatar(steamIDFriend, avatarSize);
}

/**** GetFriendGamePlayed****/
bool Friends_SteamFriends015_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends015_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends013_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends014_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends011_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends013_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends009_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends011_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends008_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends009_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends007_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends008_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends006_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends007_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends005_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t_v1* pFriendGameInfo) {
    return Friends_SteamFriends006_GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

bool Friends_SteamFriends004_GetFriendGamePlayed(CSteamID steamIDFriend, uint64* pulGameID, uint32* punGameIP, uint16* pusGamePort, uint16* pusQueryPort) {
    // FIXME: probably wrong
    FriendGameInfo_t_v1 gameInfo;
    bool res = Friends_SteamFriends005_GetFriendGamePlayed(steamIDFriend, &gameInfo);
    *pulGameID = 0; // FIXME
    *punGameIP = gameInfo.m_unGameIP;
    *pusGamePort = gameInfo.m_usGamePort;
    *pusQueryPort = gameInfo.m_usQueryPort;
    return res;
}

bool Friends_SteamFriends003_GetFriendGamePlayed(CSteamID steamIDFriend, uint64* pulGameID, uint32* punGameIP, uint16* pusGamePort, uint16* pusQueryPort) {
    return Friends_SteamFriends004_GetFriendGamePlayed(steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
}

/**** GetFriendPersonaNameHistory****/
const char * Friends_SteamFriends015_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends015_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends013_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends014_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends011_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends013_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends009_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends011_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends008_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends009_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends007_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends008_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends006_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends007_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends005_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends006_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends004_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends005_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char * Friends_SteamFriends003_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) {
    return Friends_SteamFriends004_GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

/**** HasFriend****/
bool Friends_SteamFriends015_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends015_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends013_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends014_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends011_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends013_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends009_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends011_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends008_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends009_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends007_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends008_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends006_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends007_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends005_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends006_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends004_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends005_HasFriend(steamIDFriend, iFriendFlags);
}

bool Friends_SteamFriends003_HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
    return Friends_SteamFriends004_HasFriend(steamIDFriend, iFriendFlags);
}

/**** GetClanCount****/
int Friends_SteamFriends015_GetClanCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetClanCount() {
    return Friends_SteamFriends015_GetClanCount();
}

int Friends_SteamFriends013_GetClanCount() {
    return Friends_SteamFriends014_GetClanCount();
}

int Friends_SteamFriends011_GetClanCount() {
    return Friends_SteamFriends013_GetClanCount();
}

int Friends_SteamFriends009_GetClanCount() {
    return Friends_SteamFriends011_GetClanCount();
}

int Friends_SteamFriends008_GetClanCount() {
    return Friends_SteamFriends009_GetClanCount();
}

int Friends_SteamFriends007_GetClanCount() {
    return Friends_SteamFriends008_GetClanCount();
}

int Friends_SteamFriends006_GetClanCount() {
    return Friends_SteamFriends007_GetClanCount();
}

int Friends_SteamFriends005_GetClanCount() {
    return Friends_SteamFriends006_GetClanCount();
}

int Friends_SteamFriends004_GetClanCount() {
    return Friends_SteamFriends005_GetClanCount();
}

int Friends_SteamFriends003_GetClanCount() {
    return Friends_SteamFriends004_GetClanCount();
}

/**** GetClanByIndex****/
CSteamID Friends_SteamFriends015_GetClanByIndex(int iClan) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetClanByIndex(int iClan) {
    return Friends_SteamFriends015_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends013_GetClanByIndex(int iClan) {
    return Friends_SteamFriends014_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends011_GetClanByIndex(int iClan) {
    return Friends_SteamFriends013_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends009_GetClanByIndex(int iClan) {
    return Friends_SteamFriends011_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends008_GetClanByIndex(int iClan) {
    return Friends_SteamFriends009_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends007_GetClanByIndex(int iClan) {
    return Friends_SteamFriends008_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends006_GetClanByIndex(int iClan) {
    return Friends_SteamFriends007_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends005_GetClanByIndex(int iClan) {
    return Friends_SteamFriends006_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends004_GetClanByIndex(int iClan) {
    return Friends_SteamFriends005_GetClanByIndex(iClan);
}

CSteamID Friends_SteamFriends003_GetClanByIndex(int iClan) {
    return Friends_SteamFriends004_GetClanByIndex(iClan);
}

/**** GetClanName****/
const char * Friends_SteamFriends015_GetClanName(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends015_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends013_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends014_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends011_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends013_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends009_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends011_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends008_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends009_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends007_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends008_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends006_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends007_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends005_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends006_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends004_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends005_GetClanName(steamIDClan);
}

const char * Friends_SteamFriends003_GetClanName(CSteamID steamIDClan) {
    return Friends_SteamFriends004_GetClanName(steamIDClan);
}

/**** GetFriendCountFromSource****/
int Friends_SteamFriends015_GetFriendCountFromSource(CSteamID steamIDSource) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends015_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends013_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends014_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends011_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends013_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends009_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends011_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends008_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends009_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends007_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends008_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends006_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends007_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends005_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends006_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends004_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends005_GetFriendCountFromSource(steamIDSource);
}

int Friends_SteamFriends003_GetFriendCountFromSource(CSteamID steamIDSource) {
    return Friends_SteamFriends004_GetFriendCountFromSource(steamIDSource);
}

/**** GetFriendFromSourceByIndex****/
CSteamID Friends_SteamFriends015_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends015_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends013_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends014_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends011_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends013_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends009_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends011_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends008_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends009_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends007_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends008_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends006_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends007_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends005_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends006_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends004_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends005_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

CSteamID Friends_SteamFriends003_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) {
    return Friends_SteamFriends004_GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

/**** IsUserInSource****/
bool Friends_SteamFriends015_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends015_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends013_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends014_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends011_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends013_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends009_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends011_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends008_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends009_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends007_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends008_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends006_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends007_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends005_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends006_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends004_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends005_IsUserInSource(steamIDUser, steamIDSource);
}

bool Friends_SteamFriends003_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
    return Friends_SteamFriends004_IsUserInSource(steamIDUser, steamIDSource);
}

/**** SetInGameVoiceSpeaking****/
void Friends_SteamFriends015_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends015_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends013_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends014_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends011_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends013_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends009_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends011_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends008_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends009_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends007_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends008_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends006_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends007_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends005_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends006_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends004_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends005_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

void Friends_SteamFriends003_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
    return Friends_SteamFriends004_SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

/**** ActivateGameOverlay****/
void Friends_SteamFriends015_ActivateGameOverlay(char* pchDialog) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends015_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends013_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends014_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends011_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends013_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends009_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends011_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends008_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends009_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends007_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends008_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends006_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends007_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends005_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends006_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends004_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends005_ActivateGameOverlay(pchDialog);
}

void Friends_SteamFriends003_ActivateGameOverlay(char* pchDialog) {
    return Friends_SteamFriends004_ActivateGameOverlay(pchDialog);
}

/**** ActivateGameOverlayToUser****/
void Friends_SteamFriends015_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends015_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends013_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends014_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends011_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends013_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends009_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends011_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends008_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends009_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends007_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends008_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends006_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends007_ActivateGameOverlayToUser(pchDialog, steamID);
}

void Friends_SteamFriends005_ActivateGameOverlayToUser(char* pchDialog, CSteamID steamID) {
    return Friends_SteamFriends006_ActivateGameOverlayToUser(pchDialog, steamID);
}

/**** ActivateGameOverlayToWebPage****/
void Friends_SteamFriends015_ActivateGameOverlayToWebPage(char* pchURL) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends015_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends013_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends014_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends011_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends013_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends009_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends011_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends008_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends009_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends007_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends008_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends006_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends007_ActivateGameOverlayToWebPage(pchURL);
}

void Friends_SteamFriends005_ActivateGameOverlayToWebPage(char* pchURL) {
    return Friends_SteamFriends006_ActivateGameOverlayToWebPage(pchURL);
}

/**** ActivateGameOverlayToStore****/
void Friends_SteamFriends015_ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag_v1 eFlag) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag_v1 eFlag) {
    return Friends_SteamFriends015_ActivateGameOverlayToStore(nAppID, eFlag);
}

void Friends_SteamFriends013_ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag_v1 eFlag) {
    return Friends_SteamFriends014_ActivateGameOverlayToStore(nAppID, eFlag);
}

void Friends_SteamFriends011_ActivateGameOverlayToStore(AppId_t nAppID) {
    // FIXME: probably wrong
    EOverlayToStoreFlag_v1 eFlag = k_EOverlayToStoreFlag_None_v1;
    return Friends_SteamFriends013_ActivateGameOverlayToStore(nAppID, eFlag);
}

void Friends_SteamFriends009_ActivateGameOverlayToStore(AppId_t nAppID) {
    return Friends_SteamFriends011_ActivateGameOverlayToStore(nAppID);
}

void Friends_SteamFriends008_ActivateGameOverlayToStore(AppId_t nAppID) {
    return Friends_SteamFriends009_ActivateGameOverlayToStore(nAppID);
}

void Friends_SteamFriends007_ActivateGameOverlayToStore(AppId_t nAppID) {
    return Friends_SteamFriends008_ActivateGameOverlayToStore(nAppID);
}

void Friends_SteamFriends006_ActivateGameOverlayToStore(AppId_t nAppID) {
    return Friends_SteamFriends007_ActivateGameOverlayToStore(nAppID);
}

void Friends_SteamFriends005_ActivateGameOverlayToStore(AppId_t nAppID) {
    return Friends_SteamFriends006_ActivateGameOverlayToStore(nAppID);
}

/**** SetPlayedWith****/
void Friends_SteamFriends015_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends015_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends013_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends014_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends011_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends013_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends009_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends011_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends008_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends009_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends007_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends008_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends006_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends007_SetPlayedWith(steamIDUserPlayedWith);
}

void Friends_SteamFriends005_SetPlayedWith(CSteamID steamIDUserPlayedWith) {
    return Friends_SteamFriends006_SetPlayedWith(steamIDUserPlayedWith);
}

/**** GetClanTag****/
const char * Friends_SteamFriends015_GetClanTag(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends015_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends013_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends014_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends011_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends013_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends009_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends011_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends008_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends009_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends007_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends008_GetClanTag(steamIDClan);
}

const char * Friends_SteamFriends006_GetClanTag(CSteamID steamIDClan) {
    return Friends_SteamFriends007_GetClanTag(steamIDClan);
}

/**** ActivateGameOverlayInviteDialog****/
void Friends_SteamFriends015_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends015_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends013_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends014_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends011_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends013_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends009_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends011_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends008_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends009_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends007_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends008_ActivateGameOverlayInviteDialog(steamIDLobby);
}

void Friends_SteamFriends006_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
    return Friends_SteamFriends007_ActivateGameOverlayInviteDialog(steamIDLobby);
}

/**** GetSmallFriendAvatar****/
int Friends_SteamFriends015_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetSmallFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends013_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetSmallFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends011_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetSmallFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends009_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetSmallFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends008_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetSmallFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends007_GetSmallFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetSmallFriendAvatar(steamIDFriend);
}

/**** GetMediumFriendAvatar****/
int Friends_SteamFriends015_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetMediumFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends013_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetMediumFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends011_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetMediumFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends009_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetMediumFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends008_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetMediumFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends007_GetMediumFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetMediumFriendAvatar(steamIDFriend);
}

/**** GetLargeFriendAvatar****/
int Friends_SteamFriends015_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetLargeFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends013_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetLargeFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends011_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetLargeFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends009_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetLargeFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends008_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends009_GetLargeFriendAvatar(steamIDFriend);
}

int Friends_SteamFriends007_GetLargeFriendAvatar(CSteamID steamIDFriend) {
    return Friends_SteamFriends008_GetLargeFriendAvatar(steamIDFriend);
}

/**** RequestUserInformation****/
bool Friends_SteamFriends015_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    return Friends_SteamFriends015_RequestUserInformation(steamIDUser, bRequireNameOnly);
}

bool Friends_SteamFriends013_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    return Friends_SteamFriends014_RequestUserInformation(steamIDUser, bRequireNameOnly);
}

bool Friends_SteamFriends011_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    return Friends_SteamFriends013_RequestUserInformation(steamIDUser, bRequireNameOnly);
}

bool Friends_SteamFriends009_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    return Friends_SteamFriends011_RequestUserInformation(steamIDUser, bRequireNameOnly);
}

bool Friends_SteamFriends008_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) {
    return Friends_SteamFriends009_RequestUserInformation(steamIDUser, bRequireNameOnly);
}

/**** RequestClanOfficerList****/
SteamAPICall_t Friends_SteamFriends015_RequestClanOfficerList(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_RequestClanOfficerList(CSteamID steamIDClan) {
    return Friends_SteamFriends015_RequestClanOfficerList(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends013_RequestClanOfficerList(CSteamID steamIDClan) {
    return Friends_SteamFriends014_RequestClanOfficerList(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends011_RequestClanOfficerList(CSteamID steamIDClan) {
    return Friends_SteamFriends013_RequestClanOfficerList(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends009_RequestClanOfficerList(CSteamID steamIDClan) {
    return Friends_SteamFriends011_RequestClanOfficerList(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends008_RequestClanOfficerList(CSteamID steamIDClan) {
    return Friends_SteamFriends009_RequestClanOfficerList(steamIDClan);
}

/**** GetClanOwner****/
CSteamID Friends_SteamFriends015_GetClanOwner(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetClanOwner(CSteamID steamIDClan) {
    return Friends_SteamFriends015_GetClanOwner(steamIDClan);
}

CSteamID Friends_SteamFriends013_GetClanOwner(CSteamID steamIDClan) {
    return Friends_SteamFriends014_GetClanOwner(steamIDClan);
}

CSteamID Friends_SteamFriends011_GetClanOwner(CSteamID steamIDClan) {
    return Friends_SteamFriends013_GetClanOwner(steamIDClan);
}

CSteamID Friends_SteamFriends009_GetClanOwner(CSteamID steamIDClan) {
    return Friends_SteamFriends011_GetClanOwner(steamIDClan);
}

CSteamID Friends_SteamFriends008_GetClanOwner(CSteamID steamIDClan) {
    return Friends_SteamFriends009_GetClanOwner(steamIDClan);
}

/**** GetClanOfficerCount****/
int Friends_SteamFriends015_GetClanOfficerCount(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetClanOfficerCount(CSteamID steamIDClan) {
    return Friends_SteamFriends015_GetClanOfficerCount(steamIDClan);
}

int Friends_SteamFriends013_GetClanOfficerCount(CSteamID steamIDClan) {
    return Friends_SteamFriends014_GetClanOfficerCount(steamIDClan);
}

int Friends_SteamFriends011_GetClanOfficerCount(CSteamID steamIDClan) {
    return Friends_SteamFriends013_GetClanOfficerCount(steamIDClan);
}

int Friends_SteamFriends009_GetClanOfficerCount(CSteamID steamIDClan) {
    return Friends_SteamFriends011_GetClanOfficerCount(steamIDClan);
}

int Friends_SteamFriends008_GetClanOfficerCount(CSteamID steamIDClan) {
    return Friends_SteamFriends009_GetClanOfficerCount(steamIDClan);
}

/**** GetClanOfficerByIndex****/
CSteamID Friends_SteamFriends015_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    return Friends_SteamFriends015_GetClanOfficerByIndex(steamIDClan, iOfficer);
}

CSteamID Friends_SteamFriends013_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    return Friends_SteamFriends014_GetClanOfficerByIndex(steamIDClan, iOfficer);
}

CSteamID Friends_SteamFriends011_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    return Friends_SteamFriends013_GetClanOfficerByIndex(steamIDClan, iOfficer);
}

CSteamID Friends_SteamFriends009_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    return Friends_SteamFriends011_GetClanOfficerByIndex(steamIDClan, iOfficer);
}

CSteamID Friends_SteamFriends008_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) {
    return Friends_SteamFriends009_GetClanOfficerByIndex(steamIDClan, iOfficer);
}

/**** GetUserRestrictions****/
uint32 Friends_SteamFriends015_GetUserRestrictions() {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 Friends_SteamFriends014_GetUserRestrictions() {
    return Friends_SteamFriends015_GetUserRestrictions();
}

uint32 Friends_SteamFriends013_GetUserRestrictions() {
    return Friends_SteamFriends014_GetUserRestrictions();
}

uint32 Friends_SteamFriends011_GetUserRestrictions() {
    return Friends_SteamFriends013_GetUserRestrictions();
}

uint32 Friends_SteamFriends009_GetUserRestrictions() {
    return Friends_SteamFriends011_GetUserRestrictions();
}

uint32 Friends_SteamFriends008_GetUserRestrictions() {
    return Friends_SteamFriends009_GetUserRestrictions();
}

/**** SetRichPresence****/
bool Friends_SteamFriends015_SetRichPresence(char* pchKey, char* pchValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_SetRichPresence(char* pchKey, char* pchValue) {
    return Friends_SteamFriends015_SetRichPresence(pchKey, pchValue);
}

bool Friends_SteamFriends013_SetRichPresence(char* pchKey, char* pchValue) {
    return Friends_SteamFriends014_SetRichPresence(pchKey, pchValue);
}

bool Friends_SteamFriends011_SetRichPresence(char* pchKey, char* pchValue) {
    return Friends_SteamFriends013_SetRichPresence(pchKey, pchValue);
}

bool Friends_SteamFriends009_SetRichPresence(char* pchKey, char* pchValue) {
    return Friends_SteamFriends011_SetRichPresence(pchKey, pchValue);
}

/**** ClearRichPresence****/
void Friends_SteamFriends015_ClearRichPresence() {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_ClearRichPresence() {
    return Friends_SteamFriends015_ClearRichPresence();
}

void Friends_SteamFriends013_ClearRichPresence() {
    return Friends_SteamFriends014_ClearRichPresence();
}

void Friends_SteamFriends011_ClearRichPresence() {
    return Friends_SteamFriends013_ClearRichPresence();
}

void Friends_SteamFriends009_ClearRichPresence() {
    return Friends_SteamFriends011_ClearRichPresence();
}

/**** GetFriendRichPresence****/
const char * Friends_SteamFriends015_GetFriendRichPresence(CSteamID steamIDFriend, char* pchKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetFriendRichPresence(CSteamID steamIDFriend, char* pchKey) {
    return Friends_SteamFriends015_GetFriendRichPresence(steamIDFriend, pchKey);
}

const char * Friends_SteamFriends013_GetFriendRichPresence(CSteamID steamIDFriend, char* pchKey) {
    return Friends_SteamFriends014_GetFriendRichPresence(steamIDFriend, pchKey);
}

const char * Friends_SteamFriends011_GetFriendRichPresence(CSteamID steamIDFriend, char* pchKey) {
    return Friends_SteamFriends013_GetFriendRichPresence(steamIDFriend, pchKey);
}

const char * Friends_SteamFriends009_GetFriendRichPresence(CSteamID steamIDFriend, char* pchKey) {
    return Friends_SteamFriends011_GetFriendRichPresence(steamIDFriend, pchKey);
}

/**** GetFriendRichPresenceKeyCount****/
int Friends_SteamFriends015_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendRichPresenceKeyCount(steamIDFriend);
}

int Friends_SteamFriends013_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendRichPresenceKeyCount(steamIDFriend);
}

int Friends_SteamFriends011_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendRichPresenceKeyCount(steamIDFriend);
}

int Friends_SteamFriends009_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendRichPresenceKeyCount(steamIDFriend);
}

/**** GetFriendRichPresenceKeyByIndex****/
const char * Friends_SteamFriends015_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    return Friends_SteamFriends015_GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

const char * Friends_SteamFriends013_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    return Friends_SteamFriends014_GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

const char * Friends_SteamFriends011_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    return Friends_SteamFriends013_GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

const char * Friends_SteamFriends009_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) {
    return Friends_SteamFriends011_GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

/**** InviteUserToGame****/
bool Friends_SteamFriends015_InviteUserToGame(CSteamID steamIDFriend, char* pchConnectString) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_InviteUserToGame(CSteamID steamIDFriend, char* pchConnectString) {
    return Friends_SteamFriends015_InviteUserToGame(steamIDFriend, pchConnectString);
}

bool Friends_SteamFriends013_InviteUserToGame(CSteamID steamIDFriend, char* pchConnectString) {
    return Friends_SteamFriends014_InviteUserToGame(steamIDFriend, pchConnectString);
}

bool Friends_SteamFriends011_InviteUserToGame(CSteamID steamIDFriend, char* pchConnectString) {
    return Friends_SteamFriends013_InviteUserToGame(steamIDFriend, pchConnectString);
}

bool Friends_SteamFriends009_InviteUserToGame(CSteamID steamIDFriend, char* pchConnectString) {
    return Friends_SteamFriends011_InviteUserToGame(steamIDFriend, pchConnectString);
}

/**** GetCoplayFriendCount****/
int Friends_SteamFriends015_GetCoplayFriendCount() {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetCoplayFriendCount() {
    return Friends_SteamFriends015_GetCoplayFriendCount();
}

int Friends_SteamFriends013_GetCoplayFriendCount() {
    return Friends_SteamFriends014_GetCoplayFriendCount();
}

int Friends_SteamFriends011_GetCoplayFriendCount() {
    return Friends_SteamFriends013_GetCoplayFriendCount();
}

int Friends_SteamFriends009_GetCoplayFriendCount() {
    return Friends_SteamFriends011_GetCoplayFriendCount();
}

/**** GetCoplayFriend****/
CSteamID Friends_SteamFriends015_GetCoplayFriend(int iCoplayFriend) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetCoplayFriend(int iCoplayFriend) {
    return Friends_SteamFriends015_GetCoplayFriend(iCoplayFriend);
}

CSteamID Friends_SteamFriends013_GetCoplayFriend(int iCoplayFriend) {
    return Friends_SteamFriends014_GetCoplayFriend(iCoplayFriend);
}

CSteamID Friends_SteamFriends011_GetCoplayFriend(int iCoplayFriend) {
    return Friends_SteamFriends013_GetCoplayFriend(iCoplayFriend);
}

CSteamID Friends_SteamFriends009_GetCoplayFriend(int iCoplayFriend) {
    return Friends_SteamFriends011_GetCoplayFriend(iCoplayFriend);
}

/**** GetFriendCoplayTime****/
int Friends_SteamFriends015_GetFriendCoplayTime(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetFriendCoplayTime(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendCoplayTime(steamIDFriend);
}

int Friends_SteamFriends013_GetFriendCoplayTime(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendCoplayTime(steamIDFriend);
}

int Friends_SteamFriends011_GetFriendCoplayTime(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendCoplayTime(steamIDFriend);
}

int Friends_SteamFriends009_GetFriendCoplayTime(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendCoplayTime(steamIDFriend);
}

/**** GetFriendCoplayGame****/
AppId_t Friends_SteamFriends015_GetFriendCoplayGame(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

AppId_t Friends_SteamFriends014_GetFriendCoplayGame(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_GetFriendCoplayGame(steamIDFriend);
}

AppId_t Friends_SteamFriends013_GetFriendCoplayGame(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_GetFriendCoplayGame(steamIDFriend);
}

AppId_t Friends_SteamFriends011_GetFriendCoplayGame(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_GetFriendCoplayGame(steamIDFriend);
}

AppId_t Friends_SteamFriends009_GetFriendCoplayGame(CSteamID steamIDFriend) {
    return Friends_SteamFriends011_GetFriendCoplayGame(steamIDFriend);
}

/**** GetClanActivityCounts****/
bool Friends_SteamFriends015_GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) {
    return Friends_SteamFriends015_GetClanActivityCounts(steamIDClan, pnOnline, pnInGame, pnChatting);
}

bool Friends_SteamFriends013_GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) {
    return Friends_SteamFriends014_GetClanActivityCounts(steamIDClan, pnOnline, pnInGame, pnChatting);
}

bool Friends_SteamFriends011_GetClanActivityCounts(CSteamID steamIDClan, int* pnOnline, int* pnInGame, int* pnChatting) {
    return Friends_SteamFriends013_GetClanActivityCounts(steamIDClan, pnOnline, pnInGame, pnChatting);
}

/**** DownloadClanActivityCounts****/
SteamAPICall_t Friends_SteamFriends015_DownloadClanActivityCounts(CSteamID* psteamIDClans, int cClansToRequest) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_DownloadClanActivityCounts(CSteamID* psteamIDClans, int cClansToRequest) {
    return Friends_SteamFriends015_DownloadClanActivityCounts(psteamIDClans, cClansToRequest);
}

SteamAPICall_t Friends_SteamFriends013_DownloadClanActivityCounts(CSteamID* psteamIDClans, int cClansToRequest) {
    return Friends_SteamFriends014_DownloadClanActivityCounts(psteamIDClans, cClansToRequest);
}

SteamAPICall_t Friends_SteamFriends011_DownloadClanActivityCounts(CSteamID* psteamIDClans, int cClansToRequest) {
    return Friends_SteamFriends013_DownloadClanActivityCounts(psteamIDClans, cClansToRequest);
}

/**** RequestFriendRichPresence****/
void Friends_SteamFriends015_RequestFriendRichPresence(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
}

void Friends_SteamFriends014_RequestFriendRichPresence(CSteamID steamIDFriend) {
    return Friends_SteamFriends015_RequestFriendRichPresence(steamIDFriend);
}

void Friends_SteamFriends013_RequestFriendRichPresence(CSteamID steamIDFriend) {
    return Friends_SteamFriends014_RequestFriendRichPresence(steamIDFriend);
}

void Friends_SteamFriends011_RequestFriendRichPresence(CSteamID steamIDFriend) {
    return Friends_SteamFriends013_RequestFriendRichPresence(steamIDFriend);
}

/**** JoinClanChatRoom****/
SteamAPICall_t Friends_SteamFriends015_JoinClanChatRoom(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_JoinClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends015_JoinClanChatRoom(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends013_JoinClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends014_JoinClanChatRoom(steamIDClan);
}

SteamAPICall_t Friends_SteamFriends011_JoinClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends013_JoinClanChatRoom(steamIDClan);
}

/**** LeaveClanChatRoom****/
bool Friends_SteamFriends015_LeaveClanChatRoom(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_LeaveClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends015_LeaveClanChatRoom(steamIDClan);
}

bool Friends_SteamFriends013_LeaveClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends014_LeaveClanChatRoom(steamIDClan);
}

bool Friends_SteamFriends011_LeaveClanChatRoom(CSteamID steamIDClan) {
    return Friends_SteamFriends013_LeaveClanChatRoom(steamIDClan);
}

/**** GetClanChatMemberCount****/
int Friends_SteamFriends015_GetClanChatMemberCount(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetClanChatMemberCount(CSteamID steamIDClan) {
    return Friends_SteamFriends015_GetClanChatMemberCount(steamIDClan);
}

int Friends_SteamFriends013_GetClanChatMemberCount(CSteamID steamIDClan) {
    return Friends_SteamFriends014_GetClanChatMemberCount(steamIDClan);
}

int Friends_SteamFriends011_GetClanChatMemberCount(CSteamID steamIDClan) {
    return Friends_SteamFriends013_GetClanChatMemberCount(steamIDClan);
}

/**** GetChatMemberByIndex****/
CSteamID Friends_SteamFriends015_GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
    // FIXME: implement
    STUB();
    return CSteamID();
}

CSteamID Friends_SteamFriends014_GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
    return Friends_SteamFriends015_GetChatMemberByIndex(steamIDClan, iUser);
}

CSteamID Friends_SteamFriends013_GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
    return Friends_SteamFriends014_GetChatMemberByIndex(steamIDClan, iUser);
}

CSteamID Friends_SteamFriends011_GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
    return Friends_SteamFriends013_GetChatMemberByIndex(steamIDClan, iUser);
}

/**** SendClanChatMessage****/
bool Friends_SteamFriends015_SendClanChatMessage(CSteamID steamIDClanChat, char* pchText) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_SendClanChatMessage(CSteamID steamIDClanChat, char* pchText) {
    return Friends_SteamFriends015_SendClanChatMessage(steamIDClanChat, pchText);
}

bool Friends_SteamFriends013_SendClanChatMessage(CSteamID steamIDClanChat, char* pchText) {
    return Friends_SteamFriends014_SendClanChatMessage(steamIDClanChat, pchText);
}

bool Friends_SteamFriends011_SendClanChatMessage(CSteamID steamIDClanChat, char* pchText) {
    return Friends_SteamFriends013_SendClanChatMessage(steamIDClanChat, pchText);
}

/**** GetClanChatMessage****/
int Friends_SteamFriends015_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType_v1* pEntryType, CSteamID* pSteamID) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType_v1* pEntryType, CSteamID* pSteamID) {
    return Friends_SteamFriends015_GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, pEntryType, pSteamID);
}

int Friends_SteamFriends013_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType_v1* pEntryType, CSteamID* pSteamID) {
    return Friends_SteamFriends014_GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, pEntryType, pSteamID);
}

int Friends_SteamFriends011_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void* prgchText, int cchTextMax, EChatEntryType_v1* pEntryType, CSteamID* pSteamID) {
    return Friends_SteamFriends013_GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, pEntryType, pSteamID);
}

/**** IsClanChatAdmin****/
bool Friends_SteamFriends015_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) {
    return Friends_SteamFriends015_IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

bool Friends_SteamFriends013_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) {
    return Friends_SteamFriends014_IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

bool Friends_SteamFriends011_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) {
    return Friends_SteamFriends013_IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

/**** IsClanChatWindowOpenInSteam****/
bool Friends_SteamFriends015_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends015_IsClanChatWindowOpenInSteam(steamIDClanChat);
}

bool Friends_SteamFriends013_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends014_IsClanChatWindowOpenInSteam(steamIDClanChat);
}

bool Friends_SteamFriends011_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends013_IsClanChatWindowOpenInSteam(steamIDClanChat);
}

/**** OpenClanChatWindowInSteam****/
bool Friends_SteamFriends015_OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends015_OpenClanChatWindowInSteam(steamIDClanChat);
}

bool Friends_SteamFriends013_OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends014_OpenClanChatWindowInSteam(steamIDClanChat);
}

bool Friends_SteamFriends011_OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends013_OpenClanChatWindowInSteam(steamIDClanChat);
}

/**** CloseClanChatWindowInSteam****/
bool Friends_SteamFriends015_CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends015_CloseClanChatWindowInSteam(steamIDClanChat);
}

bool Friends_SteamFriends013_CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends014_CloseClanChatWindowInSteam(steamIDClanChat);
}

bool Friends_SteamFriends011_CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
    return Friends_SteamFriends013_CloseClanChatWindowInSteam(steamIDClanChat);
}

/**** SetListenForFriendsMessages****/
bool Friends_SteamFriends015_SetListenForFriendsMessages(bool bInterceptEnabled) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_SetListenForFriendsMessages(bool bInterceptEnabled) {
    return Friends_SteamFriends015_SetListenForFriendsMessages(bInterceptEnabled);
}

bool Friends_SteamFriends013_SetListenForFriendsMessages(bool bInterceptEnabled) {
    return Friends_SteamFriends014_SetListenForFriendsMessages(bInterceptEnabled);
}

bool Friends_SteamFriends011_SetListenForFriendsMessages(bool bInterceptEnabled) {
    return Friends_SteamFriends013_SetListenForFriendsMessages(bInterceptEnabled);
}

/**** ReplyToFriendMessage****/
bool Friends_SteamFriends015_ReplyToFriendMessage(CSteamID steamIDFriend, char* pchMsgToSend) {
    // FIXME: implement
    STUB();
    return false;
}

bool Friends_SteamFriends014_ReplyToFriendMessage(CSteamID steamIDFriend, char* pchMsgToSend) {
    return Friends_SteamFriends015_ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}

bool Friends_SteamFriends013_ReplyToFriendMessage(CSteamID steamIDFriend, char* pchMsgToSend) {
    return Friends_SteamFriends014_ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}

bool Friends_SteamFriends011_ReplyToFriendMessage(CSteamID steamIDFriend, char* pchMsgToSend) {
    return Friends_SteamFriends013_ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}

/**** GetFriendMessage****/
int Friends_SteamFriends015_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    // FIXME: implement
    STUB();
    return 0;
}

int Friends_SteamFriends014_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Friends_SteamFriends015_GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

int Friends_SteamFriends013_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Friends_SteamFriends014_GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

int Friends_SteamFriends011_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void* pvData, int cubData, EChatEntryType_v1* peChatEntryType) {
    return Friends_SteamFriends013_GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

/**** GetFollowerCount****/
SteamAPICall_t Friends_SteamFriends015_GetFollowerCount(CSteamID steamID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_GetFollowerCount(CSteamID steamID) {
    return Friends_SteamFriends015_GetFollowerCount(steamID);
}

SteamAPICall_t Friends_SteamFriends013_GetFollowerCount(CSteamID steamID) {
    return Friends_SteamFriends014_GetFollowerCount(steamID);
}

SteamAPICall_t Friends_SteamFriends011_GetFollowerCount(CSteamID steamID) {
    return Friends_SteamFriends013_GetFollowerCount(steamID);
}

/**** IsFollowing****/
SteamAPICall_t Friends_SteamFriends015_IsFollowing(CSteamID steamID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_IsFollowing(CSteamID steamID) {
    return Friends_SteamFriends015_IsFollowing(steamID);
}

SteamAPICall_t Friends_SteamFriends013_IsFollowing(CSteamID steamID) {
    return Friends_SteamFriends014_IsFollowing(steamID);
}

SteamAPICall_t Friends_SteamFriends011_IsFollowing(CSteamID steamID) {
    return Friends_SteamFriends013_IsFollowing(steamID);
}

/**** EnumerateFollowingList****/
SteamAPICall_t Friends_SteamFriends015_EnumerateFollowingList(uint32 unStartIndex) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Friends_SteamFriends014_EnumerateFollowingList(uint32 unStartIndex) {
    return Friends_SteamFriends015_EnumerateFollowingList(unStartIndex);
}

SteamAPICall_t Friends_SteamFriends013_EnumerateFollowingList(uint32 unStartIndex) {
    return Friends_SteamFriends014_EnumerateFollowingList(unStartIndex);
}

SteamAPICall_t Friends_SteamFriends011_EnumerateFollowingList(uint32 unStartIndex) {
    return Friends_SteamFriends013_EnumerateFollowingList(unStartIndex);
}

/**** GetPlayerNickname****/
const char * Friends_SteamFriends015_GetPlayerNickname(CSteamID steamIDPlayer) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Friends_SteamFriends014_GetPlayerNickname(CSteamID steamIDPlayer) {
    return Friends_SteamFriends015_GetPlayerNickname(steamIDPlayer);
}

/**** GetFriendSteamLevel****/
int Friends_SteamFriends015_GetFriendSteamLevel(CSteamID steamIDFriend) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetFriendsGroupCount****/
int Friends_SteamFriends015_GetFriendsGroupCount() {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetFriendsGroupIDByIndex****/
FriendsGroupID_t Friends_SteamFriends015_GetFriendsGroupIDByIndex(int iFG) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetFriendsGroupName****/
const char * Friends_SteamFriends015_GetFriendsGroupName(FriendsGroupID_t friendsGroupID) {
    // FIXME: implement
    STUB();
    return NULL;
}

/**** GetFriendsGroupMembersCount****/
int Friends_SteamFriends015_GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetFriendsGroupMembersList****/
void Friends_SteamFriends015_GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID* pOutSteamIDMembers, int nMembersCount) {
    // FIXME: implement
    STUB();
}

/**** IsClanPublic****/
bool Friends_SteamFriends015_IsClanPublic(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return false;
}

/**** IsClanOfficialGameGroup****/
bool Friends_SteamFriends015_IsClanOfficialGameGroup(CSteamID steamIDClan) {
    // FIXME: implement
    STUB();
    return false;
}

