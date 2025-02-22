#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PauseMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "UMG_structs.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PauseMenu.W_PauseMenu_C
// 0x00C0 (0x03E0 - 0x0320)
class UW_PauseMenu_C final  : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                AdminPasswordBox;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BackgroundCanvas;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Admin;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Bug;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_ConfirmAdminPassword;                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Invite;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Lobby;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_LobbyManager;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Options;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Quit;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Replay;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Resume;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Vote;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonDescription;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditableText_0;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EscapeMenu;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ObjectivesBox;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PublicLobbyWarning;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Version;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*               W_Briefing_Objectives;                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WasShowingMouse;                                   // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3676[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_SettingsMenu_C*                      SettingsMenu;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallVoteMenu;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_PauseMenu(int32 EntryPoint, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsAdminPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UBP_MessageDisplayBox_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAdminPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, TArray<class UW_SettingsMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable_1, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_BugReporterMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_4, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_5, bool K2Node_DynamicCast_bSuccess_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_10, class UW_Button_C* K2Node_ComponentBoundEvent_Button_9, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_8, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_6, bool K2Node_DynamicCast_bSuccess_10, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class ULevelStreaming* CallFunc_StreamInLevel_OutStreamedLevel, bool CallFunc_StreamInLevel_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_1, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_2, bool CallFunc_IsPublicMissionInProgress_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetPublicLobbyCooldown_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_12, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_13);
	void BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature();
	void BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Destruct();
	void BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Resume();
	void Construct();
	class FText Get_Version_Text_0(const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	ESlateVisibility Get_HorizontalBox_25_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	ESlateVisibility GetMissionBoxVisibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess);
	bool GetCallVoteEnabled(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	ESlateVisibility Get_btn_Invite_Visibility_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess);
	ESlateVisibility Get_btn_Lobby_Visibility_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PauseMenu_C">();
	}
	static class UW_PauseMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PauseMenu_C>();
	}
};
static_assert(alignof(UW_PauseMenu_C) == 0x000008, "Wrong alignment on UW_PauseMenu_C");
static_assert(sizeof(UW_PauseMenu_C) == 0x0003E0, "Wrong size on UW_PauseMenu_C");
static_assert(offsetof(UW_PauseMenu_C, UberGraphFrame) == 0x000320, "Member 'UW_PauseMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, AdminPasswordBox) == 0x000328, "Member 'UW_PauseMenu_C::AdminPasswordBox' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, BackgroundCanvas) == 0x000330, "Member 'UW_PauseMenu_C::BackgroundCanvas' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Admin) == 0x000338, "Member 'UW_PauseMenu_C::btn_Admin' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Bug) == 0x000340, "Member 'UW_PauseMenu_C::btn_Bug' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_ConfirmAdminPassword) == 0x000348, "Member 'UW_PauseMenu_C::btn_ConfirmAdminPassword' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Invite) == 0x000350, "Member 'UW_PauseMenu_C::btn_Invite' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Lobby) == 0x000358, "Member 'UW_PauseMenu_C::btn_Lobby' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_LobbyManager) == 0x000360, "Member 'UW_PauseMenu_C::btn_LobbyManager' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Options) == 0x000368, "Member 'UW_PauseMenu_C::btn_Options' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Quit) == 0x000370, "Member 'UW_PauseMenu_C::btn_Quit' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Replay) == 0x000378, "Member 'UW_PauseMenu_C::btn_Replay' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Resume) == 0x000380, "Member 'UW_PauseMenu_C::btn_Resume' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, btn_Vote) == 0x000388, "Member 'UW_PauseMenu_C::btn_Vote' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, ButtonDescription) == 0x000390, "Member 'UW_PauseMenu_C::ButtonDescription' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, EditableText_0) == 0x000398, "Member 'UW_PauseMenu_C::EditableText_0' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, EscapeMenu) == 0x0003A0, "Member 'UW_PauseMenu_C::EscapeMenu' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, ObjectivesBox) == 0x0003A8, "Member 'UW_PauseMenu_C::ObjectivesBox' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, PublicLobbyWarning) == 0x0003B0, "Member 'UW_PauseMenu_C::PublicLobbyWarning' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, Txt_Version) == 0x0003B8, "Member 'UW_PauseMenu_C::Txt_Version' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, W_Briefing_Objectives) == 0x0003C0, "Member 'UW_PauseMenu_C::W_Briefing_Objectives' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, WasShowingMouse) == 0x0003C8, "Member 'UW_PauseMenu_C::WasShowingMouse' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, SettingsMenu) == 0x0003D0, "Member 'UW_PauseMenu_C::SettingsMenu' has a wrong offset!");
static_assert(offsetof(UW_PauseMenu_C, CallVoteMenu) == 0x0003D8, "Member 'UW_PauseMenu_C::CallVoteMenu' has a wrong offset!");

}

