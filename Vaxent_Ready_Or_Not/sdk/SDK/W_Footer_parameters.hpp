#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Footer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_Footer.W_Footer_C.ExecuteUbergraph_W_Footer
// 0x0040 (0x0040 - 0x0000)
struct W_Footer_C_ExecuteUbergraph_W_Footer final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetFooterText_ReturnValue;                // 0x0008(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HeldTime;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Footer_C_ExecuteUbergraph_W_Footer) == 0x000008, "Wrong alignment on W_Footer_C_ExecuteUbergraph_W_Footer");
static_assert(sizeof(W_Footer_C_ExecuteUbergraph_W_Footer) == 0x000040, "Wrong size on W_Footer_C_ExecuteUbergraph_W_Footer");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, EntryPoint) == 0x000000, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, CallFunc_GetFooterText_ReturnValue) == 0x000008, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::CallFunc_GetFooterText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000028, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, K2Node_Event_HeldTime) == 0x000030, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::K2Node_Event_HeldTime' has a wrong offset!");
static_assert(offsetof(W_Footer_C_ExecuteUbergraph_W_Footer, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'W_Footer_C_ExecuteUbergraph_W_Footer::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function W_Footer.W_Footer_C.BP_DismissInputActionProgress
// 0x0004 (0x0004 - 0x0000)
struct W_Footer_C_BP_DismissInputActionProgress final 
{
public:
	float                                         HeldTime;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Footer_C_BP_DismissInputActionProgress) == 0x000004, "Wrong alignment on W_Footer_C_BP_DismissInputActionProgress");
static_assert(sizeof(W_Footer_C_BP_DismissInputActionProgress) == 0x000004, "Wrong size on W_Footer_C_BP_DismissInputActionProgress");
static_assert(offsetof(W_Footer_C_BP_DismissInputActionProgress, HeldTime) == 0x000000, "Member 'W_Footer_C_BP_DismissInputActionProgress::HeldTime' has a wrong offset!");

}

