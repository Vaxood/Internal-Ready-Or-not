#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Mirrorgun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_Mirrorgun.ANIMBP_Mirrorgun_C
// 0x0370 (0x0640 - 0x02D0)
class UANIMBP_Mirrorgun_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0308(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0350(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x03D0(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x04D8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x04F8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0518(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0598(0x00A0)()
	bool                                          bEquipped;                                         // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ANIMBP_Mirrorgun(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ABaseItem* K2Node_DynamicCast_AsBase_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipped_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_Mirrorgun_C">();
	}
	static class UANIMBP_Mirrorgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_Mirrorgun_C>();
	}
};
static_assert(alignof(UANIMBP_Mirrorgun_C) == 0x000010, "Wrong alignment on UANIMBP_Mirrorgun_C");
static_assert(sizeof(UANIMBP_Mirrorgun_C) == 0x000640, "Wrong size on UANIMBP_Mirrorgun_C");
static_assert(offsetof(UANIMBP_Mirrorgun_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_Mirrorgun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_Slot) == 0x000308, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_SequencePlayer_1) == 0x000350, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_ModifyBone) == 0x0003D0, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_ComponentToLocalSpace) == 0x0004D8, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_LocalToComponentSpace) == 0x0004F8, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_SequencePlayer) == 0x000518, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, AnimGraphNode_BlendListByBool) == 0x000598, "Member 'UANIMBP_Mirrorgun_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_Mirrorgun_C, bEquipped) == 0x000638, "Member 'UANIMBP_Mirrorgun_C::bEquipped' has a wrong offset!");

}

