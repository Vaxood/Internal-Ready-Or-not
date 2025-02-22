#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_AdvancetoEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C
// 0x0010 (0x0068 - 0x0058)
class UAIAction_AdvancetoEnemy_C final  : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAdvanceToEnemyPosition_C*              AdvancetoEnemy;                                    // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIAction_AdvancetoEnemy(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class UAdvanceToEnemyPosition_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue);
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void BeginAction_Blueprint();

	bool ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_AdvancetoEnemy_C">();
	}
	static class UAIAction_AdvancetoEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_AdvancetoEnemy_C>();
	}
};
static_assert(alignof(UAIAction_AdvancetoEnemy_C) == 0x000008, "Wrong alignment on UAIAction_AdvancetoEnemy_C");
static_assert(sizeof(UAIAction_AdvancetoEnemy_C) == 0x000068, "Wrong size on UAIAction_AdvancetoEnemy_C");
static_assert(offsetof(UAIAction_AdvancetoEnemy_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_AdvancetoEnemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_AdvancetoEnemy_C, AdvancetoEnemy) == 0x000060, "Member 'UAIAction_AdvancetoEnemy_C::AdvancetoEnemy' has a wrong offset!");

}

