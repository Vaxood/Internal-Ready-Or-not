#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_EntryPoint_Selection

#include "Basic.hpp"

#include "W_PreMission_Tablet_EntryPoint_Selection_classes.hpp"
#include "W_PreMission_Tablet_EntryPoint_Selection_parameters.hpp"


namespace SDK
{

// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_CustomEvent_Delay                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_Event_PageName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_Delay_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_Delay                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_Collapse                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_EntryPoint_Selection_C::ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsGamepad, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_EntryPoint_Selection_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "Hide");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_Selection_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "Reveal");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PreMission_Tablet_EntryPoint_Selection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_Selection_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "ChangePage");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.ShowPointInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_Selection_C::ShowPointInfo(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "ShowPointInfo");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_ShowPointInfo Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_EntryPoint_Selection_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "SetInputMode");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.HidePointInfo
// (BlueprintCallable, BlueprintEvent)

void UW_PreMission_Tablet_EntryPoint_Selection_C::HidePointInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "HidePointInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.UpdatePointInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEntryPoint                      EntryPointData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_Selection_C::UpdatePointInfo(const struct FEntryPoint& EntryPointData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "UpdatePointInfo");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_UpdatePointInfo Parms{};

	Parms.EntryPointData = std::move(EntryPointData);
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_EntryPoint_Selection_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "BackPage");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = std::move(Parms.Handled);
}


// Function W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_EntryPoint_Selection_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_EntryPoint_Selection_C", "GetFocusTarget");

	Params::W_PreMission_Tablet_EntryPoint_Selection_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = std::move(Parms.Focus);
}

}

