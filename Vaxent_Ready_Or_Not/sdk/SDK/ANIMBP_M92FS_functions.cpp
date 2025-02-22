#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M92FS

#include "Basic.hpp"

#include "ANIMBP_M92FS_classes.hpp"
#include "ANIMBP_M92FS_parameters.hpp"


namespace SDK
{

// Function ANIMBP_M92FS.ANIMBP_M92FS_C.ExecuteUbergraph_ANIMBP_M92FS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Round_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_M92FS_C::ExecuteUbergraph_ANIMBP_M92FS(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "ExecuteUbergraph_ANIMBP_M92FS");

	Params::ANIMBP_M92FS_C_ExecuteUbergraph_ANIMBP_M92FS Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_M92FS_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_M92FS_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20
// (BlueprintEvent)

void UANIMBP_M92FS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M92FS_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimGraph");

	Params::ANIMBP_M92FS_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

