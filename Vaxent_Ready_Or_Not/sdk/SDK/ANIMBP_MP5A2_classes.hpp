#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_MP5A2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_MP5A2.ANIMBP_MP5A2_C
// 0x05C0 (0x0890 - 0x02D0)
class UANIMBP_MP5A2_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0308(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0350(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x03D0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x04D8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x04F8(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0518(0x00C0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x05D8(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0688(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0708(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0788(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0808(0x0080)()
	float                                         Mag01Alpha;                                        // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CurrentFireMode;                                   // 0x088C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ANIMBP_MP5A2(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void AnimNotify_ShowMag();
	void AnimNotify_DropSpeedReloadMagazine();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_MP5A2_C">();
	}
	static class UANIMBP_MP5A2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_MP5A2_C>();
	}
};
static_assert(alignof(UANIMBP_MP5A2_C) == 0x000010, "Wrong alignment on UANIMBP_MP5A2_C");
static_assert(sizeof(UANIMBP_MP5A2_C) == 0x000890, "Wrong size on UANIMBP_MP5A2_C");
static_assert(offsetof(UANIMBP_MP5A2_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_MP5A2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_Slot) == 0x000308, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_SequencePlayer_4) == 0x000350, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_ModifyBone) == 0x0003D0, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_LocalToComponentSpace) == 0x0004D8, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_ComponentToLocalSpace) == 0x0004F8, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_LayeredBoneBlend) == 0x000518, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_BlendListByEnum) == 0x0005D8, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_SequencePlayer_3) == 0x000688, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_SequencePlayer_2) == 0x000708, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_SequencePlayer_1) == 0x000788, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, AnimGraphNode_SequencePlayer) == 0x000808, "Member 'UANIMBP_MP5A2_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, Mag01Alpha) == 0x000888, "Member 'UANIMBP_MP5A2_C::Mag01Alpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_MP5A2_C, CurrentFireMode) == 0x00088C, "Member 'UANIMBP_MP5A2_C::CurrentFireMode' has a wrong offset!");

}

