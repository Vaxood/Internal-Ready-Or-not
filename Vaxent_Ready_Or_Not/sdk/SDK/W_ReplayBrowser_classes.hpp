#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ReplayBrowser

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ReplayBrowser.W_ReplayBrowser_C
// 0x0118 (0x0438 - 0x0320)
class UW_ReplayBrowser_C final  : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Blackout;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_42;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Date;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Duration;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Grade;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Level;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Mission;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Name;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelImage;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ReplayList;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                       W_PageWrapper;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Replay_DetailPanel_C*                W_Replay_DetailPanel;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReplayEntry_C*                       SelectedReplay;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                     PresetModal;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ReplayEntry_C*                       CurrentActiveEntry;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReplayData                            CurrentReplayData;                                 // 0x03A8(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CurrentFileName;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_ReplayBrowser(int32 EntryPoint, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, TDelegate<void(class UW_StandardModal_C* CallingModal, class FText TextEntry)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_StandardModal_C* CallFunc_Create_ReturnValue_1, TDelegate<void(class UW_StandardModal_C* CallingModal, class FText TextEntry)> K2Node_CreateDelegate_OutputDelegate_1, class UW_StandardModal_C* CallFunc_AddModalToCanvas_PresetModal, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TDelegate<void(class UW_StandardModal_C* CallingModal, class FText TextEntry)> K2Node_CreateDelegate_OutputDelegate_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, const TMap<class FString, struct FReplayData>& CallFunc_FindReplays_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const struct FReplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText Temp_text_Variable, class FText K2Node_CustomEvent_ReplayName, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UW_ReplayEntry_C* K2Node_CustomEvent_ReplayEntry, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, struct FVector2D& Temp_struct_Variable, struct FVector2D& Temp_struct_Variable_1, TDelegate<void(class UW_StandardModal_C* CallingModal, class FText TextEntry)> K2Node_CreateDelegate_OutputDelegate_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_3, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_4, class FText Temp_text_Variable_6, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess);
	void ModalCanceledButton(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void DeleteReplay(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void CreateDeleteConfirmModal();
	void BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_1_OnDeleteReplayClicked__DelegateSignature();
	void BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_0_OnRenameFileClicked__DelegateSignature();
	void GetLevelPreviewImage();
	void EntrySelected(class UW_ReplayEntry_C* ReplayEntry);
	void RenameOkButton(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void CreateRenameModal(class FText ReplayName);
	void Construct();
	void RefreshReplayList();
	void OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662(class UObject* Loaded);
	bool Get_RenameButton_bIsEnabled_0(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_SaveSettings_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void CreateEntryWidget(const class FString& ReplayFileName, const struct FReplayData& ReplayData, int32 Param_Index, class UW_ReplayEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TDelegate<void(class UW_ReplayEntry_C* TriggeringEntry)> K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateBackgroundImage(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue);
	void AddModalToCanvas(class UW_StandardModal_C* Modal, class UW_StandardModal_C** Param_PresetModal, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void PlaySelectedReplay(class UReadyOrNotGameInstance* GameInstance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFMODBus*>& CallFunc_GetAllFMODBusObjects_ReturnValue, class UFMODBus* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OpenReplayFolder(const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ReplayBrowser_C">();
	}
	static class UW_ReplayBrowser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ReplayBrowser_C>();
	}
};
static_assert(alignof(UW_ReplayBrowser_C) == 0x000008, "Wrong alignment on UW_ReplayBrowser_C");
static_assert(sizeof(UW_ReplayBrowser_C) == 0x000438, "Wrong size on UW_ReplayBrowser_C");
static_assert(offsetof(UW_ReplayBrowser_C, UberGraphFrame) == 0x000320, "Member 'UW_ReplayBrowser_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Blackout) == 0x000328, "Member 'UW_ReplayBrowser_C::Blackout' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, CanvasPanel_0) == 0x000330, "Member 'UW_ReplayBrowser_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Image_42) == 0x000338, "Member 'UW_ReplayBrowser_C::Image_42' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Date) == 0x000340, "Member 'UW_ReplayBrowser_C::Lbl_Date' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Duration) == 0x000348, "Member 'UW_ReplayBrowser_C::Lbl_Duration' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Grade) == 0x000350, "Member 'UW_ReplayBrowser_C::Lbl_Grade' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Level) == 0x000358, "Member 'UW_ReplayBrowser_C::Lbl_Level' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Mission) == 0x000360, "Member 'UW_ReplayBrowser_C::Lbl_Mission' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, Lbl_Name) == 0x000368, "Member 'UW_ReplayBrowser_C::Lbl_Name' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, LevelImage) == 0x000370, "Member 'UW_ReplayBrowser_C::LevelImage' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, ReplayList) == 0x000378, "Member 'UW_ReplayBrowser_C::ReplayList' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, W_PageWrapper) == 0x000380, "Member 'UW_ReplayBrowser_C::W_PageWrapper' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, W_Replay_DetailPanel) == 0x000388, "Member 'UW_ReplayBrowser_C::W_Replay_DetailPanel' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, SelectedReplay) == 0x000390, "Member 'UW_ReplayBrowser_C::SelectedReplay' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, PresetModal) == 0x000398, "Member 'UW_ReplayBrowser_C::PresetModal' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, CurrentActiveEntry) == 0x0003A0, "Member 'UW_ReplayBrowser_C::CurrentActiveEntry' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, CurrentReplayData) == 0x0003A8, "Member 'UW_ReplayBrowser_C::CurrentReplayData' has a wrong offset!");
static_assert(offsetof(UW_ReplayBrowser_C, CurrentFileName) == 0x000428, "Member 'UW_ReplayBrowser_C::CurrentFileName' has a wrong offset!");

}

