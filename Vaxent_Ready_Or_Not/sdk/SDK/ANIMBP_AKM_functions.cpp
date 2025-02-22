#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_AKM

#include "Basic.hpp"

#include "ANIMBP_AKM_classes.hpp"
#include "ANIMBP_AKM_parameters.hpp"


namespace SDK
{

// Function ANIMBP_AKM.ANIMBP_AKM_C.ExecuteUbergraph_ANIMBP_AKM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AKM_C::ExecuteUbergraph_ANIMBP_AKM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AKM_C", "ExecuteUbergraph_ANIMBP_AKM");

	Params::ANIMBP_AKM_C_ExecuteUbergraph_ANIMBP_AKM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_AKM.ANIMBP_AKM_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_AKM_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AKM_C", "AnimGraph");

	Params::ANIMBP_AKM_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

