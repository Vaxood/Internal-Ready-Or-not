#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ScoreNotify

#include "Basic.hpp"

#include "W_ScoreNotify_classes.hpp"
#include "W_ScoreNotify_parameters.hpp"


namespace SDK
{

// Function W_ScoreNotify.W_ScoreNotify_C.ExecuteUbergraph_W_ScoreNotify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                       Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                       Temp_object_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                       Temp_object_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                       Temp_object_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Temp_string_Variable                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_1                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Temp_string_Variable_2                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_3                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_CustomEvent_InScoreText                         ()
// int32                                   K2Node_CustomEvent_InScore                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bGive                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           K2Node_Select_Default                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           K2Node_Select_Default_1                                (ZeroConstructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_MapRangeClamped_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   CallFunc_GetCharacterArrayFromString_ReturnValue       (ReferenceParm)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_Conv_IntToString_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// bool                                    CallFunc_SimulateAnimatedText_bCompleted               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_SimulateAnimatedText_ReturnValue              (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue_2               ()
// class UFMODEvent*                       K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                       K2Node_Select_Default_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance               CallFunc_PlayEvent2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance               CallFunc_PlayEvent2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_4            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_5            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_6            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EventInstanceIsValid_ReturnValue_7            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScoreNotify_C::ExecuteUbergraph_W_ScoreNotify(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFMODEvent* Temp_object_Variable, bool Temp_bool_Variable, class UFMODEvent* Temp_object_Variable_1, class UFMODEvent* Temp_object_Variable_2, class UFMODEvent* Temp_object_Variable_3, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_2, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_CustomEvent_InScoreText, int32 K2Node_CustomEvent_InScore, bool K2Node_CustomEvent_bGive, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, const class FString& K2Node_Select_Default, bool Temp_bool_Variable_3, const class FString& K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_SimulateAnimatedText_bCompleted, const class FString& CallFunc_SimulateAnimatedText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UFMODEvent* K2Node_Select_Default_2, class UFMODEvent* K2Node_Select_Default_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_EventInstanceIsValid_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EventInstanceIsValid_ReturnValue_1, bool CallFunc_EventInstanceIsValid_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue_3, bool CallFunc_EventInstanceIsValid_ReturnValue_4, bool CallFunc_EventInstanceIsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EventInstanceIsValid_ReturnValue_6, bool CallFunc_EventInstanceIsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "ExecuteUbergraph_W_ScoreNotify");

	Params::W_ScoreNotify_C_ExecuteUbergraph_W_ScoreNotify Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable = std::move(Temp_string_Variable);
	Parms.Temp_string_Variable_1 = std::move(Temp_string_Variable_1);
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_string_Variable_2 = std::move(Temp_string_Variable_2);
	Parms.Temp_string_Variable_3 = std::move(Temp_string_Variable_3);
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_InScoreText = K2Node_CustomEvent_InScoreText;
	Parms.K2Node_CustomEvent_InScore = K2Node_CustomEvent_InScore;
	Parms.K2Node_CustomEvent_bGive = K2Node_CustomEvent_bGive;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = std::move(K2Node_Select_Default_1);
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = std::move(CallFunc_GetCharacterArrayFromString_ReturnValue);
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = std::move(CallFunc_Conv_IntToString_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_SimulateAnimatedText_bCompleted = CallFunc_SimulateAnimatedText_bCompleted;
	Parms.CallFunc_SimulateAnimatedText_ReturnValue = std::move(CallFunc_SimulateAnimatedText_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayEvent2D_ReturnValue = std::move(CallFunc_PlayEvent2D_ReturnValue);
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = std::move(CallFunc_PlayEvent2D_ReturnValue_1);
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_1 = CallFunc_EventInstanceIsValid_ReturnValue_1;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_2 = CallFunc_EventInstanceIsValid_ReturnValue_2;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_3 = CallFunc_EventInstanceIsValid_ReturnValue_3;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_4 = CallFunc_EventInstanceIsValid_ReturnValue_4;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_5 = CallFunc_EventInstanceIsValid_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_6 = CallFunc_EventInstanceIsValid_ReturnValue_6;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue_7 = CallFunc_EventInstanceIsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetCharacterArrayFromString_ReturnValue = std::move(Parms.CallFunc_GetCharacterArrayFromString_ReturnValue);
}


// Function W_ScoreNotify.W_ScoreNotify_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ScoreNotify_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ScoreNotify.W_ScoreNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ScoreNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ScoreNotify.W_ScoreNotify_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScoreNotify_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "Tick");

	Params::W_ScoreNotify_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ScoreNotify.W_ScoreNotify_C.InitScoreData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InScoreText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bGive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScoreNotify_C::InitScoreData(class FText InScoreText, int32 InScore, bool Param_bGive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "InitScoreData");

	Params::W_ScoreNotify_C_InitScoreData Parms{};

	Parms.InScoreText = InScoreText;
	Parms.InScore = InScore;
	Parms.Param_bGive = Param_bGive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ScoreNotify.W_ScoreNotify_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ScoreNotify_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "PreConstruct");

	Params::W_ScoreNotify_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ScoreNotify.W_ScoreNotify_C.PlayRewardAnim
// (BlueprintCallable, BlueprintEvent)

void UW_ScoreNotify_C::PlayRewardAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "PlayRewardAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ScoreNotify.W_ScoreNotify_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ScoreNotify_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ScoreNotify.W_ScoreNotify_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)

void UW_ScoreNotify_C::DestroyWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ScoreNotify_C", "DestroyWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

