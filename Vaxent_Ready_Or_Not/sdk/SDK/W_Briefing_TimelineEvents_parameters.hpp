#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_TimelineEvents

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature final 
{
public:
	float                                         EventAudioStart;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EventAudioDuration;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature) == 0x000004, "Wrong alignment on W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature");
static_assert(sizeof(W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature) == 0x000008, "Wrong size on W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature");
static_assert(offsetof(W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature, EventAudioStart) == 0x000000, "Member 'W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature::EventAudioStart' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature, EventAudioDuration) == 0x000004, "Member 'W_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature::EventAudioDuration' has a wrong offset!");

// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
// 0x0108 (0x0108 - 0x0000)
struct W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EventAudioStart;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EventAudioDuration;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float EventAudioStart, float EventAudioDuration)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_12DA[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<float, struct FTimelineEvent>            K2Node_CustomEvent_EventEntries;                   // 0x0020(0x0050)()
	float                                         K2Node_CustomEvent_EventID;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12DB[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Briefing_Event_C*                    CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimelineEvent                         CallFunc_Map_Find_Value;                           // 0x0080(0x0050)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12DC[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12DD[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_InsertChildAt_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents) == 0x000008, "Wrong alignment on W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents");
static_assert(sizeof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents) == 0x000108, "Wrong size on W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, EntryPoint) == 0x000000, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CustomEvent_EventAudioStart) == 0x000004, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CustomEvent_EventAudioStart' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CustomEvent_EventAudioDuration) == 0x000008, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CustomEvent_EventAudioDuration' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CustomEvent_EventEntries) == 0x000020, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CustomEvent_EventEntries' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CustomEvent_EventID) == 0x000070, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CustomEvent_EventID' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_Create_ReturnValue) == 0x000078, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_Map_Find_Value) == 0x000080, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_Map_Find_ReturnValue) == 0x0000D0, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x0000D8, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x0000E0, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, CallFunc_InsertChildAt_ReturnValue) == 0x0000F0, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::CallFunc_InsertChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'W_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_TimelineEvents_C_EventClicked final 
{
public:
	float                                         EventAudioStart;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EventAudioDuration;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_TimelineEvents_C_EventClicked) == 0x000004, "Wrong alignment on W_Briefing_TimelineEvents_C_EventClicked");
static_assert(sizeof(W_Briefing_TimelineEvents_C_EventClicked) == 0x000008, "Wrong size on W_Briefing_TimelineEvents_C_EventClicked");
static_assert(offsetof(W_Briefing_TimelineEvents_C_EventClicked, EventAudioStart) == 0x000000, "Member 'W_Briefing_TimelineEvents_C_EventClicked::EventAudioStart' has a wrong offset!");
static_assert(offsetof(W_Briefing_TimelineEvents_C_EventClicked, EventAudioDuration) == 0x000004, "Member 'W_Briefing_TimelineEvents_C_EventClicked::EventAudioDuration' has a wrong offset!");

// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
// 0x0004 (0x0004 - 0x0000)
struct W_Briefing_TimelineEvents_C_AddEvent final 
{
public:
	float                                         EventId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_TimelineEvents_C_AddEvent) == 0x000004, "Wrong alignment on W_Briefing_TimelineEvents_C_AddEvent");
static_assert(sizeof(W_Briefing_TimelineEvents_C_AddEvent) == 0x000004, "Wrong size on W_Briefing_TimelineEvents_C_AddEvent");
static_assert(offsetof(W_Briefing_TimelineEvents_C_AddEvent, EventId) == 0x000000, "Member 'W_Briefing_TimelineEvents_C_AddEvent::EventId' has a wrong offset!");

// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
// 0x0050 (0x0050 - 0x0000)
struct W_Briefing_TimelineEvents_C_Initialize final 
{
public:
	TMap<float, struct FTimelineEvent>            Param_EventEntries;                                // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Briefing_TimelineEvents_C_Initialize) == 0x000008, "Wrong alignment on W_Briefing_TimelineEvents_C_Initialize");
static_assert(sizeof(W_Briefing_TimelineEvents_C_Initialize) == 0x000050, "Wrong size on W_Briefing_TimelineEvents_C_Initialize");
static_assert(offsetof(W_Briefing_TimelineEvents_C_Initialize, Param_EventEntries) == 0x000000, "Member 'W_Briefing_TimelineEvents_C_Initialize::Param_EventEntries' has a wrong offset!");

}

