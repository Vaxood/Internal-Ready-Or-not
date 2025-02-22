#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_G3A3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ANIMBP_G3A3.ANIMBP_G3A3_C
// 0x0360 (0x0630 - 0x02D0)
class UANIMBP_G3A3_C final  : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x02D8(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x03E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0400(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0420(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0468(0x0030)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0498(0x0108)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05A0(0x0080)()
	float                                         Mag01Alpha;                                        // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSemi;                                           // 0x0624(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ANIMBP_G3A3(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue);
	void AnimNotify_ShowMag();
	void AnimNotify_DropSpeedReloadMagazine();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_G3A3_AnimGraphNode_ModifyBone_41A9F9E2439542D91162F78986CAF060();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANIMBP_G3A3_C">();
	}
	static class UANIMBP_G3A3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANIMBP_G3A3_C>();
	}
};
static_assert(alignof(UANIMBP_G3A3_C) == 0x000010, "Wrong alignment on UANIMBP_G3A3_C");
static_assert(sizeof(UANIMBP_G3A3_C) == 0x000630, "Wrong size on UANIMBP_G3A3_C");
static_assert(offsetof(UANIMBP_G3A3_C, UberGraphFrame) == 0x0002D0, "Member 'UANIMBP_G3A3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_ModifyBone_1) == 0x0002D8, "Member 'UANIMBP_G3A3_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_LocalToComponentSpace) == 0x0003E0, "Member 'UANIMBP_G3A3_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_ComponentToLocalSpace) == 0x000400, "Member 'UANIMBP_G3A3_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_Slot) == 0x000420, "Member 'UANIMBP_G3A3_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_Root) == 0x000468, "Member 'UANIMBP_G3A3_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_ModifyBone) == 0x000498, "Member 'UANIMBP_G3A3_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, AnimGraphNode_SequencePlayer) == 0x0005A0, "Member 'UANIMBP_G3A3_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, Mag01Alpha) == 0x000620, "Member 'UANIMBP_G3A3_C::Mag01Alpha' has a wrong offset!");
static_assert(offsetof(UANIMBP_G3A3_C, bIsSemi) == 0x000624, "Member 'UANIMBP_G3A3_C::bIsSemi' has a wrong offset!");

}

