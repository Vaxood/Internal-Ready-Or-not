#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlanningMap_BreachPoint_Info_EquipmentEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C
// 0x0068 (0x02C8 - 0x0260)
class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_icon;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDeployableData                   DeployableData;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FLinearColor                           NormalColor;                                       // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredColor;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PressedColor;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature(const struct FLevelDeployableData& Param_DeployableData);
	void ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void OnLoaded_0AA3E177468D68E03944E59A03A2CFB4(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlanningMap_BreachPoint_Info_EquipmentEntry_C">();
	}
	static class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C>();
	}
};
static_assert(alignof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C) == 0x000008, "Wrong alignment on UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C");
static_assert(sizeof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C) == 0x0002C8, "Wrong size on UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, UberGraphFrame) == 0x000260, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, Img_icon) == 0x000268, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::Img_icon' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, W_Button) == 0x000270, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, DeployableData) == 0x000278, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::DeployableData' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, NormalColor) == 0x000288, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::NormalColor' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, HoveredColor) == 0x000298, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::HoveredColor' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, PressedColor) == 0x0002A8, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::PressedColor' has a wrong offset!");
static_assert(offsetof(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C, OnClicked) == 0x0002B8, "Member 'UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::OnClicked' has a wrong offset!");

}

