#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_Startle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
// 0x0038 (0x0090 - 0x0058)
class UAIAction_Startle_C final  : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bIsRightStartle;                                   // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C28[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StartleAnimation;                                  // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                StimulusLocation;                                  // 0x0078(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrackingTarget;                                   // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C29[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cooldown;                                          // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsCoolingDown;                                    // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEverShotBefore;                                   // 0x008D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AIAction_Startle(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float K2Node_Event_DeltaTime, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsLocationRightOfUs_Return_Value, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, bool CallFunc_CanStartle_Return_Value, const class FString& CallFunc_AngleToAnimation_Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void CustomEvent_0();
	void EndAction_Blueprint();
	void ResetData();
	void Tick_Blueprint(float DeltaTime);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void BeginAction_Blueprint();

	bool ShouldPerformAction() const;
	void IsLocationRightOfUs(const struct FVector& InLocation, bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) const;
	void AngleToAnimation(float InAngle, bool bRight, class FString* Return_Value, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& K2Node_Select_Default_2) const;
	void CanStartle(bool* Return_Value, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_Startle_C">();
	}
	static class UAIAction_Startle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_Startle_C>();
	}
};
static_assert(alignof(UAIAction_Startle_C) == 0x000008, "Wrong alignment on UAIAction_Startle_C");
static_assert(sizeof(UAIAction_Startle_C) == 0x000090, "Wrong size on UAIAction_Startle_C");
static_assert(offsetof(UAIAction_Startle_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_Startle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, bIsRightStartle) == 0x000060, "Member 'UAIAction_Startle_C::bIsRightStartle' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, StartleAnimation) == 0x000068, "Member 'UAIAction_Startle_C::StartleAnimation' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, StimulusLocation) == 0x000078, "Member 'UAIAction_Startle_C::StimulusLocation' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, bTrackingTarget) == 0x000084, "Member 'UAIAction_Startle_C::bTrackingTarget' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, Cooldown) == 0x000088, "Member 'UAIAction_Startle_C::Cooldown' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, bIsCoolingDown) == 0x00008C, "Member 'UAIAction_Startle_C::bIsCoolingDown' has a wrong offset!");
static_assert(offsetof(UAIAction_Startle_C, bEverShotBefore) == 0x00008D, "Member 'UAIAction_Startle_C::bEverShotBefore' has a wrong offset!");

}

