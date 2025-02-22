#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MainMenu_LargeButton_V3

#include "Basic.hpp"

#include "W_MainMenu_LargeButton_V3_classes.hpp"
#include "W_MainMenu_LargeButton_V3_parameters.hpp"


namespace SDK
{

// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_LargeButton_V3_C::OnSelected__DelegateSignature(bool Param_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "OnSelected__DelegateSignature");

	Params::W_MainMenu_LargeButton_V3_C_OnSelected__DelegateSignature Parms{};

	Parms.Param_Selected = Param_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.OnSelectedAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::OnSelectedAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "OnSelectedAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.ExecuteUbergraph_W_MainMenu_LargeButton_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                      K2Node_Event_InFocusEvent_1                            (NoDestructor)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationTimeRange_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_LargeButton_V3_C::ExecuteUbergraph_W_MainMenu_LargeButton_V3(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "ExecuteUbergraph_W_MainMenu_LargeButton_V3");

	Params::W_MainMenu_LargeButton_V3_C_ExecuteUbergraph_W_MainMenu_LargeButton_V3 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = std::move(K2Node_Event_InFocusEvent_1);
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_LargeButton_V3_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "OnRemovedFromFocusPath");

	Params::W_MainMenu_LargeButton_V3_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_LargeButton_V3_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "OnAddedToFocusPath");

	Params::W_MainMenu_LargeButton_V3_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MainMenu_LargeButton_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_LargeButton_V3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "PreConstruct");

	Params::W_MainMenu_LargeButton_V3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_LargeButton_V3_C::SetState(bool Hovered, bool Param_Selected, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_LargeButton_V3_C", "SetState");

	Params::W_MainMenu_LargeButton_V3_C_SetState Parms{};

	Parms.Hovered = Hovered;
	Parms.Param_Selected = Param_Selected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

