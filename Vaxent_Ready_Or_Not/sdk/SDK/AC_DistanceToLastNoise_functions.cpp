#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DistanceToLastNoise

#include "Basic.hpp"

#include "AC_DistanceToLastNoise_classes.hpp"
#include "AC_DistanceToLastNoise_parameters.hpp"


namespace SDK
{

// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.Score
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext         Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_NameName_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_DetermineNoiseScore_Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExposedToNoise                  CallFunc_Map_Find_Value                                (NoDestructor)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_DetermineNoiseScore_Return_Value_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_DistanceToLastNoise_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value, const struct FExposedToNoise& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value_1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "Score");

	Params::AC_DistanceToLastNoise_C_Score Parms{};

	Parms.Context = std::move(Context);
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_DetermineNoiseScore_Return_Value = CallFunc_DetermineNoiseScore_Return_Value;
	Parms.CallFunc_Map_Find_Value = std::move(CallFunc_Map_Find_Value);
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_DetermineNoiseScore_Return_Value_1 = CallFunc_DetermineNoiseScore_Return_Value_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = std::move(Parms.bSuccess);

	return Parms.ReturnValue;
}


// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.DetermineNoiseScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FExposedToNoise                  Noise                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_MapRangeClamped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DistanceToLastNoise_C::DetermineNoiseScore(const struct FExposedToNoise& Noise, float* Return_Value, float CallFunc_MapRangeClamped_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "DetermineNoiseScore");

	Params::AC_DistanceToLastNoise_C_DetermineNoiseScore Parms{};

	Parms.Noise = std::move(Noise);
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}

}

