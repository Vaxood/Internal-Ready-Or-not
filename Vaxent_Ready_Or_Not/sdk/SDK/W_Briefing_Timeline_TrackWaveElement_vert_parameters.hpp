#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Timeline_TrackWaveElement_vert

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert
// 0x0080 (0x0080 - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_WaveAmp;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Freq;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34E3[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34E4[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert) == 0x000008, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert) == 0x000080, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, EntryPoint) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_Event_MyGeometry) == 0x000004, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_CustomEvent_WaveAmp) == 0x000040, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_CustomEvent_WaveAmp' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_CustomEvent_Freq) == 0x000044, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_CustomEvent_Freq' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_MakeStruct_Margin) == 0x00004C, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_Add_FloatFloat_ReturnValue) == 0x00005C, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000060, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_NormalizeToRange_ReturnValue) == 0x000064, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_Ease_ReturnValue) == 0x000068, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000070, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert, K2Node_Event_IsDesignTime) == 0x000078, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct) == 0x000001, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct) == 0x000001, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Update
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_Update final 
{
public:
	float                                         Param_WaveAmp;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Freq;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_Update) == 0x000004, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_Update");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_Update) == 0x000008, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_Update");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_Update, Param_WaveAmp) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_Update::Param_WaveAmp' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_Update, Freq) == 0x000004, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_Update::Freq' has a wrong offset!");

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_Tick) == 0x000004, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_Tick");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_Tick) == 0x00003C, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_Tick");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_Tick, MyGeometry) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_Tick, InDeltaTime) == 0x000038, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetWaveLength
// 0x0028 (0x0028 - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength final 
{
public:
	float                                         Length;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0018(0x0010)(NoDestructor)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength) == 0x000008, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength) == 0x000028, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength, Length) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength::Length' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength, K2Node_MakeStruct_Anchors) == 0x000018, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetStyle
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle final 
{
public:
	bool                                          IsTimelineEvent;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle) == 0x000001, "Wrong alignment on W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle");
static_assert(sizeof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle) == 0x000001, "Wrong size on W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle");
static_assert(offsetof(W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle, IsTimelineEvent) == 0x000000, "Member 'W_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle::IsTimelineEvent' has a wrong offset!");

}

