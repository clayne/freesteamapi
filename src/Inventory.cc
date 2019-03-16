#include "steam_api.h"

/**** GetResultStatus****/
EResult_v1 Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(SteamInventoryResult_t resultHandle) {
    // FIXME: implement
    STUB();
    return k_EResultFail;
}

EResult_v1 Inventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(SteamInventoryResult_t resultHandle) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(resultHandle);
}

/**** GetResultItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t_v1* pOutItemsArray, uint32* punOutItemsArraySize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t_v1* pOutItemsArray, uint32* punOutItemsArraySize) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(resultHandle, pOutItemsArray, punOutItemsArraySize);
}

/**** GetResultTimestamp****/
uint32 Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(SteamInventoryResult_t resultHandle) {
    // FIXME: implement
    STUB();
    return 0;
}

uint32 Inventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(SteamInventoryResult_t resultHandle) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(resultHandle);
}

/**** CheckResultSteamID****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(resultHandle, steamIDExpected);
}

/**** DestroyResult****/
void Inventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(SteamInventoryResult_t resultHandle) {
    // FIXME: implement
    STUB();
}

void Inventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(SteamInventoryResult_t resultHandle) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(resultHandle);
}

/**** GetAllItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(SteamInventoryResult_t* pResultHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(SteamInventoryResult_t* pResultHandle) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(pResultHandle);
}

/**** GetItemsByID****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t* pInstanceIDs, uint32 unCountInstanceIDs) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t* pInstanceIDs, uint32 unCountInstanceIDs) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

/**** SerializeResult****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(SteamInventoryResult_t resultHandle, void* pOutBuffer, uint32* punOutBufferSize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(SteamInventoryResult_t resultHandle, void* pOutBuffer, uint32* punOutBufferSize) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(resultHandle, pOutBuffer, punOutBufferSize);
}

/**** DeserializeResult****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(SteamInventoryResult_t* pOutResultHandle, void* pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(SteamInventoryResult_t* pOutResultHandle, void* pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

/**** GenerateItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayItemDefs, uint32* punArrayQuantity, uint32 unArrayLength) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayItemDefs, uint32* punArrayQuantity, uint32 unArrayLength) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

/**** GrantPromoItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(SteamInventoryResult_t* pResultHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(SteamInventoryResult_t* pResultHandle) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(pResultHandle);
}

/**** AddPromoItem****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(SteamInventoryResult_t* pResultHandle, SteamItemDef_t itemDef) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(SteamInventoryResult_t* pResultHandle, SteamItemDef_t itemDef) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(pResultHandle, itemDef);
}

/**** AddPromoItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayItemDefs, uint32 unArrayLength) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayItemDefs, uint32 unArrayLength) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(pResultHandle, pArrayItemDefs, unArrayLength);
}

/**** ConsumeItem****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(pResultHandle, itemConsume, unQuantity);
}

/**** ExchangeItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayGenerate, uint32* punArrayGenerateQuantity, uint32 unArrayGenerateLength, SteamItemInstanceID_t* pArrayDestroy, uint32* punArrayDestroyQuantity, uint32 unArrayDestroyLength) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(SteamInventoryResult_t* pResultHandle, SteamItemDef_t* pArrayGenerate, uint32* punArrayGenerateQuantity, uint32 unArrayGenerateLength, SteamItemInstanceID_t* pArrayDestroy, uint32* punArrayDestroyQuantity, uint32 unArrayDestroyLength) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

/**** TransferItemQuantity****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(SteamInventoryResult_t* pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

/**** SendItemDropHeartbeat****/
void Inventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat() {
    // FIXME: implement
    STUB();
}

void Inventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat() {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat();
}

/**** TriggerItemDrop****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(SteamInventoryResult_t* pResultHandle, SteamItemDef_t dropListDefinition) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(SteamInventoryResult_t* pResultHandle, SteamItemDef_t dropListDefinition) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(pResultHandle, dropListDefinition);
}

/**** TradeItems****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(SteamInventoryResult_t* pResultHandle, CSteamID steamIDTradePartner, SteamItemInstanceID_t* pArrayGive, uint32* pArrayGiveQuantity, uint32 nArrayGiveLength, SteamItemInstanceID_t* pArrayGet, uint32* pArrayGetQuantity, uint32 nArrayGetLength) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(SteamInventoryResult_t* pResultHandle, CSteamID steamIDTradePartner, SteamItemInstanceID_t* pArrayGive, uint32* pArrayGiveQuantity, uint32 nArrayGiveLength, SteamItemInstanceID_t* pArrayGet, uint32* pArrayGetQuantity, uint32 nArrayGetLength) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

/**** LoadItemDefinitions****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions() {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions() {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions();
}

/**** GetItemDefinitionIDs****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(SteamItemDef_t* pItemDefIDs, uint32* punItemDefIDsArraySize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(SteamItemDef_t* pItemDefIDs, uint32* punItemDefIDsArraySize) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(pItemDefIDs, punItemDefIDsArraySize);
}

/**** GetItemDefinitionProperty****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(SteamItemDef_t iDefinition, char* pchPropertyName, char* pchValueBuffer, uint32* punValueBufferSizeOut) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(SteamItemDef_t iDefinition, char* pchPropertyName, char* pchValueBuffer, uint32* punValueBufferSizeOut) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

/**** RequestEligiblePromoItemDefinitionsIDs****/
SteamAPICall_t Inventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) {
    // FIXME: implement
    STUB();
    return 0;
}

SteamAPICall_t Inventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(steamID);
}

/**** GetEligiblePromoItemDefinitionIDs****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t* pItemDefIDs, uint32* punItemDefIDsArraySize) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t* pItemDefIDs, uint32* punItemDefIDsArraySize) {
    return Inventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(steamID, pItemDefIDs, punItemDefIDsArraySize);
}

/**** GetResultItemProperty****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, char* pchPropertyName, char* pchValueBuffer, uint32* punValueBufferSizeOut) {
    // FIXME: implement
    STUB();
    return false;
}

/**** StartPurchase****/
SteamAPICall_t Inventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(SteamItemDef_t* pArrayItemDefs, uint32* punArrayQuantity, uint32 unArrayLength) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** RequestPrices****/
SteamAPICall_t Inventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices() {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetNumItemsWithPrices****/
uint32 Inventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices() {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetItemsWithPrices****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(SteamItemDef_t* pArrayItemDefs, uint64* pPrices, uint32 unArrayLength) {
    // FIXME: implement
    STUB();
    return false;
}

/**** GetItemPrice****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(SteamItemDef_t iDefinition, uint64* pPrice) {
    // FIXME: implement
    STUB();
    return false;
}

/**** StartUpdateProperties****/
SteamInventoryUpdateHandle_t Inventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties() {
    // FIXME: implement
    STUB();
    return 0;
}

/**** RemoveProperty****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, char* pchPropertyName) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SetProperty****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, char* pchPropertyName, float flValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, char* pchPropertyName, int64 nValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, char* pchPropertyName, bool bValue) {
    // FIXME: implement
    STUB();
    return false;
}

bool Inventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, char* pchPropertyName, char* pchPropertyValue) {
    // FIXME: implement
    STUB();
    return false;
}

/**** SubmitUpdateProperties****/
bool Inventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t* pResultHandle) {
    // FIXME: implement
    STUB();
    return false;
}

