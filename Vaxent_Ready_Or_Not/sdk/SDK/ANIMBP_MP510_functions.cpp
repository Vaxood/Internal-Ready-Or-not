#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_MP510

#include "Basic.hpp"

#include "ANIMBP_MP510_classes.hpp"
#include "ANIMBP_MP510_parameters.hpp"


namespace SDK
{

// Function ANIMBP_MP510.ANIMBP_MP510_C.ExecuteUbergraph_ANIMBP_MP510
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Round_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_DeltaTimeX                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwningActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*              K2Node_DynamicCast_AsBase_Magazine_Weapon              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_MP510_C::ExecuteUbergraph_ANIMBP_MP510(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "ExecuteUbergraph_ANIMBP_MP510");

	Params::ANIMBP_MP510_C_ExecuteUbergraph_ANIMBP_MP510 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_MP510.ANIMBP_MP510_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_MP510_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MP510.ANIMBP_MP510_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_MP510_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MP510.ANIMBP_MP510_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MP510_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_MP510_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_MP510.ANIMBP_MP510_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP510_AnimGraphNode_BlendListByBool_046358884859E10A31499EB86A49D5E0
// (BlueprintEvent)

void UANIMBP_MP510_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP510_AnimGraphNode_BlendListByBool_046358884859E10A31499EB86A49D5E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP510_AnimGraphNode_BlendListByBool_046358884859E10A31499EB86A49D5E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MP510.ANIMBP_MP510_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UANIMBP_MP510_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MP510_C", "AnimGraph");

	Params::ANIMBP_MP510_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

