#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_TakeHostage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_TakeHostage.AIAction_TakeHostage_C
// 0x0028 (0x0080 - 0x0058)
class UAIAction_TakeHostage_C final  : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACyberneticCharacter*                   TargetCivilian;                                    // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTakeHostageActivity*                   TakeHostageActivity;                               // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TakeHostageTime;                                   // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bPerformHostageTaking;                             // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BF6[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SearchRange;                                       // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LookatThreshold;                                   // 0x007C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIAction_TakeHostage(int32 EntryPoint, TArray<class ACyberneticCharacter*>& CallFunc_TraceForNearbyCivilians_Return_Value, class ACyberneticCharacter* CallFunc_FindClosestCivilian_Return_Value, float K2Node_Event_DeltaTime, class ACyberneticController* K2Node_Event_Controller, class UTakeHostageActivity* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UBaseActivity* Activity, class ACyberneticController* Controller)> K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GiveActivityTo_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsTakingHostage_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsSurrendered_ReturnValue, class ABaseMagazineWeapon* CallFunc_GetEquippedWeapon_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAmmo_ReturnValue);
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void TraceForNearbyCivilians(TArray<class ACyberneticCharacter*>* Return_Value, const TArray<class ACyberneticCharacter*>& CiviliansNearby, int32 Temp_int_Loop_Counter_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACyberneticCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasLineOfSight_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnTakeHostageFinished(class UBaseActivity* Activity, class ACyberneticController* Controller);

	void FindClosestCivilian(TArray<class ACyberneticCharacter*>& Civilians, class ACyberneticCharacter** Return_Value, float Distance, float ClosestDistance, class ACyberneticCharacter* ClosestCivilian_Local, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsSurrendered_ReturnValue, bool CallFunc_AnySWATNearCivilian_Return_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsSameFaction_ReturnValue, bool CallFunc_IsCivilianNotFacingTarget_Return_Value, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsCivilianFacingTarget_Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4) const;
	bool ShouldPerformAction() const;
	void AnySWATNearCivilian(class ACyberneticCharacter* Civilian, bool* Return_Value, const TArray<class AReadyOrNotCharacter*>& Swat, int32 Temp_int_Array_Index_Variable, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ASWATCharacter*>& CallFunc_GetSwatTeam_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerCharacter*>& CallFunc_GetAllPlayerCharactersInWorld_ReturnValue) const;
	void IsCivilianFacingTarget(class ACyberneticCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) const;
	void IsCivilianNotFacingTarget(class ACyberneticCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_TakeHostage_C">();
	}
	static class UAIAction_TakeHostage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_TakeHostage_C>();
	}
};
static_assert(alignof(UAIAction_TakeHostage_C) == 0x000008, "Wrong alignment on UAIAction_TakeHostage_C");
static_assert(sizeof(UAIAction_TakeHostage_C) == 0x000080, "Wrong size on UAIAction_TakeHostage_C");
static_assert(offsetof(UAIAction_TakeHostage_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_TakeHostage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, TargetCivilian) == 0x000060, "Member 'UAIAction_TakeHostage_C::TargetCivilian' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, TakeHostageActivity) == 0x000068, "Member 'UAIAction_TakeHostage_C::TakeHostageActivity' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, TakeHostageTime) == 0x000070, "Member 'UAIAction_TakeHostage_C::TakeHostageTime' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, bPerformHostageTaking) == 0x000074, "Member 'UAIAction_TakeHostage_C::bPerformHostageTaking' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, SearchRange) == 0x000078, "Member 'UAIAction_TakeHostage_C::SearchRange' has a wrong offset!");
static_assert(offsetof(UAIAction_TakeHostage_C, LookatThreshold) == 0x00007C, "Member 'UAIAction_TakeHostage_C::LookatThreshold' has a wrong offset!");

}

