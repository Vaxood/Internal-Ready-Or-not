#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_PlayerNode

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerNode
// 0x00C8 (0x00C8 - 0x0000)
struct W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_320F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetPlayerTeamColor_LinearColor;           // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetPlayerTeamColor_SlateColor;            // 0x0018(0x0028)()
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlanningPlayerNumber_ReturnValue;      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3210[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewParam;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_CustomEvent_NewParam2;                      // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3211[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0098(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
};
static_assert(alignof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode) == 0x000008, "Wrong alignment on W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode");
static_assert(sizeof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode) == 0x0000C8, "Wrong size on W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, EntryPoint) == 0x000000, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_GetPlayerTeamColor_LinearColor) == 0x000008, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_GetPlayerTeamColor_LinearColor' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_GetPlayerTeamColor_SlateColor) == 0x000018, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_GetPlayerTeamColor_SlateColor' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_GetPlayerName_ReturnValue) == 0x000040, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_GetPlanningPlayerNumber_ReturnValue) == 0x000050, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_GetPlanningPlayerNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, K2Node_Event_IsDesignTime) == 0x000054, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, K2Node_CustomEvent_NewParam) == 0x000080, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, K2Node_CustomEvent_NewParam2) == 0x000084, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::K2Node_CustomEvent_NewParam2' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000098, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'W_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.SetupWidget
// 0x0014 (0x0014 - 0x0000)
struct W_PreMission_Tablet_PlayerNode_C_SetupWidget final 
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewParam2;                                         // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_PlayerNode_C_SetupWidget) == 0x000004, "Wrong alignment on W_PreMission_Tablet_PlayerNode_C_SetupWidget");
static_assert(sizeof(W_PreMission_Tablet_PlayerNode_C_SetupWidget) == 0x000014, "Wrong size on W_PreMission_Tablet_PlayerNode_C_SetupWidget");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_SetupWidget, NewParam) == 0x000000, "Member 'W_PreMission_Tablet_PlayerNode_C_SetupWidget::NewParam' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_SetupWidget, NewParam2) == 0x000004, "Member 'W_PreMission_Tablet_PlayerNode_C_SetupWidget::NewParam2' has a wrong offset!");

// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_PreMission_Tablet_PlayerNode_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_PreMission_Tablet_PlayerNode_C_PreConstruct) == 0x000001, "Wrong alignment on W_PreMission_Tablet_PlayerNode_C_PreConstruct");
static_assert(sizeof(W_PreMission_Tablet_PlayerNode_C_PreConstruct) == 0x000001, "Wrong size on W_PreMission_Tablet_PlayerNode_C_PreConstruct");
static_assert(offsetof(W_PreMission_Tablet_PlayerNode_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_PreMission_Tablet_PlayerNode_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

