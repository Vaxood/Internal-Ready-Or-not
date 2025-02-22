#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cursor_Default

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Cursor_Default.Cursor_Default_C.ExecuteUbergraph_Cursor_Default
// 0x0044 (0x0044 - 0x0000)
struct Cursor_Default_C_ExecuteUbergraph_Cursor_Default final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default) == 0x000004, "Wrong alignment on Cursor_Default_C_ExecuteUbergraph_Cursor_Default");
static_assert(sizeof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default) == 0x000044, "Wrong size on Cursor_Default_C_ExecuteUbergraph_Cursor_Default");
static_assert(offsetof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default, EntryPoint) == 0x000000, "Member 'Cursor_Default_C_ExecuteUbergraph_Cursor_Default::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default, K2Node_Event_MyGeometry) == 0x000004, "Member 'Cursor_Default_C_ExecuteUbergraph_Cursor_Default::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Cursor_Default_C_ExecuteUbergraph_Cursor_Default::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Cursor_Default_C_ExecuteUbergraph_Cursor_Default, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000040, "Member 'Cursor_Default_C_ExecuteUbergraph_Cursor_Default::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");

// Function Cursor_Default.Cursor_Default_C.Tick
// 0x003C (0x003C - 0x0000)
struct Cursor_Default_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cursor_Default_C_Tick) == 0x000004, "Wrong alignment on Cursor_Default_C_Tick");
static_assert(sizeof(Cursor_Default_C_Tick) == 0x00003C, "Wrong size on Cursor_Default_C_Tick");
static_assert(offsetof(Cursor_Default_C_Tick, MyGeometry) == 0x000000, "Member 'Cursor_Default_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Cursor_Default_C_Tick, InDeltaTime) == 0x000038, "Member 'Cursor_Default_C_Tick::InDeltaTime' has a wrong offset!");

}

