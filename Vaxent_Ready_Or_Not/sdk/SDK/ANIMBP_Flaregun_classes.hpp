#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Flaregun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_Flaregun.ANIMBP_Flaregun_C
// 0x0080 (0x0350 - 0x02D0)
class UANIMBP_Flaregun_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0308(0x0048)()

public:
	void ExecuteUbergraph_ANIMBP_Flaregun(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_Flaregun_C">();
	}
	static class UANIMBP_Flaregun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_Flaregun_C>();
	}
};
static_assert(alignof(UANIMBP_Flaregun_C) == 0x000010, "Wrong alignment on UANIMBP_Flaregun_C");
static_assert(sizeof(UANIMBP_Flaregun_C) == 0x000350, "Wrong size on UANIMBP_Flaregun_C");
static_assert(offsetof(UANIMBP_Flaregun_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_Flaregun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_Flaregun_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_Flaregun_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_Flaregun_C, AnimGraphNode_Slot) == 0x000308, "Member 'UANIMBP_Flaregun_C::AnimGraphNode_Slot' has a wrong offset!");

}

