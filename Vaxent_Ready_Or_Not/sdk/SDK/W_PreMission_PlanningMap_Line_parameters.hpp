#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_PlanningMap_Line

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ExecuteUbergraph_W_PreMission_PlanningMap_Line
// 0x0054 (0x0054 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentZoom;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3216[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3217[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line) == 0x000054, "Wrong size on W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, EntryPoint) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, K2Node_Event_CurrentZoom) == 0x000004, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::K2Node_Event_CurrentZoom' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, K2Node_Event_IsDesignTime) == 0x000014, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, K2Node_Event_MyGeometry) == 0x000018, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line, K2Node_Event_InDeltaTime) == 0x000050, "Member 'W_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleLineWeightByZoom
// 0x0004 (0x0004 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom final 
{
public:
	float                                         CurrentZoom;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom) == 0x000004, "Wrong size on W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom, CurrentZoom) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom::CurrentZoom' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_PreMission_PlanningMap_Line_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_Tick) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_Tick");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_Tick) == 0x00003C, "Wrong size on W_PreMission_PlanningMap_Line_C_Tick");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_Tick, MyGeometry) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_Tick, InDeltaTime) == 0x000038, "Member 'W_PreMission_PlanningMap_Line_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_PreConstruct) == 0x000001, "Wrong alignment on W_PreMission_PlanningMap_Line_C_PreConstruct");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_PreConstruct) == 0x000001, "Wrong size on W_PreMission_PlanningMap_Line_C_PreConstruct");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetAngle
// 0x0004 (0x0004 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_SetAngle final 
{
public:
	float                                         Param_Angle;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_SetAngle) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_SetAngle");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_SetAngle) == 0x000004, "Wrong size on W_PreMission_PlanningMap_Line_C_SetAngle");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetAngle, Param_Angle) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_SetAngle::Param_Angle' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetLength
// 0x0004 (0x0004 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_SetLength final 
{
public:
	float                                         Param_Length;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_SetLength) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_SetLength");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_SetLength) == 0x000004, "Wrong size on W_PreMission_PlanningMap_Line_C_SetLength");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetLength, Param_Length) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_SetLength::Param_Length' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetOffset
// 0x0020 (0x0020 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_SetOffset final 
{
public:
	float                                         Param_StartOffset;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_EndOffset;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_SetOffset) == 0x000008, "Wrong alignment on W_PreMission_PlanningMap_Line_C_SetOffset");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_SetOffset) == 0x000020, "Wrong size on W_PreMission_PlanningMap_Line_C_SetOffset");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetOffset, Param_StartOffset) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_SetOffset::Param_StartOffset' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetOffset, Param_EndOffset) == 0x000004, "Member 'W_PreMission_PlanningMap_Line_C_SetOffset::Param_EndOffset' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetOffset, K2Node_MakeStruct_Margin) == 0x000008, "Member 'W_PreMission_PlanningMap_Line_C_SetOffset::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_SetOffset, CallFunc_SlotAsSizeBoxSlot_ReturnValue) == 0x000018, "Member 'W_PreMission_PlanningMap_Line_C_SetOffset::CallFunc_SlotAsSizeBoxSlot_ReturnValue' has a wrong offset!");

// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleThickness
// 0x0008 (0x0008 - 0x0000)
struct W_PreMission_PlanningMap_Line_C_ScaleThickness final 
{
public:
	float                                         Multiplier;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_PlanningMap_Line_C_ScaleThickness) == 0x000004, "Wrong alignment on W_PreMission_PlanningMap_Line_C_ScaleThickness");
static_assert(sizeof(W_PreMission_PlanningMap_Line_C_ScaleThickness) == 0x000008, "Wrong size on W_PreMission_PlanningMap_Line_C_ScaleThickness");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ScaleThickness, Multiplier) == 0x000000, "Member 'W_PreMission_PlanningMap_Line_C_ScaleThickness::Multiplier' has a wrong offset!");
static_assert(offsetof(W_PreMission_PlanningMap_Line_C_ScaleThickness, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'W_PreMission_PlanningMap_Line_C_ScaleThickness::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

}

