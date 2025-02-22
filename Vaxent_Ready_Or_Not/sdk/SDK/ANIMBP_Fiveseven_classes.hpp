#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Fiveseven

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_Fiveseven.ANIMBP_Fiveseven_C
// 0x0880 (0x0B50 - 0x02D0)
class UANIMBP_Fiveseven_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0308(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0388(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x03D0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0470(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x04F0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x05F8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0618(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0638(0x00C0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x06F8(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0778(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0818(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0898(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0958(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x09A0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0AF8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0B20(0x0028)()
	float                                         Mag01Alpha;                                        // 0x0B48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAlpha;                                        // 0x0B4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ANIMBP_Fiveseven(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_Event_DeltaTimeX);
	void AnimNotify_SlideForward();
	void AnimNotify_SlideBack();
	void AnimNotify_ShowMag();
	void AnimNotify_DropSpeedReloadMagazine();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_728BD6E64F3F789438D4B4A82ABE5F3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_F6C465C449A44FC61395B0BE2A7E694C();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_Fiveseven_C">();
	}
	static class UANIMBP_Fiveseven_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_Fiveseven_C>();
	}
};
static_assert(alignof(UANIMBP_Fiveseven_C) == 0x000010, "Wrong alignment on UANIMBP_Fiveseven_C");
static_assert(sizeof(UANIMBP_Fiveseven_C) == 0x000B50, "Wrong size on UANIMBP_Fiveseven_C");
static_assert(offsetof(UANIMBP_Fiveseven_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_Fiveseven_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_SequencePlayer_3) == 0x000308, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_Slot_1) == 0x000388, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_BlendListByBool_1) == 0x0003D0, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_SequencePlayer_2) == 0x000470, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_ModifyBone) == 0x0004F0, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_LocalToComponentSpace) == 0x0005F8, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_ComponentToLocalSpace) == 0x000618, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000638, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_SequencePlayer_1) == 0x0006F8, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_BlendListByBool) == 0x000778, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_SequencePlayer) == 0x000818, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_LayeredBoneBlend) == 0x000898, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_Slot) == 0x000958, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_SaveCachedPose) == 0x0009A0, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_UseCachedPose_1) == 0x000AF8, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, AnimGraphNode_UseCachedPose) == 0x000B20, "Member 'UANIMBP_Fiveseven_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, Mag01Alpha) == 0x000B48, "Member 'UANIMBP_Fiveseven_C::Mag01Alpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_Fiveseven_C, SlideAlpha) == 0x000B4C, "Member 'UANIMBP_Fiveseven_C::SlideAlpha' has a wrong offset!");

}

