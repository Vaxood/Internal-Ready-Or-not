#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_PlanningMap_Marker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C
// 0x0010 (0x0210 - 0x0200)
class UBP_UI_PlanningMap_Marker_C final  : public USceneComponent
{
public:
	uint8                                         Pad_388A[0x8];                                     // 0x01F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_UI_PlanningMap_Marker(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_PlanningMap_Marker_C">();
	}
	static class UBP_UI_PlanningMap_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_PlanningMap_Marker_C>();
	}
};
static_assert(alignof(UBP_UI_PlanningMap_Marker_C) == 0x000010, "Wrong alignment on UBP_UI_PlanningMap_Marker_C");
static_assert(sizeof(UBP_UI_PlanningMap_Marker_C) == 0x000210, "Wrong size on UBP_UI_PlanningMap_Marker_C");
static_assert(offsetof(UBP_UI_PlanningMap_Marker_C, UberGraphFrame) == 0x000200, "Member 'UBP_UI_PlanningMap_Marker_C::UberGraphFrame' has a wrong offset!");

}

