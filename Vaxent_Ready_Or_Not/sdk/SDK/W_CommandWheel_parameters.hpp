#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommandWheel

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_CommandWheel.W_CommandWheel_C.ExecuteUbergraph_W_CommandWheel
// 0x00C0 (0x00C0 - 0x0000)
struct W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamType                                     CallFunc_GetActiveTeamType_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	int32                                         K2Node_Event_num_1;                                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_num;                                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                      K2Node_DynamicCast_AsUMG_Radial_Menu;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD9[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RadialMenu_C*                      K2Node_DynamicCast_AsUMG_Radial_Menu_1;            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDA[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_direction_1;                          // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_direction;                            // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_opacity;                              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel) == 0x000008, "Wrong alignment on W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel");
static_assert(sizeof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel) == 0x0000C0, "Wrong size on W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, EntryPoint) == 0x000000, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, CallFunc_GetActiveTeamType_ReturnValue) == 0x000004, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::CallFunc_GetActiveTeamType_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_Event_num_1) == 0x000080, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_Event_num_1' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_Event_num) == 0x000084, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_Event_num' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_DynamicCast_AsUMG_Radial_Menu) == 0x000088, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_DynamicCast_AsUMG_Radial_Menu' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_DynamicCast_AsUMG_Radial_Menu_1) == 0x000098, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_DynamicCast_AsUMG_Radial_Menu_1' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_Event_direction_1) == 0x0000A4, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_Event_direction_1' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_Event_direction) == 0x0000B0, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_Event_direction' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel, K2Node_Event_opacity) == 0x0000BC, "Member 'W_CommandWheel_C_ExecuteUbergraph_W_CommandWheel::K2Node_Event_opacity' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.SetInnerwheelOpacity
// 0x0004 (0x0004 - 0x0000)
struct W_CommandWheel_C_SetInnerwheelOpacity final 
{
public:
	float                                         Opacity;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_SetInnerwheelOpacity) == 0x000004, "Wrong alignment on W_CommandWheel_C_SetInnerwheelOpacity");
static_assert(sizeof(W_CommandWheel_C_SetInnerwheelOpacity) == 0x000004, "Wrong size on W_CommandWheel_C_SetInnerwheelOpacity");
static_assert(offsetof(W_CommandWheel_C_SetInnerwheelOpacity, Opacity) == 0x000000, "Member 'W_CommandWheel_C_SetInnerwheelOpacity::Opacity' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.SetOuterWheelDirection
// 0x000C (0x000C - 0x0000)
struct W_CommandWheel_C_SetOuterWheelDirection final 
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_SetOuterWheelDirection) == 0x000004, "Wrong alignment on W_CommandWheel_C_SetOuterWheelDirection");
static_assert(sizeof(W_CommandWheel_C_SetOuterWheelDirection) == 0x00000C, "Wrong size on W_CommandWheel_C_SetOuterWheelDirection");
static_assert(offsetof(W_CommandWheel_C_SetOuterWheelDirection, Direction) == 0x000000, "Member 'W_CommandWheel_C_SetOuterWheelDirection::Direction' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.SetInnerWheelDirection
// 0x000C (0x000C - 0x0000)
struct W_CommandWheel_C_SetInnerWheelDirection final 
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_SetInnerWheelDirection) == 0x000004, "Wrong alignment on W_CommandWheel_C_SetInnerWheelDirection");
static_assert(sizeof(W_CommandWheel_C_SetInnerWheelDirection) == 0x00000C, "Wrong size on W_CommandWheel_C_SetInnerWheelDirection");
static_assert(offsetof(W_CommandWheel_C_SetInnerWheelDirection, Direction) == 0x000000, "Member 'W_CommandWheel_C_SetInnerWheelDirection::Direction' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.SetOuterSegments
// 0x0004 (0x0004 - 0x0000)
struct W_CommandWheel_C_SetOuterSegments final 
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_SetOuterSegments) == 0x000004, "Wrong alignment on W_CommandWheel_C_SetOuterSegments");
static_assert(sizeof(W_CommandWheel_C_SetOuterSegments) == 0x000004, "Wrong size on W_CommandWheel_C_SetOuterSegments");
static_assert(offsetof(W_CommandWheel_C_SetOuterSegments, Num) == 0x000000, "Member 'W_CommandWheel_C_SetOuterSegments::Num' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.SetInnerSegments
// 0x0004 (0x0004 - 0x0000)
struct W_CommandWheel_C_SetInnerSegments final 
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CommandWheel_C_SetInnerSegments) == 0x000004, "Wrong alignment on W_CommandWheel_C_SetInnerSegments");
static_assert(sizeof(W_CommandWheel_C_SetInnerSegments) == 0x000004, "Wrong size on W_CommandWheel_C_SetInnerSegments");
static_assert(offsetof(W_CommandWheel_C_SetInnerSegments, Num) == 0x000000, "Member 'W_CommandWheel_C_SetInnerSegments::Num' has a wrong offset!");

// Function W_CommandWheel.W_CommandWheel_C.UpdateWheelSelection
// 0x0040 (0x0040 - 0x0000)
struct W_CommandWheel_C_UpdateWheelSelection final 
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InVector;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RadialMenu_C*                      K2Node_DynamicCast_AsUMG_Radial_Menu;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_CommandWheel_C_UpdateWheelSelection) == 0x000008, "Wrong alignment on W_CommandWheel_C_UpdateWheelSelection");
static_assert(sizeof(W_CommandWheel_C_UpdateWheelSelection) == 0x000040, "Wrong size on W_CommandWheel_C_UpdateWheelSelection");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, Object) == 0x000000, "Member 'W_CommandWheel_C_UpdateWheelSelection::Object' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, InVector) == 0x000008, "Member 'W_CommandWheel_C_UpdateWheelSelection::InVector' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, K2Node_DynamicCast_AsUMG_Radial_Menu) == 0x000018, "Member 'W_CommandWheel_C_UpdateWheelSelection::K2Node_DynamicCast_AsUMG_Radial_Menu' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_CommandWheel_C_UpdateWheelSelection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000024, "Member 'W_CommandWheel_C_UpdateWheelSelection::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x00002C, "Member 'W_CommandWheel_C_UpdateWheelSelection::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CommandWheel_C_UpdateWheelSelection, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000038, "Member 'W_CommandWheel_C_UpdateWheelSelection::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");

}

