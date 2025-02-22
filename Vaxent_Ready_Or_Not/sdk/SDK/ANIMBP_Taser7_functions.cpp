#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Taser7

#include "Basic.hpp"

#include "ANIMBP_Taser7_classes.hpp"
#include "ANIMBP_Taser7_parameters.hpp"


namespace SDK
{

// Function ANIMBP_Taser7.ANIMBP_Taser7_C.ExecuteUbergraph_ANIMBP_Taser7
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Taser7_C::ExecuteUbergraph_ANIMBP_Taser7(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Taser7_C", "ExecuteUbergraph_ANIMBP_Taser7");

	Params::ANIMBP_Taser7_C_ExecuteUbergraph_ANIMBP_Taser7 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_Taser7.ANIMBP_Taser7_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Taser7_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Taser7_C", "AnimGraph");

	Params::ANIMBP_Taser7_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

