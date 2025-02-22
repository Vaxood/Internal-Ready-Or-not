#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_G19

#include "Basic.hpp"

#include "ANIMBP_G19_classes.hpp"
#include "ANIMBP_G19_parameters.hpp"


namespace SDK
{

// Function ANIMBP_G19.ANIMBP_G19_C.ExecuteUbergraph_ANIMBP_G19
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Round_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_G19_C::ExecuteUbergraph_ANIMBP_G19(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_G19_C", "ExecuteUbergraph_ANIMBP_G19");

	Params::ANIMBP_G19_C_ExecuteUbergraph_ANIMBP_G19 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_G19.ANIMBP_G19_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_G19_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_G19_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_G19.ANIMBP_G19_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_G19_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_G19_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_G19.ANIMBP_G19_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19_AnimGraphNode_BlendListByBool_2E3D8BC14D9FAD9D8B26C194788ED3E6
// (BlueprintEvent)

void UANIMBP_G19_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19_AnimGraphNode_BlendListByBool_2E3D8BC14D9FAD9D8B26C194788ED3E6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_G19_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G19_AnimGraphNode_BlendListByBool_2E3D8BC14D9FAD9D8B26C194788ED3E6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_G19.ANIMBP_G19_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_G19_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_G19_C", "AnimGraph");

	Params::ANIMBP_G19_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

