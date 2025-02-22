#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_Hesitate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_Hesitate.AIAction_Hesitate_C
// 0x0020 (0x0078 - 0x0058)
class UAIAction_Hesitate_C final  : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                HesitateMoveLocation;                              // 0x0060(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastSeenSwatLocation;                              // 0x006C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIAction_Hesitate(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class FString& Temp_string_Variable, class FString& Temp_string_Variable_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsMovingForRequest_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void BeginAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void EndAction_Blueprint();

	bool ShouldPerformAction() const;
	class FName GetMoveStyleOverride(bool Temp_bool_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_Hesitate_C">();
	}
	static class UAIAction_Hesitate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_Hesitate_C>();
	}
};
static_assert(alignof(UAIAction_Hesitate_C) == 0x000008, "Wrong alignment on UAIAction_Hesitate_C");
static_assert(sizeof(UAIAction_Hesitate_C) == 0x000078, "Wrong size on UAIAction_Hesitate_C");
static_assert(offsetof(UAIAction_Hesitate_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_Hesitate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_Hesitate_C, HesitateMoveLocation) == 0x000060, "Member 'UAIAction_Hesitate_C::HesitateMoveLocation' has a wrong offset!");
static_assert(offsetof(UAIAction_Hesitate_C, LastSeenSwatLocation) == 0x00006C, "Member 'UAIAction_Hesitate_C::LastSeenSwatLocation' has a wrong offset!");

}

