#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModioModDetailsViewWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.ExecuteUbergraph_ModioModDetailsViewWidget
// 0x0040 (0x0040 - 0x0000)
struct ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget) == 0x000004, "Wrong alignment on ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget");
static_assert(sizeof(ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget) == 0x000040, "Wrong size on ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget");
static_assert(offsetof(ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget, EntryPoint) == 0x000000, "Member 'ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct ModioModDetailsViewWidget_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModioModDetailsViewWidget_C_Tick) == 0x000004, "Wrong alignment on ModioModDetailsViewWidget_C_Tick");
static_assert(sizeof(ModioModDetailsViewWidget_C_Tick) == 0x00003C, "Wrong size on ModioModDetailsViewWidget_C_Tick");
static_assert(offsetof(ModioModDetailsViewWidget_C_Tick, MyGeometry) == 0x000000, "Member 'ModioModDetailsViewWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ModioModDetailsViewWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'ModioModDetailsViewWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

