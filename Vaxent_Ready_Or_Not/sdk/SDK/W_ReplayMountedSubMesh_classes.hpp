#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ReplayMountedSubMesh

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ReplayMountedSubMesh.W_ReplayMountedSubMesh_C
// 0x0038 (0x0298 - 0x0260)
class UW_ReplayMountedSubMesh_C final  : public UUserWidget
{
public:
	class UScrollBox*                             ScrollBox_129;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubMeshName;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FReplaySubMesh                         ReplaySubMesh;                                     // 0x0270(0x0028)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ReplayMountedSubMesh_C">();
	}
	static class UW_ReplayMountedSubMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ReplayMountedSubMesh_C>();
	}
};
static_assert(alignof(UW_ReplayMountedSubMesh_C) == 0x000008, "Wrong alignment on UW_ReplayMountedSubMesh_C");
static_assert(sizeof(UW_ReplayMountedSubMesh_C) == 0x000298, "Wrong size on UW_ReplayMountedSubMesh_C");
static_assert(offsetof(UW_ReplayMountedSubMesh_C, ScrollBox_129) == 0x000260, "Member 'UW_ReplayMountedSubMesh_C::ScrollBox_129' has a wrong offset!");
static_assert(offsetof(UW_ReplayMountedSubMesh_C, SubMeshName) == 0x000268, "Member 'UW_ReplayMountedSubMesh_C::SubMeshName' has a wrong offset!");
static_assert(offsetof(UW_ReplayMountedSubMesh_C, ReplaySubMesh) == 0x000270, "Member 'UW_ReplayMountedSubMesh_C::ReplaySubMesh' has a wrong offset!");

}

