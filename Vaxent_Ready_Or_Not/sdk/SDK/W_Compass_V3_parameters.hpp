#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Compass_V3

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_Compass_V3.W_Compass_V3_C.ExecuteUbergraph_W_Compass_V3
// 0x0070 (0x0070 - 0x0000)
struct W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3 final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3802[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x001C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClampAxis_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NegateFloat_ReturnValue;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3) == 0x000008, "Wrong alignment on W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3");
static_assert(sizeof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3) == 0x000070, "Wrong size on W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, EntryPoint) == 0x000000, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000010, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, K2Node_Event_MyGeometry) == 0x00001C, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, K2Node_Event_InDeltaTime) == 0x000054, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_BreakRotator_Roll) == 0x000058, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_BreakRotator_Pitch) == 0x00005C, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_BreakRotator_Yaw) == 0x000060, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_ClampAxis_ReturnValue) == 0x000064, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_ClampAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3, CallFunc_NegateFloat_ReturnValue) == 0x000068, "Member 'W_Compass_V3_C_ExecuteUbergraph_W_Compass_V3::CallFunc_NegateFloat_ReturnValue' has a wrong offset!");

// Function W_Compass_V3.W_Compass_V3_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_Compass_V3_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Compass_V3_C_Tick) == 0x000004, "Wrong alignment on W_Compass_V3_C_Tick");
static_assert(sizeof(W_Compass_V3_C_Tick) == 0x00003C, "Wrong size on W_Compass_V3_C_Tick");
static_assert(offsetof(W_Compass_V3_C_Tick, MyGeometry) == 0x000000, "Member 'W_Compass_V3_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Compass_V3_C_Tick, InDeltaTime) == 0x000038, "Member 'W_Compass_V3_C_Tick::InDeltaTime' has a wrong offset!");

}

