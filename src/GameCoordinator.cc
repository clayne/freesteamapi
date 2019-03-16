#include "steam_api.h"

/**** SendMessage****/
EGCResults_v1 GameCoordinator_SteamGameCoordinator001_SendMessage(uint32 unMsgType, void* pubData, uint32 cubData) {
    // FIXME: implement
    STUB();
    return k_EGCResultOK_v1;
}

/**** IsMessageAvailable****/
bool GameCoordinator_SteamGameCoordinator001_IsMessageAvailable(uint32* pcubMsgSize) {
    // FIXME: implement
    STUB();
    return false;
}

/**** RetrieveMessage****/
EGCResults_v1 GameCoordinator_SteamGameCoordinator001_RetrieveMessage(uint32* punMsgType, void* pubDest, uint32 cubDest, uint32* pcubMsgSize) {
    // FIXME: implement
    STUB();
    return k_EGCResultOK_v1;
}

