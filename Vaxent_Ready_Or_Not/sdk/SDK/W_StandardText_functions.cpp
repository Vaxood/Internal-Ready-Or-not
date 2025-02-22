#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_StandardText

#include "Basic.hpp"

#include "W_StandardText_classes.hpp"
#include "W_StandardText_parameters.hpp"


namespace SDK
{

// Function W_StandardText.W_StandardText_C.ExecuteUbergraph_W_StandardText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo                   K2Node_MakeStruct_SlateFontInfo                        (HasGetValueTypeHash)

void UW_StandardText_C::ExecuteUbergraph_W_StandardText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StandardText_C", "ExecuteUbergraph_W_StandardText");

	Params::W_StandardText_C_ExecuteUbergraph_W_StandardText Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateFontInfo = std::move(K2Node_MakeStruct_SlateFontInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_StandardText.W_StandardText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_StandardText_C", "PreConstruct");

	Params::W_StandardText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

