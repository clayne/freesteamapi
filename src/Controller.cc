#include "steam_api.h"

/**** Init****/
bool Controller_SteamController006_Init() {
    // FIXME: implement
    STUB();
    return false;
}

bool Controller_SteamController005_Init() {
    return Controller_SteamController006_Init();
}

bool Controller_SteamController004_Init() {
    return Controller_SteamController005_Init();
}

bool Controller_SteamController003_Init() {
    return Controller_SteamController004_Init();
}

bool Controller_STEAMCONTROLLER_INTERFACE_VERSION_Init(char* pchAbsolutePathToControllerConfigVDF) {
    // FIXME: probably wrong
    return Controller_SteamController003_Init();
}

/**** Shutdown****/
bool Controller_SteamController006_Shutdown() {
    // FIXME: implement
    STUB();
    return false;
}

bool Controller_SteamController005_Shutdown() {
    return Controller_SteamController006_Shutdown();
}

bool Controller_SteamController004_Shutdown() {
    return Controller_SteamController005_Shutdown();
}

bool Controller_SteamController003_Shutdown() {
    return Controller_SteamController004_Shutdown();
}

bool Controller_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown() {
    return Controller_SteamController003_Shutdown();
}

/**** RunFrame****/
void Controller_SteamController006_RunFrame() {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_RunFrame() {
    return Controller_SteamController006_RunFrame();
}

void Controller_SteamController004_RunFrame() {
    return Controller_SteamController005_RunFrame();
}

void Controller_SteamController003_RunFrame() {
    return Controller_SteamController004_RunFrame();
}

void Controller_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame() {
    return Controller_SteamController003_RunFrame();
}

/**** GetControllerState****/
bool Controller_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(uint32 unControllerIndex, SteamControllerState_t_v1* pState) {
    // FIXME: implement
    STUB();
    return false;
}

/**** TriggerHapticPulse****/
void Controller_SteamController006_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec) {
    return Controller_SteamController006_TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
}

void Controller_SteamController004_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec) {
    return Controller_SteamController005_TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
}

void Controller_SteamController003_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec) {
    return Controller_SteamController004_TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
}

void Controller_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(uint32 unControllerIndex, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec) {
    // FIXME: probably wrong
    ControllerHandle_t controllerHandle = unControllerIndex;
    return Controller_SteamController003_TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
}

/**** SetOverrideMode****/
void Controller_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(char* pchMode) {
    // FIXME: implement
    STUB();
}

/**** GetConnectedControllers****/
int Controller_SteamController006_GetConnectedControllers(ControllerHandle_t* handlesOut) {
    // FIXME: implement
    STUB();
    return 0;
}

int Controller_SteamController005_GetConnectedControllers(ControllerHandle_t* handlesOut) {
    return Controller_SteamController006_GetConnectedControllers(handlesOut);
}

int Controller_SteamController004_GetConnectedControllers(ControllerHandle_t* handlesOut) {
    return Controller_SteamController005_GetConnectedControllers(handlesOut);
}

int Controller_SteamController003_GetConnectedControllers(ControllerHandle_t* handlesOut) {
    return Controller_SteamController004_GetConnectedControllers(handlesOut);
}

/**** ShowBindingPanel****/
bool Controller_SteamController006_ShowBindingPanel(ControllerHandle_t controllerHandle) {
    // FIXME: implement
    STUB();
    return false;
}

bool Controller_SteamController005_ShowBindingPanel(ControllerHandle_t controllerHandle) {
    return Controller_SteamController006_ShowBindingPanel(controllerHandle);
}

bool Controller_SteamController004_ShowBindingPanel(ControllerHandle_t controllerHandle) {
    return Controller_SteamController005_ShowBindingPanel(controllerHandle);
}

bool Controller_SteamController003_ShowBindingPanel(ControllerHandle_t controllerHandle) {
    return Controller_SteamController004_ShowBindingPanel(controllerHandle);
}

/**** GetActionSetHandle****/
ControllerActionSetHandle_t Controller_SteamController006_GetActionSetHandle(char* pszActionSetName) {
    // FIXME: implement
    STUB();
    return 0;
}

ControllerActionSetHandle_t Controller_SteamController005_GetActionSetHandle(char* pszActionSetName) {
    return Controller_SteamController006_GetActionSetHandle(pszActionSetName);
}

ControllerActionSetHandle_t Controller_SteamController004_GetActionSetHandle(char* pszActionSetName) {
    return Controller_SteamController005_GetActionSetHandle(pszActionSetName);
}

ControllerActionSetHandle_t Controller_SteamController003_GetActionSetHandle(char* pszActionSetName) {
    return Controller_SteamController004_GetActionSetHandle(pszActionSetName);
}

/**** ActivateActionSet****/
void Controller_SteamController006_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) {
    return Controller_SteamController006_ActivateActionSet(controllerHandle, actionSetHandle);
}

void Controller_SteamController004_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) {
    return Controller_SteamController005_ActivateActionSet(controllerHandle, actionSetHandle);
}

void Controller_SteamController003_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) {
    return Controller_SteamController004_ActivateActionSet(controllerHandle, actionSetHandle);
}

/**** GetCurrentActionSet****/
ControllerActionSetHandle_t Controller_SteamController006_GetCurrentActionSet(ControllerHandle_t controllerHandle) {
    // FIXME: implement
    STUB();
    return 0;
}

ControllerActionSetHandle_t Controller_SteamController005_GetCurrentActionSet(ControllerHandle_t controllerHandle) {
    return Controller_SteamController006_GetCurrentActionSet(controllerHandle);
}

ControllerActionSetHandle_t Controller_SteamController004_GetCurrentActionSet(ControllerHandle_t controllerHandle) {
    return Controller_SteamController005_GetCurrentActionSet(controllerHandle);
}

ControllerActionSetHandle_t Controller_SteamController003_GetCurrentActionSet(ControllerHandle_t controllerHandle) {
    return Controller_SteamController004_GetCurrentActionSet(controllerHandle);
}

/**** GetDigitalActionHandle****/
ControllerDigitalActionHandle_t Controller_SteamController006_GetDigitalActionHandle(char* pszActionName) {
    // FIXME: implement
    STUB();
    return 0;
}

ControllerDigitalActionHandle_t Controller_SteamController005_GetDigitalActionHandle(char* pszActionName) {
    return Controller_SteamController006_GetDigitalActionHandle(pszActionName);
}

ControllerDigitalActionHandle_t Controller_SteamController004_GetDigitalActionHandle(char* pszActionName) {
    return Controller_SteamController005_GetDigitalActionHandle(pszActionName);
}

ControllerDigitalActionHandle_t Controller_SteamController003_GetDigitalActionHandle(char* pszActionName) {
    return Controller_SteamController004_GetDigitalActionHandle(pszActionName);
}

/**** GetDigitalActionData****/
ControllerDigitalActionData_t_v1 Controller_SteamController006_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) {
    // FIXME: implement
    STUB();
    return ControllerDigitalActionData_t_v1{};
}

ControllerDigitalActionData_t_v1 Controller_SteamController005_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) {
    return Controller_SteamController006_GetDigitalActionData(controllerHandle, digitalActionHandle);
}

ControllerDigitalActionData_t_v1 Controller_SteamController004_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) {
    return Controller_SteamController005_GetDigitalActionData(controllerHandle, digitalActionHandle);
}

ControllerDigitalActionData_t_v1 Controller_SteamController003_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) {
    return Controller_SteamController004_GetDigitalActionData(controllerHandle, digitalActionHandle);
}

/**** GetDigitalActionOrigins****/
int Controller_SteamController006_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin_v1* originsOut) {
    // FIXME: implement
    STUB();
    return 0;
}

int Controller_SteamController005_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController006_GetDigitalActionOrigins(controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

int Controller_SteamController004_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController005_GetDigitalActionOrigins(controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

int Controller_SteamController003_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController004_GetDigitalActionOrigins(controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

/**** GetAnalogActionHandle****/
ControllerAnalogActionHandle_t Controller_SteamController006_GetAnalogActionHandle(char* pszActionName) {
    // FIXME: implement
    STUB();
    return 0;
}

ControllerAnalogActionHandle_t Controller_SteamController005_GetAnalogActionHandle(char* pszActionName) {
    return Controller_SteamController006_GetAnalogActionHandle(pszActionName);
}

ControllerAnalogActionHandle_t Controller_SteamController004_GetAnalogActionHandle(char* pszActionName) {
    return Controller_SteamController005_GetAnalogActionHandle(pszActionName);
}

ControllerAnalogActionHandle_t Controller_SteamController003_GetAnalogActionHandle(char* pszActionName) {
    return Controller_SteamController004_GetAnalogActionHandle(pszActionName);
}

/**** GetAnalogActionData****/
ControllerAnalogActionData_t_v1 Controller_SteamController006_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) {
    // FIXME: implement
    STUB();
    return ControllerAnalogActionData_t_v1 {};
}

ControllerAnalogActionData_t_v1 Controller_SteamController005_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) {
    return Controller_SteamController006_GetAnalogActionData(controllerHandle, analogActionHandle);
}

ControllerAnalogActionData_t_v1 Controller_SteamController004_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) {
    return Controller_SteamController005_GetAnalogActionData(controllerHandle, analogActionHandle);
}

ControllerAnalogActionData_t_v1 Controller_SteamController003_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) {
    return Controller_SteamController004_GetAnalogActionData(controllerHandle, analogActionHandle);
}

/**** GetAnalogActionOrigins****/
int Controller_SteamController006_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin_v1* originsOut) {
    // FIXME: implement
    STUB();
    return 0;
}

int Controller_SteamController005_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController006_GetAnalogActionOrigins(controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

int Controller_SteamController004_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController005_GetAnalogActionOrigins(controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

int Controller_SteamController003_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin_v1* originsOut) {
    return Controller_SteamController004_GetAnalogActionOrigins(controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

/**** StopAnalogActionMomentum****/
void Controller_SteamController006_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) {
    return Controller_SteamController006_StopAnalogActionMomentum(controllerHandle, eAction);
}

void Controller_SteamController004_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) {
    return Controller_SteamController005_StopAnalogActionMomentum(controllerHandle, eAction);
}

void Controller_SteamController003_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) {
    return Controller_SteamController004_StopAnalogActionMomentum(controllerHandle, eAction);
}

/**** TriggerRepeatedHapticPulse****/
void Controller_SteamController006_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) {
    return Controller_SteamController006_TriggerRepeatedHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void Controller_SteamController004_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) {
    return Controller_SteamController005_TriggerRepeatedHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void Controller_SteamController003_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad_v1 eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) {
    return Controller_SteamController004_TriggerRepeatedHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

/**** GetGamepadIndexForController****/
int Controller_SteamController006_GetGamepadIndexForController(ControllerHandle_t ulControllerHandle) {
    // FIXME: implement
    STUB();
    return 0;
}

int Controller_SteamController005_GetGamepadIndexForController(ControllerHandle_t ulControllerHandle) {
    return Controller_SteamController006_GetGamepadIndexForController(ulControllerHandle);
}

int Controller_SteamController004_GetGamepadIndexForController(ControllerHandle_t ulControllerHandle) {
    return Controller_SteamController005_GetGamepadIndexForController(ulControllerHandle);
}

/**** GetControllerForGamepadIndex****/
ControllerHandle_t Controller_SteamController006_GetControllerForGamepadIndex(int nIndex) {
    // FIXME: implement
    STUB();
    return 0;
}

ControllerHandle_t Controller_SteamController005_GetControllerForGamepadIndex(int nIndex) {
    return Controller_SteamController006_GetControllerForGamepadIndex(nIndex);
}

ControllerHandle_t Controller_SteamController004_GetControllerForGamepadIndex(int nIndex) {
    return Controller_SteamController005_GetControllerForGamepadIndex(nIndex);
}

/**** GetMotionData****/
ControllerMotionData_t_v1 Controller_SteamController006_GetMotionData(ControllerHandle_t controllerHandle) {
    // FIXME: implement
    STUB();
    return ControllerMotionData_t_v1{};
}

ControllerMotionData_t_v1 Controller_SteamController005_GetMotionData(ControllerHandle_t controllerHandle) {
    return Controller_SteamController006_GetMotionData(controllerHandle);
}

ControllerMotionData_t_v1 Controller_SteamController004_GetMotionData(ControllerHandle_t controllerHandle) {
    return Controller_SteamController005_GetMotionData(controllerHandle);
}

/**** ShowDigitalActionOrigins****/
bool Controller_SteamController006_ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition) {
    // FIXME: implement
    STUB();
    return false;
}

bool Controller_SteamController005_ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition) {
    return Controller_SteamController006_ShowDigitalActionOrigins(controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
}

bool Controller_SteamController004_ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition) {
    return Controller_SteamController005_ShowDigitalActionOrigins(controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
}

/**** ShowAnalogActionOrigins****/
bool Controller_SteamController006_ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition) {
    // FIXME: implement
    STUB();
    return false;
}

bool Controller_SteamController005_ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition) {
    return Controller_SteamController006_ShowAnalogActionOrigins(controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
}

bool Controller_SteamController004_ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition) {
    return Controller_SteamController005_ShowAnalogActionOrigins(controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
}

/**** TriggerVibration****/
void Controller_SteamController006_TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed) {
    return Controller_SteamController006_TriggerVibration(controllerHandle, usLeftSpeed, usRightSpeed);
}

/**** SetLEDColor****/
void Controller_SteamController006_SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags) {
    // FIXME: implement
    STUB();
}

void Controller_SteamController005_SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags) {
    return Controller_SteamController006_SetLEDColor(controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

/**** GetStringForActionOrigin****/
const char * Controller_SteamController006_GetStringForActionOrigin(EControllerActionOrigin_v1 eOrigin) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Controller_SteamController005_GetStringForActionOrigin(EControllerActionOrigin_v1 eOrigin) {
    return Controller_SteamController006_GetStringForActionOrigin(eOrigin);
}

/**** GetGlyphForActionOrigin****/
const char * Controller_SteamController006_GetGlyphForActionOrigin(EControllerActionOrigin_v1 eOrigin) {
    // FIXME: implement
    STUB();
    return NULL;
}

const char * Controller_SteamController005_GetGlyphForActionOrigin(EControllerActionOrigin_v1 eOrigin) {
    return Controller_SteamController006_GetGlyphForActionOrigin(eOrigin);
}

/**** ActivateActionSetLayer****/
void Controller_SteamController006_ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle) {
    // FIXME: implement
    STUB();
}

/**** DeactivateActionSetLayer****/
void Controller_SteamController006_DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle) {
    // FIXME: implement
    STUB();
}

/**** DeactivateAllActionSetLayers****/
void Controller_SteamController006_DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle) {
    // FIXME: implement
    STUB();
}

/**** GetActiveActionSetLayers****/
int Controller_SteamController006_GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t* handlesOut) {
    // FIXME: implement
    STUB();
    return 0;
}

/**** GetInputTypeForHandle****/
ESteamInputType_v1 Controller_SteamController006_GetInputTypeForHandle(ControllerHandle_t controllerHandle) {
    // FIXME: implement
    STUB();
    return k_ESteamInputType_Unknown_v1;
}

