#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_SeekPlayer

#include "Basic.hpp"

#include "AIAction_SeekPlayer_classes.hpp"
#include "AIAction_SeekPlayer_parameters.hpp"


namespace SDK
{

// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*            K2Node_Event_Controller                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USeekPlayerCombatMove_C*          CallFunc_SpawnObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*              CallFunc_GetCombatActivity_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_SeekPlayer_C::ExecuteUbergraph_AIAction_SeekPlayer(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class USeekPlayerCombatMove_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "ExecuteUbergraph_AIAction_SeekPlayer");

	Params::AIAction_SeekPlayer_C_ExecuteUbergraph_AIAction_SeekPlayer Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_SeekPlayer_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "OnCreate_Blueprint");

	Params::AIAction_SeekPlayer_C_OnCreate_Blueprint Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)

void UAIAction_SeekPlayer_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "BeginAction_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*              CallFunc_GetCombatActivity_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*          CallFunc_GetCombatMoveActivity_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIAction_SeekPlayer_C::ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "ShouldPerformAction");

	Params::AIAction_SeekPlayer_C_ShouldPerformAction Parms{};

	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

