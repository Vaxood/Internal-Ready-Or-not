#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_IntelList_Entry

#include "Basic.hpp"

#include "W_Briefing_IntelList_Entry_classes.hpp"
#include "W_Briefing_IntelList_Entry_parameters.hpp"


namespace SDK
{

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterBio                    Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_IntelList_Entry_C::BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "BioIntelClicked__DelegateSignature");

	Params::W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Briefing_Evidence            Param_Media                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_IntelList_Entry_C::MediaIntelClicked__DelegateSignature(const struct FST_Briefing_Evidence& Param_Media)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "MediaIntelClicked__DelegateSignature");

	Params::W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature Parms{};

	Parms.Param_Media = std::move(Param_Media);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Briefing_Intel_Types                  Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_CustomEvent_Index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Intel_Entry_C*        K2Node_CustomEvent_ClickedEntry_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Evidence            K2Node_CustomEvent_Media                               (HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Intel_Entry_C*        K2Node_DynamicCast_AsW_Briefing_Intel_Entry            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Intel_Entry_C*        K2Node_CustomEvent_ClickedEntry                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio                    K2Node_CustomEvent_Bio                                 ()
// class FText                             Temp_text_Variable_1                                   ()
// class FText                             Temp_text_Variable_2                                   ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Temp_text_Variable_3                                   ()
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_IntelList_Entry_C::ExecuteUbergraph_W_Briefing_IntelList_Entry(int32 EntryPoint, E_Briefing_Intel_Types Temp_byte_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Index, class UW_Briefing_Intel_Entry_C* K2Node_CustomEvent_ClickedEntry_1, const struct FST_Briefing_Evidence& K2Node_CustomEvent_Media, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_Briefing_Intel_Entry_C* K2Node_DynamicCast_AsW_Briefing_Intel_Entry, bool K2Node_DynamicCast_bSuccess, class UW_Briefing_Intel_Entry_C* K2Node_CustomEvent_ClickedEntry, const struct FCharacterBio& K2Node_CustomEvent_Bio, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "ExecuteUbergraph_W_Briefing_IntelList_Entry");

	Params::W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_ClickedEntry_1 = K2Node_CustomEvent_ClickedEntry_1;
	Parms.K2Node_CustomEvent_Media = std::move(K2Node_CustomEvent_Media);
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Briefing_Intel_Entry = K2Node_DynamicCast_AsW_Briefing_Intel_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ClickedEntry = K2Node_CustomEvent_ClickedEntry;
	Parms.K2Node_CustomEvent_Bio = std::move(K2Node_CustomEvent_Bio);
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Intel_Entry_C*        ClickedEntry                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio                    Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_IntelList_Entry_C::BioClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "BioClicked");

	Params::W_Briefing_IntelList_Entry_C_BioClicked Parms{};

	Parms.ClickedEntry = ClickedEntry;
	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Intel_Entry_C*        ClickedEntry                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Evidence            Param_Media                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_IntelList_Entry_C::MediaClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Param_Media)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "MediaClicked");

	Params::W_Briefing_IntelList_Entry_C_MediaClicked Parms{};

	Parms.ClickedEntry = ClickedEntry;
	Parms.Param_Media = std::move(Param_Media);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_IntelList_Entry_C::ForceClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "ForceClick");

	Params::W_Briefing_IntelList_Entry_C_ForceClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Briefing_IntelList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_IntelList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "PreConstruct");

	Params::W_Briefing_IntelList_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>            Param_Bios                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio                    CallFunc_Array_Get_Item                                ()
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Intel_Entry_C*        CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UW_Briefing_IntelList_Entry_C::InitBios(TArray<struct FCharacterBio>& Param_Bios, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCharacterBio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Briefing_Intel_Entry_C* CallFunc_Create_ReturnValue, TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "InitBios");

	Params::W_Briefing_IntelList_Entry_C_InitBios Parms{};

	Parms.Param_Bios = std::move(Param_Bios);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	Param_Bios = std::move(Parms.Param_Bios);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Briefing_Evidence>    Param_Media                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_CurrentColumn                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CurrentRow                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Intel_Entry_C*        CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Evidence            CallFunc_Array_Get_Item                                (HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// uint8                                   CallFunc_MakeLiteralByte_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_IntelList_Entry_C::InitMedia(TArray<struct FST_Briefing_Evidence>& Param_Media, int32 Param_CurrentColumn, int32 Param_CurrentRow, class UW_Briefing_Intel_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FST_Briefing_Evidence& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)> K2Node_CreateDelegate_OutputDelegate, uint8 CallFunc_MakeLiteralByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "InitMedia");

	Params::W_Briefing_IntelList_Entry_C_InitMedia Parms{};

	Parms.Param_Media = std::move(Param_Media);
	Parms.Param_CurrentColumn = Param_CurrentColumn;
	Parms.Param_CurrentRow = Param_CurrentRow;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	Param_Media = std::move(Parms.Param_Media);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                     CallFunc_AddChildToWrapBox_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_IntelList_Entry_C::AddToGrid(class UWidget* Content, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "AddToGrid");

	Params::W_Briefing_IntelList_Entry_C_AddToGrid Parms{};

	Parms.Content = Content;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_IntelList_Entry_C::ClearActive(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_IntelList_Entry_C", "ClearActive");

	Params::W_Briefing_IntelList_Entry_C_ClearActive Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

