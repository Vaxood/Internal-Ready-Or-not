#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Roster_EKG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Roster_EKG.W_Roster_EKG_C
// 0x0100 (0x0360 - 0x0260)
class UW_Roster_EKG_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCritical_Horiz;                                // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimCritical;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          EKG;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EkgBox;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EkgBox_horiz;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EkgStats;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EkgStats_horiz;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_EKG;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_bpm;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_bpm_horiz;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_EKG;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_EKG_horiz;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_BPM;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_bpm_horiz;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPlayerHealthStatus                           HealthStatus;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3288[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ColHealthy;                                        // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColInjured;                                        // 0x02EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColDowned;                                         // 0x02FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColIncapacitated;                                  // 0x030C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColDead;                                           // 0x031C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColOff;                                            // 0x032C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3289[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              HeartRateRange;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LowerProfile;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_328A[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       HeartRateText;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CriticalAnim;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_Roster_EKG(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, EPlayerHealthStatus Temp_byte_Variable_1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, const struct FVector2D& Temp_struct_Variable_6, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, EPlayerHealthStatus K2Node_CustomEvent_HealthStatus, ESlateVisibility Temp_byte_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_GetColorByHealth_Linear, const struct FSlateColor& CallFunc_GetColorByHealth_Slate, const struct FVector2D& K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, class UCommonTextBlock* K2Node_Select_Default_4, class UWidgetAnimation* K2Node_Select_Default_5, int32 CallFunc_GetPulse_ReturnValue, int32 CallFunc_GetPulse_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void SetStable();
	void SetCritical();
	void SetEkgStateByHealth(EPlayerHealthStatus Param_HealthStatus);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetColorByHealth(struct FLinearColor* Linear, struct FSlateColor* Slate, EPlayerHealthStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	int32 GetPulse(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Roster_EKG_C">();
	}
	static class UW_Roster_EKG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Roster_EKG_C>();
	}
};
static_assert(alignof(UW_Roster_EKG_C) == 0x000008, "Wrong alignment on UW_Roster_EKG_C");
static_assert(sizeof(UW_Roster_EKG_C) == 0x000360, "Wrong size on UW_Roster_EKG_C");
static_assert(offsetof(UW_Roster_EKG_C, UberGraphFrame) == 0x000260, "Member 'UW_Roster_EKG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, AnimCritical_Horiz) == 0x000268, "Member 'UW_Roster_EKG_C::AnimCritical_Horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, AnimCritical) == 0x000270, "Member 'UW_Roster_EKG_C::AnimCritical' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, EKG) == 0x000278, "Member 'UW_Roster_EKG_C::EKG' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, EkgBox) == 0x000280, "Member 'UW_Roster_EKG_C::EkgBox' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, EkgBox_horiz) == 0x000288, "Member 'UW_Roster_EKG_C::EkgBox_horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, EkgStats) == 0x000290, "Member 'UW_Roster_EKG_C::EkgStats' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, EkgStats_horiz) == 0x000298, "Member 'UW_Roster_EKG_C::EkgStats_horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Img_EKG) == 0x0002A0, "Member 'UW_Roster_EKG_C::Img_EKG' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Lbl_bpm) == 0x0002A8, "Member 'UW_Roster_EKG_C::Lbl_bpm' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Lbl_bpm_horiz) == 0x0002B0, "Member 'UW_Roster_EKG_C::Lbl_bpm_horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Lbl_EKG) == 0x0002B8, "Member 'UW_Roster_EKG_C::Lbl_EKG' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Lbl_EKG_horiz) == 0x0002C0, "Member 'UW_Roster_EKG_C::Lbl_EKG_horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Txt_BPM) == 0x0002C8, "Member 'UW_Roster_EKG_C::Txt_BPM' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, Txt_bpm_horiz) == 0x0002D0, "Member 'UW_Roster_EKG_C::Txt_bpm_horiz' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, HealthStatus) == 0x0002D8, "Member 'UW_Roster_EKG_C::HealthStatus' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColHealthy) == 0x0002DC, "Member 'UW_Roster_EKG_C::ColHealthy' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColInjured) == 0x0002EC, "Member 'UW_Roster_EKG_C::ColInjured' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColDowned) == 0x0002FC, "Member 'UW_Roster_EKG_C::ColDowned' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColIncapacitated) == 0x00030C, "Member 'UW_Roster_EKG_C::ColIncapacitated' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColDead) == 0x00031C, "Member 'UW_Roster_EKG_C::ColDead' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, ColOff) == 0x00032C, "Member 'UW_Roster_EKG_C::ColOff' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, IsCritical) == 0x00033C, "Member 'UW_Roster_EKG_C::IsCritical' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, HeartRateRange) == 0x000340, "Member 'UW_Roster_EKG_C::HeartRateRange' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, LowerProfile) == 0x000348, "Member 'UW_Roster_EKG_C::LowerProfile' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, HeartRateText) == 0x000350, "Member 'UW_Roster_EKG_C::HeartRateText' has a wrong offset!");
static_assert(offsetof(UW_Roster_EKG_C, CriticalAnim) == 0x000358, "Member 'UW_Roster_EKG_C::CriticalAnim' has a wrong offset!");

}

