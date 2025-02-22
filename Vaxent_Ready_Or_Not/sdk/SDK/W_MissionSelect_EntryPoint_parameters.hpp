#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MissionSelect_EntryPoint

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature final 
{
public:
	class UW_MissionSelect_EntryPoint_C*          Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ExecuteUbergraph_W_MissionSelect_EntryPoint
// 0x00A8 (0x00A8 - 0x0000)
struct W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint final 
{
public:
	int32                                         Param_EntryPoint;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delay_1;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Collapse;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsGamepad;                            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_425E[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_PageName;                             // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEntryPoint                            K2Node_CustomEvent_EntryPoint;                     // 0x0018(0x0078)()
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delay;                                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4260[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint) == 0x000008, "Wrong alignment on W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint) == 0x0000A8, "Wrong size on W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, Param_EntryPoint) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::Param_EntryPoint' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_Event_Delay_1) == 0x000004, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_Event_Delay_1' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_Event_Collapse) == 0x000008, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_Event_Collapse' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_Event_IsGamepad) == 0x000009, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_Event_IsGamepad' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_Event_PageName) == 0x00000C, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_Event_PageName' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_CustomEvent_EntryPoint) == 0x000018, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_CustomEvent_EntryPoint' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_ComponentBoundEvent_Button) == 0x000090, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, K2Node_Event_Delay) == 0x000098, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::K2Node_Event_Delay' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000A0, "Member 'W_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Reveal
// 0x0004 (0x0004 - 0x0000)
struct W_MissionSelect_EntryPoint_C_Reveal final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_Reveal) == 0x000004, "Wrong alignment on W_MissionSelect_EntryPoint_C_Reveal");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_Reveal) == 0x000004, "Wrong size on W_MissionSelect_EntryPoint_C_Reveal");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_Reveal, Delay) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_Reveal::Delay' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetupEntryPoint
// 0x0078 (0x0078 - 0x0000)
struct W_MissionSelect_EntryPoint_C_SetupEntryPoint final 
{
public:
	struct FEntryPoint                            Param_EntryPoint;                                  // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_SetupEntryPoint) == 0x000008, "Wrong alignment on W_MissionSelect_EntryPoint_C_SetupEntryPoint");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_SetupEntryPoint) == 0x000078, "Wrong size on W_MissionSelect_EntryPoint_C_SetupEntryPoint");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_SetupEntryPoint, Param_EntryPoint) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_SetupEntryPoint::Param_EntryPoint' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ChangePage
// 0x0008 (0x0008 - 0x0000)
struct W_MissionSelect_EntryPoint_C_ChangePage final 
{
public:
	class FName                                   PageName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_ChangePage) == 0x000004, "Wrong alignment on W_MissionSelect_EntryPoint_C_ChangePage");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_ChangePage) == 0x000008, "Wrong size on W_MissionSelect_EntryPoint_C_ChangePage");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_ChangePage, PageName) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_ChangePage::PageName' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetInputMode
// 0x0001 (0x0001 - 0x0000)
struct W_MissionSelect_EntryPoint_C_SetInputMode final 
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_SetInputMode) == 0x000001, "Wrong alignment on W_MissionSelect_EntryPoint_C_SetInputMode");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_SetInputMode) == 0x000001, "Wrong size on W_MissionSelect_EntryPoint_C_SetInputMode");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_SetInputMode, IsGamepad) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_SetInputMode::IsGamepad' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Hide
// 0x0008 (0x0008 - 0x0000)
struct W_MissionSelect_EntryPoint_C_Hide final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Collapse;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_Hide) == 0x000004, "Wrong alignment on W_MissionSelect_EntryPoint_C_Hide");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_Hide) == 0x000008, "Wrong size on W_MissionSelect_EntryPoint_C_Hide");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_Hide, Delay) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_Hide::Delay' has a wrong offset!");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_Hide, Collapse) == 0x000004, "Member 'W_MissionSelect_EntryPoint_C_Hide::Collapse' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BackPage
// 0x0001 (0x0001 - 0x0000)
struct W_MissionSelect_EntryPoint_C_BackPage final 
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_BackPage) == 0x000001, "Wrong alignment on W_MissionSelect_EntryPoint_C_BackPage");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_BackPage) == 0x000001, "Wrong size on W_MissionSelect_EntryPoint_C_BackPage");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_BackPage, Handled) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_BackPage::Handled' has a wrong offset!");

// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct W_MissionSelect_EntryPoint_C_GetFocusTarget final 
{
public:
	class UWidget*                                Focus;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MissionSelect_EntryPoint_C_GetFocusTarget) == 0x000008, "Wrong alignment on W_MissionSelect_EntryPoint_C_GetFocusTarget");
static_assert(sizeof(W_MissionSelect_EntryPoint_C_GetFocusTarget) == 0x000008, "Wrong size on W_MissionSelect_EntryPoint_C_GetFocusTarget");
static_assert(offsetof(W_MissionSelect_EntryPoint_C_GetFocusTarget, Focus) == 0x000000, "Member 'W_MissionSelect_EntryPoint_C_GetFocusTarget::Focus' has a wrong offset!");

}

