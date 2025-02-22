#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loadout_MunitionCountSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C
// 0x0078 (0x02D8 - 0x0260)
class UW_Loadout_MunitionCountSlot_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            btn_decrease;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_increase;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MunitionSlot;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                               SpinBox_SlotCount;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_SlotType;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   SlotName;                                          // 0x0298(0x0018)(Edit, BlueprintVisible)
	int32                                         SlotCount;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinSlots;                                          // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSlots;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AF[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSlotCountChanged;                                // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         AvailableSlots;                                    // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hidden;                                            // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
	void ExecuteUbergraph_W_Loadout_MunitionCountSlot(int32 EntryPoint, const TMap<EItemCategory, class UClass*>& K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_InValue, ETextCommit K2Node_ComponentBoundEvent_CommitMethod, float K2Node_Event_Delay_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsGamepad, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FName K2Node_Event_PageName);
	void UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& ItemCategory);
	void ChangePage(class FName PageName);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void BndEvt__W_Loadout_ArmorSlot_SpinBox_SlotCount_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
	void BndEvt__W_Loadout_ArmorSlot_btn_increase_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_ArmorSlot_btn_decrease_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void SetInfo(float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4);
	void IncrementSlotCount(int32 Increment, int32 CallFunc_Abs_Int_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void SetSlotCount(int32 NewCount, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
	void SetMaxSlots(int32 MaxSlotCount, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetAvailableSlots(int32 Param_AvailableSlots, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Initialize(int32 CurrentSlotCount, int32 Param_AvailableSlots, int32 Param_MinSlots, int32 Param_MaxSlots);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loadout_MunitionCountSlot_C">();
	}
	static class UW_Loadout_MunitionCountSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loadout_MunitionCountSlot_C>();
	}
};
static_assert(alignof(UW_Loadout_MunitionCountSlot_C) == 0x000008, "Wrong alignment on UW_Loadout_MunitionCountSlot_C");
static_assert(sizeof(UW_Loadout_MunitionCountSlot_C) == 0x0002D8, "Wrong size on UW_Loadout_MunitionCountSlot_C");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, UberGraphFrame) == 0x000260, "Member 'UW_Loadout_MunitionCountSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, AnimReveal) == 0x000268, "Member 'UW_Loadout_MunitionCountSlot_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, btn_decrease) == 0x000270, "Member 'UW_Loadout_MunitionCountSlot_C::btn_decrease' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, btn_increase) == 0x000278, "Member 'UW_Loadout_MunitionCountSlot_C::btn_increase' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, MunitionSlot) == 0x000280, "Member 'UW_Loadout_MunitionCountSlot_C::MunitionSlot' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, SpinBox_SlotCount) == 0x000288, "Member 'UW_Loadout_MunitionCountSlot_C::SpinBox_SlotCount' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, Txt_SlotType) == 0x000290, "Member 'UW_Loadout_MunitionCountSlot_C::Txt_SlotType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, SlotName) == 0x000298, "Member 'UW_Loadout_MunitionCountSlot_C::SlotName' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, SlotCount) == 0x0002B0, "Member 'UW_Loadout_MunitionCountSlot_C::SlotCount' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, MinSlots) == 0x0002B4, "Member 'UW_Loadout_MunitionCountSlot_C::MinSlots' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, MaxSlots) == 0x0002B8, "Member 'UW_Loadout_MunitionCountSlot_C::MaxSlots' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, OnSlotCountChanged) == 0x0002C0, "Member 'UW_Loadout_MunitionCountSlot_C::OnSlotCountChanged' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, AvailableSlots) == 0x0002D0, "Member 'UW_Loadout_MunitionCountSlot_C::AvailableSlots' has a wrong offset!");
static_assert(offsetof(UW_Loadout_MunitionCountSlot_C, Hidden) == 0x0002D4, "Member 'UW_Loadout_MunitionCountSlot_C::Hidden' has a wrong offset!");

}

