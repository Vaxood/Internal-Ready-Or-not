#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AMRagdoll

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AMRagdoll.RagdollComponent.OnCapsuleHit
// 0x00B0 (0x00B0 - 0x0000)
struct RagdollComponent_OnCapsuleHit final 
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0024(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3B[0x4];                                     // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RagdollComponent_OnCapsuleHit) == 0x000008, "Wrong alignment on RagdollComponent_OnCapsuleHit");
static_assert(sizeof(RagdollComponent_OnCapsuleHit) == 0x0000B0, "Wrong size on RagdollComponent_OnCapsuleHit");
static_assert(offsetof(RagdollComponent_OnCapsuleHit, HitComponent) == 0x000000, "Member 'RagdollComponent_OnCapsuleHit::HitComponent' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnCapsuleHit, OtherActor) == 0x000008, "Member 'RagdollComponent_OnCapsuleHit::OtherActor' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnCapsuleHit, OtherComp) == 0x000010, "Member 'RagdollComponent_OnCapsuleHit::OtherComp' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnCapsuleHit, NormalImpulse) == 0x000018, "Member 'RagdollComponent_OnCapsuleHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnCapsuleHit, Hit) == 0x000024, "Member 'RagdollComponent_OnCapsuleHit::Hit' has a wrong offset!");

// Function AMRagdoll.RagdollComponent.OnPhysBodyHit
// 0x00B0 (0x00B0 - 0x0000)
struct RagdollComponent_OnPhysBodyHit final 
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0024(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3C[0x4];                                     // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RagdollComponent_OnPhysBodyHit) == 0x000008, "Wrong alignment on RagdollComponent_OnPhysBodyHit");
static_assert(sizeof(RagdollComponent_OnPhysBodyHit) == 0x0000B0, "Wrong size on RagdollComponent_OnPhysBodyHit");
static_assert(offsetof(RagdollComponent_OnPhysBodyHit, HitComponent) == 0x000000, "Member 'RagdollComponent_OnPhysBodyHit::HitComponent' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnPhysBodyHit, OtherActor) == 0x000008, "Member 'RagdollComponent_OnPhysBodyHit::OtherActor' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnPhysBodyHit, OtherComp) == 0x000010, "Member 'RagdollComponent_OnPhysBodyHit::OtherComp' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnPhysBodyHit, NormalImpulse) == 0x000018, "Member 'RagdollComponent_OnPhysBodyHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnPhysBodyHit, Hit) == 0x000024, "Member 'RagdollComponent_OnPhysBodyHit::Hit' has a wrong offset!");

// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct RagdollComponent_OnRagdollEvent__DelegateSignature final 
{
public:
	class URagdollComponent*                      Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RagdollComponent_OnRagdollEvent__DelegateSignature) == 0x000008, "Wrong alignment on RagdollComponent_OnRagdollEvent__DelegateSignature");
static_assert(sizeof(RagdollComponent_OnRagdollEvent__DelegateSignature) == 0x000008, "Wrong size on RagdollComponent_OnRagdollEvent__DelegateSignature");
static_assert(offsetof(RagdollComponent_OnRagdollEvent__DelegateSignature, Component) == 0x000000, "Member 'RagdollComponent_OnRagdollEvent__DelegateSignature::Component' has a wrong offset!");

// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollHitEvent__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct RagdollComponent_OnRagdollHitEvent__DelegateSignature final 
{
public:
	class URagdollComponent*                      Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Impulse;                                           // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0014(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3D[0x4];                                     // 0x009C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RagdollComponent_OnRagdollHitEvent__DelegateSignature) == 0x000008, "Wrong alignment on RagdollComponent_OnRagdollHitEvent__DelegateSignature");
static_assert(sizeof(RagdollComponent_OnRagdollHitEvent__DelegateSignature) == 0x0000A0, "Wrong size on RagdollComponent_OnRagdollHitEvent__DelegateSignature");
static_assert(offsetof(RagdollComponent_OnRagdollHitEvent__DelegateSignature, Component) == 0x000000, "Member 'RagdollComponent_OnRagdollHitEvent__DelegateSignature::Component' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnRagdollHitEvent__DelegateSignature, Impulse) == 0x000008, "Member 'RagdollComponent_OnRagdollHitEvent__DelegateSignature::Impulse' has a wrong offset!");
static_assert(offsetof(RagdollComponent_OnRagdollHitEvent__DelegateSignature, Hit) == 0x000014, "Member 'RagdollComponent_OnRagdollHitEvent__DelegateSignature::Hit' has a wrong offset!");

// Function AMRagdoll.RagdollComponent.RequestAnim2RagdollBlend
// 0x0004 (0x0004 - 0x0000)
struct RagdollComponent_RequestAnim2RagdollBlend final 
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RagdollComponent_RequestAnim2RagdollBlend) == 0x000004, "Wrong alignment on RagdollComponent_RequestAnim2RagdollBlend");
static_assert(sizeof(RagdollComponent_RequestAnim2RagdollBlend) == 0x000004, "Wrong size on RagdollComponent_RequestAnim2RagdollBlend");
static_assert(offsetof(RagdollComponent_RequestAnim2RagdollBlend, Duration) == 0x000000, "Member 'RagdollComponent_RequestAnim2RagdollBlend::Duration' has a wrong offset!");

// Function AMRagdoll.RagdollComponent.IsInRagdoll
// 0x0001 (0x0001 - 0x0000)
struct RagdollComponent_IsInRagdoll final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RagdollComponent_IsInRagdoll) == 0x000001, "Wrong alignment on RagdollComponent_IsInRagdoll");
static_assert(sizeof(RagdollComponent_IsInRagdoll) == 0x000001, "Wrong size on RagdollComponent_IsInRagdoll");
static_assert(offsetof(RagdollComponent_IsInRagdoll, ReturnValue) == 0x000000, "Member 'RagdollComponent_IsInRagdoll::ReturnValue' has a wrong offset!");

}

