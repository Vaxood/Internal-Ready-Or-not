#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SubtitleBlock

#include "Basic.hpp"

#include "W_SubtitleBlock_classes.hpp"
#include "W_SubtitleBlock_parameters.hpp"


namespace SDK
{

// Function W_SubtitleBlock.W_SubtitleBlock_C.ExecuteUbergraph_W_SubtitleBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_Event_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Event_Text                                      (ConstParm)

void UW_SubtitleBlock_C::ExecuteUbergraph_W_SubtitleBlock(int32 EntryPoint, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_Event_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubtitleBlock_C", "ExecuteUbergraph_W_SubtitleBlock");

	Params::W_SubtitleBlock_C_ExecuteUbergraph_W_SubtitleBlock Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Color = std::move(K2Node_Event_Color);
	Parms.K2Node_Event_Text = K2Node_Event_Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubtitleBlock.W_SubtitleBlock_C.SetText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SubtitleBlock_C::SetText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubtitleBlock_C", "SetText");

	Params::W_SubtitleBlock_C_SetText Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SubtitleBlock.W_SubtitleBlock_C.SetBackgroundColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubtitleBlock_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SubtitleBlock_C", "SetBackgroundColor");

	Params::W_SubtitleBlock_C_SetBackgroundColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}

