#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_ThrowWeaponAndSurrender

#include "Basic.hpp"

#include "AIAction_ThrowWeaponAndSurrender_classes.hpp"
#include "AIAction_ThrowWeaponAndSurrender_parameters.hpp"


namespace SDK
{

// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*             CallFunc_GetCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*             CallFunc_GetCharacter_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*             CallFunc_GetCharacter_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     CallFunc_PlayMontageFromTable_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeaponAndSurrender_C::ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeaponAndSurrender_C", "ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender");

	Params::AIAction_ThrowWeaponAndSurrender_C_ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_PlayMontageFromTable_ReturnValue = CallFunc_PlayMontageFromTable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeaponAndSurrender_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeaponAndSurrender_C", "Tick_Blueprint");

	Params::AIAction_ThrowWeaponAndSurrender_C_Tick_Blueprint Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)

void UAIAction_ThrowWeaponAndSurrender_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeaponAndSurrender_C", "BeginAction_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIAction_ThrowWeaponAndSurrender_C::ShouldPerformAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeaponAndSurrender_C", "ShouldPerformAction");

	Params::AIAction_ThrowWeaponAndSurrender_C_ShouldPerformAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

