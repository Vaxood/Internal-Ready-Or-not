#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ReplayTimeBar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnScrubbingEnd__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature final 
{
public:
	float                                         NewCurrentTimeInSeconds;                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature) == 0x000004, "Wrong alignment on W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature");
static_assert(sizeof(W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature) == 0x000004, "Wrong size on W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature");
static_assert(offsetof(W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature, NewCurrentTimeInSeconds) == 0x000000, "Member 'W_ReplayTimeBar_C_OnScrubbingEnd__DelegateSignature::NewCurrentTimeInSeconds' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.OnChangeCurrentTime__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature final 
{
public:
	float                                         NewCurrentTimeInSeconds;                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature) == 0x000004, "Wrong alignment on W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature");
static_assert(sizeof(W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature) == 0x000004, "Wrong size on W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature");
static_assert(offsetof(W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature, NewCurrentTimeInSeconds) == 0x000000, "Member 'W_ReplayTimeBar_C_OnChangeCurrentTime__DelegateSignature::NewCurrentTimeInSeconds' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.ExecuteUbergraph_W_ReplayTimeBar
// 0x0110 (0x0110 - 0x0000)
struct W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetWidgetSize_Local_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ReplayEventMarker_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                      K2Node_DynamicCast_AsReplay_Controller;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B7[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B8[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                      K2Node_DynamicCast_AsReplay_Controller_1;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B9[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BarPercentage;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31BA[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReplayEvent                           K2Node_CustomEvent_ReplayEvent;                    // 0x0090(0x0028)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00B8(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31BB[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0100(0x0010)(NoDestructor)
};
static_assert(alignof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar) == 0x000008, "Wrong alignment on W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar");
static_assert(sizeof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar) == 0x000110, "Wrong size on W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, EntryPoint) == 0x000000, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetValue_ReturnValue) == 0x00000C, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetWidgetSize_Local_ReturnValue) == 0x000010, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetWidgetSize_Local_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_BreakVector2D_X) == 0x000018, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_Create_ReturnValue) == 0x000028, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_DynamicCast_AsReplay_Controller) == 0x000038, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_DynamicCast_AsReplay_Controller' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000044, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue) == 0x000048, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00004C, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000050, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000054, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_MakeStruct_Margin) == 0x000058, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_ComponentBoundEvent_Value) == 0x000068, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetPlayerController_ReturnValue_2) == 0x000070, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_DynamicCast_AsReplay_Controller_1) == 0x000078, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_DynamicCast_AsReplay_Controller_1' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue) == 0x000084, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_CustomEvent_BarPercentage) == 0x000088, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_CustomEvent_BarPercentage' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_CustomEvent_ReplayEvent) == 0x000090, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_CustomEvent_ReplayEvent' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_Event_MyGeometry) == 0x0000B8, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_Event_InDeltaTime) == 0x0000F0, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000F8, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar, K2Node_MakeStruct_Anchors) == 0x000100, "Member 'W_ReplayTimeBar_C_ExecuteUbergraph_W_ReplayTimeBar::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_ReplayTimeBar_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_Tick) == 0x000004, "Wrong alignment on W_ReplayTimeBar_C_Tick");
static_assert(sizeof(W_ReplayTimeBar_C_Tick) == 0x00003C, "Wrong size on W_ReplayTimeBar_C_Tick");
static_assert(offsetof(W_ReplayTimeBar_C_Tick, MyGeometry) == 0x000000, "Member 'W_ReplayTimeBar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Tick, InDeltaTime) == 0x000038, "Member 'W_ReplayTimeBar_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.AddEvent
// 0x0030 (0x0030 - 0x0000)
struct W_ReplayTimeBar_C_AddEvent final 
{
public:
	float                                         BarPercentage;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReplayEvent                           ReplayEvent;                                       // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_ReplayTimeBar_C_AddEvent) == 0x000008, "Wrong alignment on W_ReplayTimeBar_C_AddEvent");
static_assert(sizeof(W_ReplayTimeBar_C_AddEvent) == 0x000030, "Wrong size on W_ReplayTimeBar_C_AddEvent");
static_assert(offsetof(W_ReplayTimeBar_C_AddEvent, BarPercentage) == 0x000000, "Member 'W_ReplayTimeBar_C_AddEvent::BarPercentage' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_AddEvent, ReplayEvent) == 0x000008, "Member 'W_ReplayTimeBar_C_AddEvent::ReplayEvent' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature final 
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'W_ReplayTimeBar_C_BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Get_ProgressBar__Percent_0
// 0x0028 (0x0028 - 0x0000)
struct W_ReplayTimeBar_C_Get_ProgressBar__Percent_0 final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                      K2Node_DynamicCast_AsReplay_Controller;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0) == 0x000008, "Wrong alignment on W_ReplayTimeBar_C_Get_ProgressBar__Percent_0");
static_assert(sizeof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0) == 0x000028, "Wrong size on W_ReplayTimeBar_C_Get_ProgressBar__Percent_0");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, ReturnValue) == 0x000000, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, K2Node_DynamicCast_AsReplay_Controller) == 0x000010, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::K2Node_DynamicCast_AsReplay_Controller' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue) == 0x00001C, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue) == 0x000020, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ProgressBar__Percent_0, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'W_ReplayTimeBar_C_Get_ProgressBar__Percent_0::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function W_ReplayTimeBar.W_ReplayTimeBar_C.Get_ReplaySlider_Value
// 0x0020 (0x0020 - 0x0000)
struct W_ReplayTimeBar_C_Get_ReplaySlider_Value final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31BF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                      K2Node_DynamicCast_AsReplay_Controller;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31C0[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ReplayTimeBar_C_Get_ReplaySlider_Value) == 0x000008, "Wrong alignment on W_ReplayTimeBar_C_Get_ReplaySlider_Value");
static_assert(sizeof(W_ReplayTimeBar_C_Get_ReplaySlider_Value) == 0x000020, "Wrong size on W_ReplayTimeBar_C_Get_ReplaySlider_Value");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ReplaySlider_Value, ReturnValue) == 0x000000, "Member 'W_ReplayTimeBar_C_Get_ReplaySlider_Value::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ReplaySlider_Value, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'W_ReplayTimeBar_C_Get_ReplaySlider_Value::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ReplaySlider_Value, K2Node_DynamicCast_AsReplay_Controller) == 0x000010, "Member 'W_ReplayTimeBar_C_Get_ReplaySlider_Value::K2Node_DynamicCast_AsReplay_Controller' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ReplaySlider_Value, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'W_ReplayTimeBar_C_Get_ReplaySlider_Value::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ReplayTimeBar_C_Get_ReplaySlider_Value, CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue) == 0x00001C, "Member 'W_ReplayTimeBar_C_Get_ReplaySlider_Value::CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue' has a wrong offset!");

}

