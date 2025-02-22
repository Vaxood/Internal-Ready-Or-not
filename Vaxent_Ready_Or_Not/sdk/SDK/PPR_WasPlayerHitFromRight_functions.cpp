#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PPR_WasPlayerHitFromRight

#include "Basic.hpp"

#include "PPR_WasPlayerHitFromRight_classes.hpp"
#include "PPR_WasPlayerHitFromRight_parameters.hpp"


namespace SDK
{

// Function PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_LessEqual_FloatFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasPlayerHitFromRight_C::EnablePostProcessEffect(bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PPR_WasPlayerHitFromRight_C", "EnablePostProcessEffect");

	Params::PPR_WasPlayerHitFromRight_C_EnablePostProcessEffect Parms{};

	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

