#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_EntryPoint_Selection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C
// 0x00C8 (0x0328 - 0x0260)
class UW_PreMission_Tablet_EntryPoint_Selection_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimShowInfo;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Selected;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_EntryPoint;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_FloorLocation;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         InfoFadeDelay;                                     // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InfoVisible;                                       // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3204[0x3];                                     // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEntryPoint                            PointData;                                         // 0x0298(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CurrentMissionURL;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*            W_Pre_Mission_Planning_Map;                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsGamepad, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void Construct();
	void ChangePage(class FName PageName);
	void ShowPointInfo(float Delay);
	void SetInputMode(bool IsGamepad);
	void HidePointInfo();
	void UpdatePointInfo(const struct FEntryPoint& EntryPointData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_EntryPoint_Selection_C">();
	}
	static class UW_PreMission_Tablet_EntryPoint_Selection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_EntryPoint_Selection_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_EntryPoint_Selection_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_EntryPoint_Selection_C");
static_assert(sizeof(UW_PreMission_Tablet_EntryPoint_Selection_C) == 0x000328, "Wrong size on UW_PreMission_Tablet_EntryPoint_Selection_C");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, UberGraphFrame) == 0x000260, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, AnimReveal) == 0x000268, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, AnimShowInfo) == 0x000270, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::AnimShowInfo' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, Lbl_Selected) == 0x000278, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::Lbl_Selected' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, Txt_EntryPoint) == 0x000280, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::Txt_EntryPoint' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, Txt_FloorLocation) == 0x000288, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::Txt_FloorLocation' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, InfoFadeDelay) == 0x000290, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::InfoFadeDelay' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, InfoVisible) == 0x000294, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::InfoVisible' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, PointData) == 0x000298, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::PointData' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, CurrentMissionURL) == 0x000310, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::CurrentMissionURL' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_EntryPoint_Selection_C, W_Pre_Mission_Planning_Map) == 0x000320, "Member 'UW_PreMission_Tablet_EntryPoint_Selection_C::W_Pre_Mission_Planning_Map' has a wrong offset!");

}

