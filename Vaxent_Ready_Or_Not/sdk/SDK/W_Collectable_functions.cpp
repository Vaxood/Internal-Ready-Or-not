#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Collectable

#include "Basic.hpp"

#include "W_Collectable_classes.hpp"
#include "W_Collectable_parameters.hpp"


namespace SDK
{

// Function W_Collectable.W_Collectable_C.ExecuteUbergraph_W_Collectable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           K2Node_ComponentBoundEvent_ButtonID                    (ZeroConstructor, HasGetValueTypeHash)
// float                                   K2Node_Event_Delay                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_Collapse                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_StrStr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             K2Node_Event_PageName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACollectable*                     K2Node_Event_Collectable                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_Delay_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BackPage_Handled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// ECommonInputType                        K2Node_CustomEvent_bNewInputType                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(ECommonInputType bNewInputType)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*            CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        CallFunc_GetCurrentInputType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::ExecuteUbergraph_W_Collectable(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, class ACollectable* K2Node_Event_Collectable, float K2Node_Event_Delay_1, bool CallFunc_BackPage_Handled, ECommonInputType K2Node_CustomEvent_bNewInputType, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "ExecuteUbergraph_W_Collectable");

	Params::W_Collectable_C_ExecuteUbergraph_W_Collectable Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ButtonID = std::move(K2Node_ComponentBoundEvent_ButtonID);
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_Collectable = K2Node_Event_Collectable;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.BndEvt__W_Collectable_W_PageHeader_208_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           ButtonID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Collectable_C::BndEvt__W_Collectable_W_PageHeader_208_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "BndEvt__W_Collectable_W_PageHeader_208_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature");

	Params::W_Collectable_C_BndEvt__W_Collectable_W_PageHeader_208_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature Parms{};

	Parms.ButtonID = std::move(ButtonID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::InputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "InputMethodChanged");

	Params::W_Collectable_C_InputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Collectable_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Collectable.W_Collectable_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UW_Collectable_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Collectable.W_Collectable_C.SetItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACollectable*                     Collectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::SetItem(class ACollectable* Collectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "SetItem");

	Params::W_Collectable_C_SetItem Parms{};

	Parms.Collectable = Collectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "ChangePage");

	Params::W_Collectable_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Collectable_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "SetInputMode");

	Params::W_Collectable_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Collectable_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "Hide");

	Params::W_Collectable_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "Reveal");

	Params::W_Collectable_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Collectable.W_Collectable_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Unhandled_ReturnValue                         ()

struct FEventReply UW_Collectable_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "OnMouseButtonDown_0");

	Params::W_Collectable_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Unhandled_ReturnValue = std::move(CallFunc_Unhandled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Collectable.W_Collectable_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BackPage_Handled                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Collectable_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "BP_OnHandleBackAction");

	Params::W_Collectable_C_BP_OnHandleBackAction Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Collectable.W_Collectable_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Collectable_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "BackPage");

	Params::W_Collectable_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = std::move(Parms.Handled);
}


// Function W_Collectable.W_Collectable_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Collectable_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Collectable_C", "GetFocusTarget");

	Params::W_Collectable_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = std::move(Parms.Focus);
}

}

