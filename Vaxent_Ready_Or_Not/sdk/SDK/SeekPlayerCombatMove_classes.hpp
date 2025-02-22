#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SeekPlayerCombatMove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SeekPlayerCombatMove.SeekPlayerCombatMove_C
// 0x0010 (0x01E8 - 0x01D8)
class USeekPlayerCombatMove_C final  : public UBaseCombatMoveActivity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AReadyOrNotCharacter*                   SeekingPlayer;                                     // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SeekPlayerCombatMove(int32 EntryPoint, class FString& Temp_string_Variable, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetSquadLeader_ReturnValue, class FString& Temp_string_Variable_1, float K2Node_Event_DeltaTime, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, class APlayerCharacter* CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_Event_Owner, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool K2Node_Event_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue);
	void FinishedActivity_Blueprint(bool bSuccess);
	void StartActivity_Blueprint(class AAIController* Owner);
	void RequestCombatMove_Blueprint(float DeltaTime);

	class FName GetMoveStyleOverride(class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsCivilian_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SeekPlayerCombatMove_C">();
	}
	static class USeekPlayerCombatMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USeekPlayerCombatMove_C>();
	}
};
static_assert(alignof(USeekPlayerCombatMove_C) == 0x000008, "Wrong alignment on USeekPlayerCombatMove_C");
static_assert(sizeof(USeekPlayerCombatMove_C) == 0x0001E8, "Wrong size on USeekPlayerCombatMove_C");
static_assert(offsetof(USeekPlayerCombatMove_C, UberGraphFrame) == 0x0001D8, "Member 'USeekPlayerCombatMove_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USeekPlayerCombatMove_C, SeekingPlayer) == 0x0001E0, "Member 'USeekPlayerCombatMove_C::SeekingPlayer' has a wrong offset!");

}

