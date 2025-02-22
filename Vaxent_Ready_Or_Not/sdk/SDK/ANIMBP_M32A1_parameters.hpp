#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M32A1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_M32A1.ANIMBP_M32A1_C.ExecuteUbergraph_ANIMBP_M32A1
// 0x001C (0x001C - 0x0000)
struct ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1 final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1) == 0x000004, "Wrong alignment on ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1");
static_assert(sizeof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1) == 0x00001C, "Wrong size on ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1");
static_assert(offsetof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1, EntryPoint) == 0x000000, "Member 'ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1, CallFunc_FInterpTo_ReturnValue) == 0x000018, "Member 'ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");

// Function ANIMBP_M32A1.ANIMBP_M32A1_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ANIMBP_M32A1_C_BlueprintUpdateAnimation final 
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_M32A1_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ANIMBP_M32A1_C_BlueprintUpdateAnimation");
static_assert(sizeof(ANIMBP_M32A1_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ANIMBP_M32A1_C_BlueprintUpdateAnimation");
static_assert(offsetof(ANIMBP_M32A1_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ANIMBP_M32A1_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_M32A1_C_AnimGraph final 
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_M32A1_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_M32A1_C_AnimGraph");
static_assert(sizeof(ANIMBP_M32A1_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_M32A1_C_AnimGraph");
static_assert(offsetof(ANIMBP_M32A1_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ANIMBP_M32A1_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

