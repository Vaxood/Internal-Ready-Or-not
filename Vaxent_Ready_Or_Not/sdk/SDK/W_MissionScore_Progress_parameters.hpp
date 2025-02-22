#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MissionScore_Progress

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.ExecuteUbergraph_W_MissionScore_Progress
// 0x01B0 (0x01B0 - 0x0000)
struct W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4242[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0024(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScoreGroup                            K2Node_CustomEvent_ScoreData;                      // 0x0060(0x0030)(ContainsInstancedReference)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScoringManager*                        CallFunc_Get_ReturnValue;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScoringManager*                        CallFunc_Get_ReturnValue_1;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalScorePool_MaxScore;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScorePenaltyData                      K2Node_CustomEvent_PenaltyData;                    // 0x00B0(0x0020)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4243[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Grade;                          // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x00E8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4244[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4245[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4246[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x015C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EventInstanceIsValid_ReturnValue;         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4247[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalGivenScoresFromArray_ReturnValue; // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4248[0x1];                                     // 0x01A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress");
static_assert(sizeof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress) == 0x0001B0, "Wrong size on W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, EntryPoint) == 0x000000, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Abs_Int_ReturnValue) == 0x000004, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_PlayEvent2D_ReturnValue) == 0x000018, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_Event_IsDesignTime) == 0x000020, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_Event_MyGeometry) == 0x000024, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_Event_InDeltaTime) == 0x00005C, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_CustomEvent_ScoreData) == 0x000060, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_CustomEvent_ScoreData' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000090, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Get_ReturnValue) == 0x000098, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Get_ReturnValue_1) == 0x0000A0, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A8, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_GetTotalScorePool_MaxScore) == 0x0000AC, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_GetTotalScorePool_MaxScore' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_CustomEvent_PenaltyData) == 0x0000B0, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_CustomEvent_PenaltyData' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D0, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, K2Node_CustomEvent_Grade) == 0x0000D8, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::K2Node_CustomEvent_Grade' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x0000E8, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000108, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Array_Get_Item_1) == 0x000128, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000138, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000158, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_SelectColor_ReturnValue) == 0x00015C, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_SelectColor_ReturnValue_1) == 0x000170, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_EventInstanceIsValid_ReturnValue) == 0x000180, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_EventInstanceIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000188, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000190, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_GetTotalGivenScoresFromArray_ReturnValue) == 0x000198, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_GetTotalGivenScoresFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Add_IntInt_ReturnValue_1) == 0x00019C, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_IsValid_ReturnValue) == 0x0001A0, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A1, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001A2, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001A4, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001A8, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress, Temp_int_Variable) == 0x0001AC, "Member 'W_MissionScore_Progress_C_ExecuteUbergraph_W_MissionScore_Progress::Temp_int_Variable' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.RevealGrade
// 0x0010 (0x0010 - 0x0000)
struct W_MissionScore_Progress_C_RevealGrade final 
{
public:
	class FString                                 Param_Grade;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionScore_Progress_C_RevealGrade) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_RevealGrade");
static_assert(sizeof(W_MissionScore_Progress_C_RevealGrade) == 0x000010, "Wrong size on W_MissionScore_Progress_C_RevealGrade");
static_assert(offsetof(W_MissionScore_Progress_C_RevealGrade, Param_Grade) == 0x000000, "Member 'W_MissionScore_Progress_C_RevealGrade::Param_Grade' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdatePenalty
// 0x0020 (0x0020 - 0x0000)
struct W_MissionScore_Progress_C_UpdatePenalty final 
{
public:
	struct FScorePenaltyData                      Param_PenaltyData;                                 // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_MissionScore_Progress_C_UpdatePenalty) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_UpdatePenalty");
static_assert(sizeof(W_MissionScore_Progress_C_UpdatePenalty) == 0x000020, "Wrong size on W_MissionScore_Progress_C_UpdatePenalty");
static_assert(offsetof(W_MissionScore_Progress_C_UpdatePenalty, Param_PenaltyData) == 0x000000, "Member 'W_MissionScore_Progress_C_UpdatePenalty::Param_PenaltyData' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateScore
// 0x0030 (0x0030 - 0x0000)
struct W_MissionScore_Progress_C_UpdateScore final 
{
public:
	struct FScoreGroup                            Param_ScoreData;                                   // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(W_MissionScore_Progress_C_UpdateScore) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_UpdateScore");
static_assert(sizeof(W_MissionScore_Progress_C_UpdateScore) == 0x000030, "Wrong size on W_MissionScore_Progress_C_UpdateScore");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateScore, Param_ScoreData) == 0x000000, "Member 'W_MissionScore_Progress_C_UpdateScore::Param_ScoreData' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_MissionScore_Progress_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionScore_Progress_C_Tick) == 0x000004, "Wrong alignment on W_MissionScore_Progress_C_Tick");
static_assert(sizeof(W_MissionScore_Progress_C_Tick) == 0x00003C, "Wrong size on W_MissionScore_Progress_C_Tick");
static_assert(offsetof(W_MissionScore_Progress_C_Tick, MyGeometry) == 0x000000, "Member 'W_MissionScore_Progress_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_Tick, InDeltaTime) == 0x000038, "Member 'W_MissionScore_Progress_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_MissionScore_Progress_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionScore_Progress_C_PreConstruct) == 0x000001, "Wrong alignment on W_MissionScore_Progress_C_PreConstruct");
static_assert(sizeof(W_MissionScore_Progress_C_PreConstruct) == 0x000001, "Wrong size on W_MissionScore_Progress_C_PreConstruct");
static_assert(offsetof(W_MissionScore_Progress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_MissionScore_Progress_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateProgressMeter
// 0x0020 (0x0020 - 0x0000)
struct W_MissionScore_Progress_C_UpdateProgressMeter final 
{
public:
	int32                                         Param_CurrentScore;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4249[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionScore_Progress_C_UpdateProgressMeter) == 0x000004, "Wrong alignment on W_MissionScore_Progress_C_UpdateProgressMeter");
static_assert(sizeof(W_MissionScore_Progress_C_UpdateProgressMeter) == 0x000020, "Wrong size on W_MissionScore_Progress_C_UpdateProgressMeter");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, Param_CurrentScore) == 0x000000, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::Param_CurrentScore' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, Temp_bool_Variable) == 0x000004, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, K2Node_Select_Default) == 0x00000C, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_Clamp_ReturnValue) == 0x000010, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000014, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_NormalizeToRange_ReturnValue) == 0x000018, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateProgressMeter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'W_MissionScore_Progress_C_UpdateProgressMeter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.AddToScore
// 0x0048 (0x0048 - 0x0000)
struct W_MissionScore_Progress_C_AddToScore final 
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424A[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
};
static_assert(alignof(W_MissionScore_Progress_C_AddToScore) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_AddToScore");
static_assert(sizeof(W_MissionScore_Progress_C_AddToScore) == 0x000048, "Wrong size on W_MissionScore_Progress_C_AddToScore");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_NormalizeToRange_ReturnValue) == 0x00001C, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000024, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Ease_ReturnValue) == 0x000028, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_FFloor_ReturnValue) == 0x00002C, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_AddToScore, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'W_MissionScore_Progress_C_AddToScore::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.SetDebug
// 0x0050 (0x0050 - 0x0000)
struct W_MissionScore_Progress_C_SetDebug final 
{
public:
	class FText                                   DebugText1;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   DebugText2;                                        // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   DebugText3;                                        // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_2;                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionScore_Progress_C_SetDebug) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_SetDebug");
static_assert(sizeof(W_MissionScore_Progress_C_SetDebug) == 0x000050, "Wrong size on W_MissionScore_Progress_C_SetDebug");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, DebugText1) == 0x000000, "Member 'W_MissionScore_Progress_C_SetDebug::DebugText1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, DebugText2) == 0x000018, "Member 'W_MissionScore_Progress_C_SetDebug::DebugText2' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, DebugText3) == 0x000030, "Member 'W_MissionScore_Progress_C_SetDebug::DebugText3' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_TextIsEmpty_ReturnValue) == 0x000048, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000049, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_TextIsEmpty_ReturnValue_2) == 0x00004A, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_TextIsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_BooleanAND_ReturnValue) == 0x00004B, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_BooleanAND_ReturnValue_1) == 0x00004C, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_SetDebug, CallFunc_Not_PreBool_ReturnValue) == 0x00004D, "Member 'W_MissionScore_Progress_C_SetDebug::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function W_MissionScore_Progress.W_MissionScore_Progress_C.UpdateSound
// 0x0020 (0x0020 - 0x0000)
struct W_MissionScore_Progress_C_UpdateSound final 
{
public:
	bool                                          CallFunc_EventInstanceIsValid_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_424B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionScore_Progress_C_UpdateSound) == 0x000008, "Wrong alignment on W_MissionScore_Progress_C_UpdateSound");
static_assert(sizeof(W_MissionScore_Progress_C_UpdateSound) == 0x000020, "Wrong size on W_MissionScore_Progress_C_UpdateSound");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_EventInstanceIsValid_ReturnValue) == 0x000000, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_EventInstanceIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000001, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000010, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MissionScore_Progress_C_UpdateSound, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'W_MissionScore_Progress_C_UpdateSound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

