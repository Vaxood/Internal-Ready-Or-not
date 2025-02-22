#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Spinbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Spinbox.W_Spinbox_C
// 0x00D8 (0x0338 - 0x0260)
class UW_Spinbox_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                            btn_Reset;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icn_Reset;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ResetBorder;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                               SpinBox_29;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMinValue;                                       // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31A8[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinimumValue;                                      // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMaxValue;                                       // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31A9[0x3];                                     // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaximumValue;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMinSliderValue;                                 // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31AA[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinimumSliderValue;                                // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMaxSliderValue;                                 // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31AB[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaximumSliderValue;                                // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseResetButton;                                    // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31AC[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultValue;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31AD[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           Col_ResetDisabled;                                 // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Col_ResetActive;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnValueCommited;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBeginSliderMovement;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndSliderMovement;                               // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MinFractionalDigits;                               // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxFractionalDigits;                               // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysUseDeltaSnap;                                // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31AE[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delta;                                             // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SliderExponent;                                    // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentValue;                                      // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Design_Time;                                    // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Initialized;                                       // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnValueChanged__DelegateSignature(float Param_Value);
	void OnValueCommited__DelegateSignature(float InValue, ETextCommit CommitMethod);
	void OnBeginSliderMovement__DelegateSignature();
	void OnEndSliderMovement__DelegateSignature(float InValue);
	void ExecuteUbergraph_W_Spinbox(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue, float K2Node_ComponentBoundEvent_InValue_2, ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_InValue_1, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature();
	void BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
	void UpdateValue(float Param_Value);
	void SetValue(float Param_Value);
	void SetDefaultValue(float Param_DefaultValue, bool ShowResetButton);
	void UpdateResetButton(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetMinValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void GetMinValue(float* Param_MinimumValue);
	void GetMaxValue(float* Param_MaximumValue);
	void GetMinSliderValue(float* Param_MinimumSliderValue);
	void GetMaxSliderValue(float* Param_MaximumSliderValue);
	void ClearMinValue();
	void ClearMaxValue();
	void ClearMinSliderValue();
	void ClearMaxSliderValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Spinbox_C">();
	}
	static class UW_Spinbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Spinbox_C>();
	}
};
static_assert(alignof(UW_Spinbox_C) == 0x000008, "Wrong alignment on UW_Spinbox_C");
static_assert(sizeof(UW_Spinbox_C) == 0x000338, "Wrong size on UW_Spinbox_C");
static_assert(offsetof(UW_Spinbox_C, UberGraphFrame) == 0x000260, "Member 'UW_Spinbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, btn_Reset) == 0x000268, "Member 'UW_Spinbox_C::btn_Reset' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Icn_Reset) == 0x000270, "Member 'UW_Spinbox_C::Icn_Reset' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, ResetBorder) == 0x000278, "Member 'UW_Spinbox_C::ResetBorder' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, SpinBox_29) == 0x000280, "Member 'UW_Spinbox_C::SpinBox_29' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Value) == 0x000288, "Member 'UW_Spinbox_C::Value' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, UseMinValue) == 0x00028C, "Member 'UW_Spinbox_C::UseMinValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MinimumValue) == 0x000290, "Member 'UW_Spinbox_C::MinimumValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, UseMaxValue) == 0x000294, "Member 'UW_Spinbox_C::UseMaxValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MaximumValue) == 0x000298, "Member 'UW_Spinbox_C::MaximumValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, UseMinSliderValue) == 0x00029C, "Member 'UW_Spinbox_C::UseMinSliderValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MinimumSliderValue) == 0x0002A0, "Member 'UW_Spinbox_C::MinimumSliderValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, UseMaxSliderValue) == 0x0002A4, "Member 'UW_Spinbox_C::UseMaxSliderValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MaximumSliderValue) == 0x0002A8, "Member 'UW_Spinbox_C::MaximumSliderValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, UseResetButton) == 0x0002AC, "Member 'UW_Spinbox_C::UseResetButton' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, DefaultValue) == 0x0002B0, "Member 'UW_Spinbox_C::DefaultValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, OnValueChanged) == 0x0002B8, "Member 'UW_Spinbox_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Col_ResetDisabled) == 0x0002C8, "Member 'UW_Spinbox_C::Col_ResetDisabled' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Col_ResetActive) == 0x0002D8, "Member 'UW_Spinbox_C::Col_ResetActive' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, OnValueCommited) == 0x0002E8, "Member 'UW_Spinbox_C::OnValueCommited' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, OnBeginSliderMovement) == 0x0002F8, "Member 'UW_Spinbox_C::OnBeginSliderMovement' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, OnEndSliderMovement) == 0x000308, "Member 'UW_Spinbox_C::OnEndSliderMovement' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MinFractionalDigits) == 0x000318, "Member 'UW_Spinbox_C::MinFractionalDigits' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, MaxFractionalDigits) == 0x00031C, "Member 'UW_Spinbox_C::MaxFractionalDigits' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, AlwaysUseDeltaSnap) == 0x000320, "Member 'UW_Spinbox_C::AlwaysUseDeltaSnap' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Delta) == 0x000324, "Member 'UW_Spinbox_C::Delta' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, SliderExponent) == 0x000328, "Member 'UW_Spinbox_C::SliderExponent' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, CurrentValue) == 0x00032C, "Member 'UW_Spinbox_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Is_Design_Time) == 0x000330, "Member 'UW_Spinbox_C::Is_Design_Time' has a wrong offset!");
static_assert(offsetof(UW_Spinbox_C, Initialized) == 0x000331, "Member 'UW_Spinbox_C::Initialized' has a wrong offset!");

}

