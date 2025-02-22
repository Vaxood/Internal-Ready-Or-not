#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ChatBox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C
// 0x0030 (0x0290 - 0x0260)
class UW_ChatBox_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       ChatBox;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_165;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEditingChatbox;                                   // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTeamChat_;                                        // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ETeamType                                     ChatToTeam;                                        // 0x027A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MouseCursorAfterChat;                              // 0x027B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PreplanningChat;                                   // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ESlateVisibility                              PostChatVisibility;                                // 0x027D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ChatVisibility;                                    // 0x027E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4082[0x1];                                     // 0x027F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRChatMessage>                  NewVar_0;                                          // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_ChatBox(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UChatMessage_Entry_C* CallFunc_Create_ReturnValue, TArray<struct FRChatMessage>& CallFunc_RetrieveChatLog_OutMessages, int32 CallFunc_Array_Length_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text, ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRChatMessage& K2Node_CustomEvent_Message, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, TDelegate<void(const struct FRChatMessage& Message)> K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud_1, bool CallFunc_LoadHUDSettings_bCurvedHUD_1, bool CallFunc_LoadHUDSettings_bShowCompass_1, bool CallFunc_LoadHUDSettings_bShowWeaponHUD_1, bool CallFunc_LoadHUDSettings_bShowMagazineHUD_1, bool CallFunc_LoadHUDSettings_bShowChat_1, bool CallFunc_LoadHUDSettings_bSwayHUD_1, bool CallFunc_LoadHUDSettings_b2DReload_1, float CallFunc_LoadHUDSettings_IconScale_1, float CallFunc_LoadHUDSettings_QuickThrowScale_1, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption_1, bool CallFunc_LoadHUDSettings_bShowPlayerNames_1, bool CallFunc_LoadHUDSettings_bShowButtonPrompts_1, bool CallFunc_LoadHUDSettings_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, const class FString& CallFunc_GetPlayerName_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_3, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage, ETeamType CallFunc_GetTeam_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage_1);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void UpdateHudVisibility();
	void HideChatBox();
	void HideChat();
	void OnChatMessageReceived_Event_0(const struct FRChatMessage& Message);
	void BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, ETextCommit CommitMethod);
	void Construct();
	void ShowChatBox(bool Param_bTeamChat_, bool AnyInViewport, int32 Temp_int_Array_Index_Variable, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void SetInput(TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ChatBox_C">();
	}
	static class UW_ChatBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ChatBox_C>();
	}
};
static_assert(alignof(UW_ChatBox_C) == 0x000008, "Wrong alignment on UW_ChatBox_C");
static_assert(sizeof(UW_ChatBox_C) == 0x000290, "Wrong size on UW_ChatBox_C");
static_assert(offsetof(UW_ChatBox_C, UberGraphFrame) == 0x000260, "Member 'UW_ChatBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, ChatBox) == 0x000268, "Member 'UW_ChatBox_C::ChatBox' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, ScrollBox_165) == 0x000270, "Member 'UW_ChatBox_C::ScrollBox_165' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, bEditingChatbox) == 0x000278, "Member 'UW_ChatBox_C::bEditingChatbox' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, bTeamChat_) == 0x000279, "Member 'UW_ChatBox_C::bTeamChat_' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, ChatToTeam) == 0x00027A, "Member 'UW_ChatBox_C::ChatToTeam' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, MouseCursorAfterChat) == 0x00027B, "Member 'UW_ChatBox_C::MouseCursorAfterChat' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, PreplanningChat) == 0x00027C, "Member 'UW_ChatBox_C::PreplanningChat' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, PostChatVisibility) == 0x00027D, "Member 'UW_ChatBox_C::PostChatVisibility' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, ChatVisibility) == 0x00027E, "Member 'UW_ChatBox_C::ChatVisibility' has a wrong offset!");
static_assert(offsetof(UW_ChatBox_C, NewVar_0) == 0x000280, "Member 'UW_ChatBox_C::NewVar_0' has a wrong offset!");

}

