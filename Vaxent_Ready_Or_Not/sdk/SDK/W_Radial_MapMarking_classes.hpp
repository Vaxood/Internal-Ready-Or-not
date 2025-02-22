#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Radial_MapMarking

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "FBasicIconSettings_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Radial_MapMarking.W_Radial_MapMarking_C
// 0x01D8 (0x0438 - 0x0260)
class UW_Radial_MapMarking_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimRevealSubMenu;                                 // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_BgFade;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                      InnerRadial;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                      OutterRadial;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RadialCanvas;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SB_Hotkey;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_2;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_CategoryName;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Secondary;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                   W_HotkeyBar_Entry;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FKey>                           BackKeys;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FKey>                           SubmitKeys;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible)
	class UUMG_RadialMenu_C*                      MainRadial;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                      SubRadial;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bCanGoBack;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3439[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SubmenuCommit;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Cancel;                                            // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                             CategoriesDataTable;                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             MarkersDataTable;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBasicIconSettings                    IconStyle;                                         // 0x0328(0x0028)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconSize;                                          // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_343A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MainRadialMaterial;                                // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SubRadialMaterial;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      GoldTeamMaterial;                                  // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      RedTeamMaterial;                                   // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BlueTeamMaterial;                                  // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSwatCommand                           CurrentSelectedCommand;                            // 0x0380(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_RadialIcon_MapMarking_C*             CurrentCategory;                                   // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCollapsed;                                       // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SubmenuOpen;                                       // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_343B[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSubmenuCollapse;                                 // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_RadialIcon_MapMarking_C*             CurrentMarker;                                     // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InnerRadius;                                       // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OuterRadius;                                       // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseHoverSelect;                                    // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_343C[0x7];                                     // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RadialMenu_C*                      ActiveRadial;                                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUsingGamepad;                                    // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGamepadHoveringSelection;                        // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SubmenuCommit__DelegateSignature(class FName Category, class FName MarkerName);
	void Cancel__DelegateSignature();
	void OnCollapsed__DelegateSignature();
	void OnSubmenuCollapse__DelegateSignature();
	void ExecuteUbergraph_W_Radial_MapMarking(int32 EntryPoint, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue_1, class FName CallFunc_Array_Get_Item, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& K2Node_CustomEvent_ID, class FText K2Node_CustomEvent_DisplayName, class UTexture2D* K2Node_CustomEvent_IconImage, bool K2Node_CustomEvent_HasSubCommands, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_AddChildToRadialMenu_Success_1, const struct FSt_PreMissionMarkers& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUserWidget* CallFunc_GetChild_Output, bool CallFunc_GetChild_Success, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 K2Node_ComponentBoundEvent_NewSelection_1, int32 K2Node_ComponentBoundEvent_OldSelection_1, class UUserWidget* CallFunc_GetChild_Output_1, bool CallFunc_GetChild_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_ComponentBoundEvent_NewSelection, int32 K2Node_ComponentBoundEvent_OldSelection, class UUserWidget* CallFunc_GetChild_Output_2, bool CallFunc_GetChild_Success_2, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void InputChange(ECommonInputType bNewInputType);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void OpenSubmenu();
	void OnPageViewUpdate_1();
	void CollapseSubMenu();
	void CollapseRadial();
	void Submit();
	void SelectionMade();
	void GoBack();
	void Construct();
	void Populate();
	void AddCategory(const class FString& ID, class FText DisplayName, class UTexture2D* IconImage, bool HasSubCommands);
	void PopulateSubmenu();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Finished_344D667B4B5F9FD05121C694FD14ED92();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void Update_Position(const struct FVector2D& Coordinates, const struct FVector2D& RawCoordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetGamepadInputDirection(class UUMG_RadialMenu_C* UMGRadial, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void HandleGamepad(class UUMG_RadialMenu_C* UMGRadial, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void InitGamepadSupport(TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Radial_MapMarking_C">();
	}
	static class UW_Radial_MapMarking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Radial_MapMarking_C>();
	}
};
static_assert(alignof(UW_Radial_MapMarking_C) == 0x000008, "Wrong alignment on UW_Radial_MapMarking_C");
static_assert(sizeof(UW_Radial_MapMarking_C) == 0x000438, "Wrong size on UW_Radial_MapMarking_C");
static_assert(offsetof(UW_Radial_MapMarking_C, UberGraphFrame) == 0x000260, "Member 'UW_Radial_MapMarking_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, AnimRevealSubMenu) == 0x000268, "Member 'UW_Radial_MapMarking_C::AnimRevealSubMenu' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, AnimReveal) == 0x000270, "Member 'UW_Radial_MapMarking_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, Img_BgFade) == 0x000278, "Member 'UW_Radial_MapMarking_C::Img_BgFade' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, InnerRadial) == 0x000280, "Member 'UW_Radial_MapMarking_C::InnerRadial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, OutterRadial) == 0x000288, "Member 'UW_Radial_MapMarking_C::OutterRadial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, RadialCanvas) == 0x000290, "Member 'UW_Radial_MapMarking_C::RadialCanvas' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SB_Hotkey) == 0x000298, "Member 'UW_Radial_MapMarking_C::SB_Hotkey' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, ScaleBox_2) == 0x0002A0, "Member 'UW_Radial_MapMarking_C::ScaleBox_2' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, Txt_CategoryName) == 0x0002A8, "Member 'UW_Radial_MapMarking_C::Txt_CategoryName' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, Txt_Secondary) == 0x0002B0, "Member 'UW_Radial_MapMarking_C::Txt_Secondary' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, W_HotkeyBar_Entry) == 0x0002B8, "Member 'UW_Radial_MapMarking_C::W_HotkeyBar_Entry' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, BackKeys) == 0x0002C0, "Member 'UW_Radial_MapMarking_C::BackKeys' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SubmitKeys) == 0x0002D0, "Member 'UW_Radial_MapMarking_C::SubmitKeys' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, MainRadial) == 0x0002E0, "Member 'UW_Radial_MapMarking_C::MainRadial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SubRadial) == 0x0002E8, "Member 'UW_Radial_MapMarking_C::SubRadial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, bCanGoBack) == 0x0002F0, "Member 'UW_Radial_MapMarking_C::bCanGoBack' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SubmenuCommit) == 0x0002F8, "Member 'UW_Radial_MapMarking_C::SubmenuCommit' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, Cancel) == 0x000308, "Member 'UW_Radial_MapMarking_C::Cancel' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, CategoriesDataTable) == 0x000318, "Member 'UW_Radial_MapMarking_C::CategoriesDataTable' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, MarkersDataTable) == 0x000320, "Member 'UW_Radial_MapMarking_C::MarkersDataTable' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, IconStyle) == 0x000328, "Member 'UW_Radial_MapMarking_C::IconStyle' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, IconSize) == 0x000350, "Member 'UW_Radial_MapMarking_C::IconSize' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, MainRadialMaterial) == 0x000358, "Member 'UW_Radial_MapMarking_C::MainRadialMaterial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SubRadialMaterial) == 0x000360, "Member 'UW_Radial_MapMarking_C::SubRadialMaterial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, GoldTeamMaterial) == 0x000368, "Member 'UW_Radial_MapMarking_C::GoldTeamMaterial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, RedTeamMaterial) == 0x000370, "Member 'UW_Radial_MapMarking_C::RedTeamMaterial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, BlueTeamMaterial) == 0x000378, "Member 'UW_Radial_MapMarking_C::BlueTeamMaterial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, CurrentSelectedCommand) == 0x000380, "Member 'UW_Radial_MapMarking_C::CurrentSelectedCommand' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, CurrentCategory) == 0x0003E0, "Member 'UW_Radial_MapMarking_C::CurrentCategory' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, OnCollapsed) == 0x0003E8, "Member 'UW_Radial_MapMarking_C::OnCollapsed' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, SubmenuOpen) == 0x0003F8, "Member 'UW_Radial_MapMarking_C::SubmenuOpen' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, OnSubmenuCollapse) == 0x000400, "Member 'UW_Radial_MapMarking_C::OnSubmenuCollapse' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, CurrentMarker) == 0x000410, "Member 'UW_Radial_MapMarking_C::CurrentMarker' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, InnerRadius) == 0x000418, "Member 'UW_Radial_MapMarking_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, OuterRadius) == 0x00041C, "Member 'UW_Radial_MapMarking_C::OuterRadius' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, UseHoverSelect) == 0x000420, "Member 'UW_Radial_MapMarking_C::UseHoverSelect' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, ActiveRadial) == 0x000428, "Member 'UW_Radial_MapMarking_C::ActiveRadial' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, IsUsingGamepad) == 0x000430, "Member 'UW_Radial_MapMarking_C::IsUsingGamepad' has a wrong offset!");
static_assert(offsetof(UW_Radial_MapMarking_C, IsGamepadHoveringSelection) == 0x000431, "Member 'UW_Radial_MapMarking_C::IsGamepadHoveringSelection' has a wrong offset!");

}

