#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M76

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_M76.ANIMBP_M76_C
// 0x0730 (0x0A00 - 0x02D0)
class UANIMBP_M76_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0308(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0350(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x03F0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0470(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x04F0(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0518(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0620(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0728(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0748(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0768(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0828(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0870(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x09C8(0x0028)()
	bool                                          bIsSemi;                                           // 0x09F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455E[0x3];                                     // 0x09F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mag01Alpha;                                        // 0x09F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ANIMBP_M76(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void AnimNotify_ShowMag();
	void AnimNotify_DropSpeedReloadMagazine();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M76_AnimGraphNode_BlendListByBool_2FDFCB614DABE2507F92B2A68897BFF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M76_AnimGraphNode_ModifyBone_5730BB10402C53C7320762890B271795();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_M76_C">();
	}
	static class UANIMBP_M76_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_M76_C>();
	}
};
static_assert(alignof(UANIMBP_M76_C) == 0x000010, "Wrong alignment on UANIMBP_M76_C");
static_assert(sizeof(UANIMBP_M76_C) == 0x000A00, "Wrong size on UANIMBP_M76_C");
static_assert(offsetof(UANIMBP_M76_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_M76_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_M76_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_Slot_1) == 0x000308, "Member 'UANIMBP_M76_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_BlendListByBool) == 0x000350, "Member 'UANIMBP_M76_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_SequencePlayer_1) == 0x0003F0, "Member 'UANIMBP_M76_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_SequencePlayer) == 0x000470, "Member 'UANIMBP_M76_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_UseCachedPose_1) == 0x0004F0, "Member 'UANIMBP_M76_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_ModifyBone_1) == 0x000518, "Member 'UANIMBP_M76_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_ModifyBone) == 0x000620, "Member 'UANIMBP_M76_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_LocalToComponentSpace) == 0x000728, "Member 'UANIMBP_M76_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_ComponentToLocalSpace) == 0x000748, "Member 'UANIMBP_M76_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_LayeredBoneBlend) == 0x000768, "Member 'UANIMBP_M76_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_Slot) == 0x000828, "Member 'UANIMBP_M76_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_SaveCachedPose) == 0x000870, "Member 'UANIMBP_M76_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, AnimGraphNode_UseCachedPose) == 0x0009C8, "Member 'UANIMBP_M76_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, bIsSemi) == 0x0009F0, "Member 'UANIMBP_M76_C::bIsSemi' has a wrong offset!");
static_assert(offsetof(UANIMBP_M76_C, Mag01Alpha) == 0x0009F4, "Member 'UANIMBP_M76_C::Mag01Alpha' has a wrong offset!");

}

