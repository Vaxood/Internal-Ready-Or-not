#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MainMenu_SubButton_V3

#include "Basic.hpp"

#include "W_MainMenu_SubButton_V3_classes.hpp"
#include "W_MainMenu_SubButton_V3_parameters.hpp"


namespace SDK
{

// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.ExecuteUbergraph_W_MainMenu_SubButton_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      K2Node_Event_InFocusEvent_1                            (NoDestructor)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)

void UW_MainMenu_SubButton_V3_C::ExecuteUbergraph_W_MainMenu_SubButton_V3(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "ExecuteUbergraph_W_MainMenu_SubButton_V3");

	Params::W_MainMenu_SubButton_V3_C_ExecuteUbergraph_W_MainMenu_SubButton_V3 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_InFocusEvent_1 = std::move(K2Node_Event_InFocusEvent_1);
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_SubButton_V3_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_SubButton_V3_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_SubButton_V3_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "OnRemovedFromFocusPath");

	Params::W_MainMenu_SubButton_V3_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_SubButton_V3_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "OnAddedToFocusPath");

	Params::W_MainMenu_SubButton_V3_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MainMenu_SubButton_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_SubButton_V3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "PreConstruct");

	Params::W_MainMenu_SubButton_V3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      White_90                                               (Edit, BlueprintVisible)
// struct FSlateColor                      White_40                                               (Edit, BlueprintVisible)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_SubButton_V3_C::SetState(bool Hovered, bool Selected, const struct FSlateColor& White_90, const struct FSlateColor& White_40, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_SubButton_V3_C", "SetState");

	Params::W_MainMenu_SubButton_V3_C_SetState Parms{};

	Parms.Hovered = Hovered;
	Parms.Selected = Selected;
	Parms.White_90 = std::move(White_90);
	Parms.White_40 = std::move(White_40);
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

