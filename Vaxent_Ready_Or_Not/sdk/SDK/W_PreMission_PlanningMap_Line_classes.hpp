#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_PlanningMap_Line

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C
// 0x0050 (0x02B0 - 0x0260)
class UW_PreMission_PlanningMap_Line_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_35;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsDashed;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3215[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              LineMaterial;                                      // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Length;                                            // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Angle;                                             // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Thickness;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         StartOffset;                                       // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         EndOffset;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_PreMission_PlanningMap_Line(int32 EntryPoint, float K2Node_Event_CurrentZoom, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void ScaleLineWeightByZoom(float CurrentZoom);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetAngle(float Param_Angle);
	void SetLength(float Param_Length);
	void SetOffset(float Param_StartOffset, float Param_EndOffset, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue);
	void ScaleThickness(float Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_PlanningMap_Line_C">();
	}
	static class UW_PreMission_PlanningMap_Line_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_PlanningMap_Line_C>();
	}
};
static_assert(alignof(UW_PreMission_PlanningMap_Line_C) == 0x000008, "Wrong alignment on UW_PreMission_PlanningMap_Line_C");
static_assert(sizeof(UW_PreMission_PlanningMap_Line_C) == 0x0002B0, "Wrong size on UW_PreMission_PlanningMap_Line_C");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, UberGraphFrame) == 0x000260, "Member 'UW_PreMission_PlanningMap_Line_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Image_35) == 0x000268, "Member 'UW_PreMission_PlanningMap_Line_C::Image_35' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Size) == 0x000270, "Member 'UW_PreMission_PlanningMap_Line_C::Size' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Color) == 0x000278, "Member 'UW_PreMission_PlanningMap_Line_C::Color' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, IsDashed) == 0x000288, "Member 'UW_PreMission_PlanningMap_Line_C::IsDashed' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, LineMaterial) == 0x000290, "Member 'UW_PreMission_PlanningMap_Line_C::LineMaterial' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Length) == 0x000298, "Member 'UW_PreMission_PlanningMap_Line_C::Length' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Angle) == 0x00029C, "Member 'UW_PreMission_PlanningMap_Line_C::Angle' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, Thickness) == 0x0002A0, "Member 'UW_PreMission_PlanningMap_Line_C::Thickness' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, StartOffset) == 0x0002A4, "Member 'UW_PreMission_PlanningMap_Line_C::StartOffset' has a wrong offset!");
static_assert(offsetof(UW_PreMission_PlanningMap_Line_C, EndOffset) == 0x0002A8, "Member 'UW_PreMission_PlanningMap_Line_C::EndOffset' has a wrong offset!");

}

