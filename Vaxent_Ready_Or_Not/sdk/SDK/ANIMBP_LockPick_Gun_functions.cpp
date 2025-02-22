#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_LockPick_Gun

#include "Basic.hpp"

#include "ANIMBP_LockPick_Gun_classes.hpp"
#include "ANIMBP_LockPick_Gun_parameters.hpp"


namespace SDK
{

// Function ANIMBP_LockPick_Gun.ANIMBP_LockPick_Gun_C.ExecuteUbergraph_ANIMBP_LockPick_Gun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_LockPick_Gun_C::ExecuteUbergraph_ANIMBP_LockPick_Gun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_LockPick_Gun_C", "ExecuteUbergraph_ANIMBP_LockPick_Gun");

	Params::ANIMBP_LockPick_Gun_C_ExecuteUbergraph_ANIMBP_LockPick_Gun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_LockPick_Gun.ANIMBP_LockPick_Gun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_LockPick_Gun_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_LockPick_Gun_C", "AnimGraph");

	Params::ANIMBP_LockPick_Gun_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

