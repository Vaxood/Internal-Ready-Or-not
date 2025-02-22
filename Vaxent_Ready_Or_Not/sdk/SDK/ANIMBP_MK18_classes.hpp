#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_MK18

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_MK18.ANIMBP_MK18_C
// 0x0880 (0x0B50 - 0x02D0)
class UANIMBP_MK18_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0308(0x0158)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0460(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x04A8(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0548(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05C8(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0648(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0708(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0750(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0778(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x07A0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x08A8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x08C8(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x09D0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x09F0(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AF8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B18(0x0020)()
	float                                         CarrierHandleAlpha;                                // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSemi;                                           // 0x0B3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D52[0x3];                                     // 0x0B3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mag01Alpha;                                        // 0x0B40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ANIMBP_MK18(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AnimNotify_ShowMag();
	void AnimNotify_DropSpeedReloadMagazine();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_BlendListByBool_14BC27694C204713BF249982948108B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MK18_AnimGraphNode_ModifyBone_840474584ED0B753AD6DF9B917324032();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_MK18_C">();
	}
	static class UANIMBP_MK18_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_MK18_C>();
	}
};
static_assert(alignof(UANIMBP_MK18_C) == 0x000010, "Wrong alignment on UANIMBP_MK18_C");
static_assert(sizeof(UANIMBP_MK18_C) == 0x000B50, "Wrong size on UANIMBP_MK18_C");
static_assert(offsetof(UANIMBP_MK18_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_MK18_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_MK18_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_SaveCachedPose) == 0x000308, "Member 'UANIMBP_MK18_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_Slot_1) == 0x000460, "Member 'UANIMBP_MK18_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_BlendListByBool) == 0x0004A8, "Member 'UANIMBP_MK18_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_SequencePlayer_1) == 0x000548, "Member 'UANIMBP_MK18_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_SequencePlayer) == 0x0005C8, "Member 'UANIMBP_MK18_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_LayeredBoneBlend) == 0x000648, "Member 'UANIMBP_MK18_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_Slot) == 0x000708, "Member 'UANIMBP_MK18_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_UseCachedPose_1) == 0x000750, "Member 'UANIMBP_MK18_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_UseCachedPose) == 0x000778, "Member 'UANIMBP_MK18_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_ModifyBone_2) == 0x0007A0, "Member 'UANIMBP_MK18_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0008A8, "Member 'UANIMBP_MK18_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_ModifyBone_1) == 0x0008C8, "Member 'UANIMBP_MK18_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0009D0, "Member 'UANIMBP_MK18_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_ModifyBone) == 0x0009F0, "Member 'UANIMBP_MK18_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_ComponentToLocalSpace) == 0x000AF8, "Member 'UANIMBP_MK18_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, AnimGraphNode_LocalToComponentSpace) == 0x000B18, "Member 'UANIMBP_MK18_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, CarrierHandleAlpha) == 0x000B38, "Member 'UANIMBP_MK18_C::CarrierHandleAlpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, bIsSemi) == 0x000B3C, "Member 'UANIMBP_MK18_C::bIsSemi' has a wrong offset!");
static_assert(offsetof(UANIMBP_MK18_C, Mag01Alpha) == 0x000B40, "Member 'UANIMBP_MK18_C::Mag01Alpha' has a wrong offset!");

}

