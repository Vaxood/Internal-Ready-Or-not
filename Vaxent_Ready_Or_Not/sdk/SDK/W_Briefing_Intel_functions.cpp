#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Intel

#include "Basic.hpp"

#include "W_Briefing_Intel_classes.hpp"
#include "W_Briefing_Intel_parameters.hpp"


namespace SDK
{

// Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Intel               K2Node_CustomEvent_Intel                               (HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterBio                    K2Node_ComponentBoundEvent_Bio_1                       ()
// struct FCharacterBio                    K2Node_ComponentBoundEvent_Bio                         ()

void UW_Briefing_Intel_C::ExecuteUbergraph_W_Briefing_Intel(int32 EntryPoint, const struct FST_Briefing_Intel& K2Node_CustomEvent_Intel, bool K2Node_Event_IsDesignTime, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio_1, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "ExecuteUbergraph_W_Briefing_Intel");

	Params::W_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Intel = std::move(K2Node_CustomEvent_Intel);
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Bio_1 = std::move(K2Node_ComponentBoundEvent_Bio_1);
	Parms.K2Node_ComponentBoundEvent_Bio = std::move(K2Node_ComponentBoundEvent_Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FCharacterBio                    Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature");

	Params::W_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FCharacterBio                    Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature");

	Params::W_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Briefing_Intel               Intel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::Initialize(const struct FST_Briefing_Intel& Intel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Initialize");

	Params::W_Briefing_Intel_C_Initialize Parms{};

	Parms.Intel = std::move(Intel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Briefing_Intel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Intel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "PreConstruct");

	Params::W_Briefing_Intel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(const struct FCharacterBio& Bio)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void(const struct FCharacterBio& Bio)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// class UW_Briefing_IntelList_Entry_C*    CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_IntelList_Entry_C*    CallFunc_Create_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FST_Briefing_Evidence& Media)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// class UW_Briefing_IntelList_Entry_C*    CallFunc_Create_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CallFunc_MakeLiteralByte_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CallFunc_MakeLiteralByte_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::CreateLists(TDelegate<void(const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate_1, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_1, TDelegate<void(const struct FST_Briefing_Evidence& Media)> K2Node_CreateDelegate_OutputDelegate_2, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "CreateLists");

	Params::W_Briefing_Intel_C_CreateLists Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::AddToList(class UWidget* Content, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "AddToList");

	Params::W_Briefing_Intel_C_AddToList Parms{};

	Parms.Content = Content;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Briefing_Evidence            Media                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::UpdateMediaIntel(const struct FST_Briefing_Evidence& Media)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateMediaIntel");

	Params::W_Briefing_Intel_C_UpdateMediaIntel Parms{};

	Parms.Media = std::move(Media);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterBio                    Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::UpdateBioIntel(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateBioIntel");

	Params::W_Briefing_Intel_C_UpdateBioIntel Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>            SuspectBios                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    CallFunc_Array_IsValidIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(const struct FCharacterBio& Bio)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitSuspects(TArray<struct FCharacterBio>& SuspectBios, bool CallFunc_Array_IsValidIndex_ReturnValue, TDelegate<void(const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitSuspects");

	Params::W_Briefing_Intel_C_InitSuspects Parms{};

	Parms.SuspectBios = std::move(SuspectBios);
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	SuspectBios = std::move(Parms.SuspectBios);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>            CivilianBios                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    CallFunc_Array_IsValidIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(const struct FCharacterBio& Bio)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitCivilians(TArray<struct FCharacterBio>& CivilianBios, bool CallFunc_Array_IsValidIndex_ReturnValue, TDelegate<void(const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitCivilians");

	Params::W_Briefing_Intel_C_InitCivilians Parms{};

	Parms.CivilianBios = std::move(CivilianBios);
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	CivilianBios = std::move(Parms.CivilianBios);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Briefing_Evidence>    MediaIntel                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    CallFunc_Array_IsValidIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(const struct FST_Briefing_Evidence& Media)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitMedia(TArray<struct FST_Briefing_Evidence>& MediaIntel, bool CallFunc_Array_IsValidIndex_ReturnValue, TDelegate<void(const struct FST_Briefing_Evidence& Media)> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitMedia");

	Params::W_Briefing_Intel_C_InitMedia Parms{};

	Parms.MediaIntel = std::move(MediaIntel);
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	MediaIntel = std::move(Parms.MediaIntel);
}

}

