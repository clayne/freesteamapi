#include "steam_api.h"

/**** CreateListenSocket****/
SNetListenSocket_t Networking_SteamNetworking005_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) {
    // FIXME: implement
    STUB();
    return 0;
}

SNetListenSocket_t Networking_SteamNetworking004_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking005_CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetListenSocket_t Networking_SteamNetworking003_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking004_CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetListenSocket_t Networking_SteamNetworking002_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking003_CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetListenSocket_t Networking_SteamNetworking001_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort) {
    // FIXME: probably wrong
    bool bAllowUseOfPacketRelay = true;
    return Networking_SteamNetworking002_CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

/**** CreateP2PConnectionSocket****/
SNetSocket_t Networking_SteamNetworking005_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) {
    // FIXME: implement
    STUB();
    return 0;
}

SNetSocket_t Networking_SteamNetworking004_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking005_CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

SNetSocket_t Networking_SteamNetworking003_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking004_CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

SNetSocket_t Networking_SteamNetworking002_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) {
    return Networking_SteamNetworking003_CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

SNetSocket_t Networking_SteamNetworking001_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec) {
    // FIXME: probably wrong
    bool bAllowUseOfPacketRelay = true;
    return Networking_SteamNetworking002_CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

/**** CreateConnectionSocket****/
SNetSocket_t Networking_SteamNetworking005_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    // FIXME: implement
    STUB();
    return 0;
}

SNetSocket_t Networking_SteamNetworking004_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    return Networking_SteamNetworking005_CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

SNetSocket_t Networking_SteamNetworking003_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    return Networking_SteamNetworking004_CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

SNetSocket_t Networking_SteamNetworking002_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    return Networking_SteamNetworking003_CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

SNetSocket_t Networking_SteamNetworking001_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) {
    return Networking_SteamNetworking002_CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

/**** DestroySocket****/
bool Networking_SteamNetworking005_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking005_DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking003_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking004_DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking002_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking003_DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking001_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking002_DestroySocket(hSocket, bNotifyRemoteEnd);
}

/**** DestroyListenSocket****/
bool Networking_SteamNetworking005_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking005_DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking003_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking004_DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking002_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking003_DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool Networking_SteamNetworking001_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
    return Networking_SteamNetworking002_DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

/**** SendDataOnSocket****/
bool Networking_SteamNetworking005_SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable) {
    return Networking_SteamNetworking005_SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool Networking_SteamNetworking003_SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable) {
    return Networking_SteamNetworking004_SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool Networking_SteamNetworking002_SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable) {
    return Networking_SteamNetworking003_SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool Networking_SteamNetworking001_SendDataOnSocket(SNetSocket_t hSocket, void* pubData, uint32 cubData, bool bReliable) {
    return Networking_SteamNetworking002_SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

/**** IsDataAvailableOnSocket****/
bool Networking_SteamNetworking005_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize) {
    return Networking_SteamNetworking005_IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool Networking_SteamNetworking003_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize) {
    return Networking_SteamNetworking004_IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool Networking_SteamNetworking002_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize) {
    return Networking_SteamNetworking003_IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool Networking_SteamNetworking001_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32* pcubMsgSize) {
    return Networking_SteamNetworking002_IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

/**** RetrieveDataFromSocket****/
bool Networking_SteamNetworking005_RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    return Networking_SteamNetworking005_RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool Networking_SteamNetworking003_RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    return Networking_SteamNetworking004_RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool Networking_SteamNetworking002_RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    return Networking_SteamNetworking003_RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool Networking_SteamNetworking001_RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    return Networking_SteamNetworking002_RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

/**** IsDataAvailable****/
bool Networking_SteamNetworking005_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking005_IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking003_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking004_IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking002_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking003_IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking001_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking002_IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

/**** RetrieveData****/
bool Networking_SteamNetworking005_RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking005_RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking003_RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking004_RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking002_RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking003_RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool Networking_SteamNetworking001_RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, uint32 cubDest, uint32* pcubMsgSize, SNetSocket_t* phSocket) {
    return Networking_SteamNetworking002_RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

/**** GetSocketInfo****/
bool Networking_SteamNetworking005_GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, uint32* punIPRemote, uint16* punPortRemote) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, uint32* punIPRemote, uint16* punPortRemote) {
    return Networking_SteamNetworking005_GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool Networking_SteamNetworking003_GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, uint32* punIPRemote, uint16* punPortRemote) {
    return Networking_SteamNetworking004_GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool Networking_SteamNetworking002_GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, uint32* punIPRemote, uint16* punPortRemote) {
    return Networking_SteamNetworking003_GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool Networking_SteamNetworking001_GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, int* peSocketStatus, uint32* punIPRemote, uint16* punPortRemote) {
    return Networking_SteamNetworking002_GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

/**** GetListenSocketInfo****/
bool Networking_SteamNetworking005_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32* pnIP, uint16* pnPort) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32* pnIP, uint16* pnPort) {
    return Networking_SteamNetworking005_GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

bool Networking_SteamNetworking003_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32* pnIP, uint16* pnPort) {
    return Networking_SteamNetworking004_GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

bool Networking_SteamNetworking002_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32* pnIP, uint16* pnPort) {
    return Networking_SteamNetworking003_GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

bool Networking_SteamNetworking001_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32* pnIP, uint16* pnPort) {
    return Networking_SteamNetworking002_GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

/**** GetSocketConnectionType****/
ESNetSocketConnectionType_v1 Networking_SteamNetworking005_GetSocketConnectionType(SNetSocket_t hSocket) {
    // FIXME: implement
    STUB();
    return k_ESNetSocketConnectionTypeNotConnected_v1;
}

ESNetSocketConnectionType_v1 Networking_SteamNetworking004_GetSocketConnectionType(SNetSocket_t hSocket) {
    return Networking_SteamNetworking005_GetSocketConnectionType(hSocket);
}

ESNetSocketConnectionType_v1 Networking_SteamNetworking003_GetSocketConnectionType(SNetSocket_t hSocket) {
    return Networking_SteamNetworking004_GetSocketConnectionType(hSocket);
}

ESNetSocketConnectionType_v1 Networking_SteamNetworking002_GetSocketConnectionType(SNetSocket_t hSocket) {
    return Networking_SteamNetworking003_GetSocketConnectionType(hSocket);
}

/**** GetMaxPacketSize****/
int Networking_SteamNetworking005_GetMaxPacketSize(SNetSocket_t hSocket) {
    // FIXME: implement
    STUB();
    return 0;
}

int Networking_SteamNetworking004_GetMaxPacketSize(SNetSocket_t hSocket) {
    return Networking_SteamNetworking005_GetMaxPacketSize(hSocket);
}

int Networking_SteamNetworking003_GetMaxPacketSize(SNetSocket_t hSocket) {
    return Networking_SteamNetworking004_GetMaxPacketSize(hSocket);
}

int Networking_SteamNetworking002_GetMaxPacketSize(SNetSocket_t hSocket) {
    return Networking_SteamNetworking003_GetMaxPacketSize(hSocket);
}

/**** SendP2PPacket****/
bool Networking_SteamNetworking005_SendP2PPacket(CSteamID steamIDRemote, void* pubData, uint32 cubData, EP2PSend_v1 eP2PSendType, int nVirtualPort) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_SendP2PPacket(CSteamID steamIDRemote, void* pubData, uint32 cubData, EP2PSend_v1 eP2PSendType, int nVirtualPort) {
    return Networking_SteamNetworking005_SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, nVirtualPort);
}

bool Networking_SteamNetworking003_SendP2PPacket(CSteamID steamIDRemote, void* pubData, uint32 cubData, EP2PSend_v1 eP2PSendType) {
    // FIXME: probably wrong
    int nVirtualPort = 0;
    return Networking_SteamNetworking004_SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, nVirtualPort);
}

/**** IsP2PPacketAvailable****/
bool Networking_SteamNetworking005_IsP2PPacketAvailable(uint32* pcubMsgSize, int nVirtualPort) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_IsP2PPacketAvailable(uint32* pcubMsgSize, int nVirtualPort) {
    return Networking_SteamNetworking005_IsP2PPacketAvailable(pcubMsgSize, nVirtualPort);
}

bool Networking_SteamNetworking003_IsP2PPacketAvailable(uint32* pcubMsgSize) {
    // FIXME: probably wrong
    int nVirtualPort = 0;
    return Networking_SteamNetworking004_IsP2PPacketAvailable(pcubMsgSize, nVirtualPort);
}

/**** ReadP2PPacket****/
bool Networking_SteamNetworking005_ReadP2PPacket(void* pubDest, uint32 cubDest, uint32* pcubMsgSize, CSteamID* psteamIDRemote, int nVirtualPort) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_ReadP2PPacket(void* pubDest, uint32 cubDest, uint32* pcubMsgSize, CSteamID* psteamIDRemote, int nVirtualPort) {
    return Networking_SteamNetworking005_ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, nVirtualPort);
}

bool Networking_SteamNetworking003_ReadP2PPacket(void* pubDest, uint32 cubDest, uint32* pcubMsgSize, CSteamID* psteamIDRemote) {
    // FIXME: probably wrong
    int nVirtualPort = 0;
    return Networking_SteamNetworking004_ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, nVirtualPort);
}

/**** AcceptP2PSessionWithUser****/
bool Networking_SteamNetworking005_AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
    return Networking_SteamNetworking005_AcceptP2PSessionWithUser(steamIDRemote);
}

bool Networking_SteamNetworking003_AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
    return Networking_SteamNetworking004_AcceptP2PSessionWithUser(steamIDRemote);
}

/**** CloseP2PSessionWithUser****/
bool Networking_SteamNetworking005_CloseP2PSessionWithUser(CSteamID steamIDRemote) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_CloseP2PSessionWithUser(CSteamID steamIDRemote) {
    return Networking_SteamNetworking005_CloseP2PSessionWithUser(steamIDRemote);
}

bool Networking_SteamNetworking003_CloseP2PSessionWithUser(CSteamID steamIDRemote) {
    return Networking_SteamNetworking004_CloseP2PSessionWithUser(steamIDRemote);
}

/**** GetP2PSessionState****/
bool Networking_SteamNetworking005_GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t_v1* pConnectionState) {
    // FIXME: implement
    STUB();
    return false;
}

bool Networking_SteamNetworking004_GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t_v1* pConnectionState) {
    return Networking_SteamNetworking005_GetP2PSessionState(steamIDRemote, pConnectionState);
}

bool Networking_SteamNetworking003_GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t_v1* pConnectionState) {
    return Networking_SteamNetworking004_GetP2PSessionState(steamIDRemote, pConnectionState);
}

/**** CloseP2PChannelWithUser****/
bool Networking_SteamNetworking005_CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel) {
    // FIXME: implement
    STUB();
    return false;
}

/**** AllowP2PPacketRelay****/
bool Networking_SteamNetworking005_AllowP2PPacketRelay(bool bAllow) {
    // FIXME: implement
    STUB();
    return false;
}

