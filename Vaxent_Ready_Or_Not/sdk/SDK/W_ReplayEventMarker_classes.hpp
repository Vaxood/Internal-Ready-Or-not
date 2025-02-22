#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ReplayEventMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ReplayEventMarker.W_ReplayEventMarker_C
// 0x0048 (0x02A8 - 0x0260)
class UW_ReplayEventMarker_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BarPercentage;                                     // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_31B1[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_ReplayEventMarkerTag_C*              ToolTip;                                           // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReplayEvent                           ReplayEvent;                                       // 0x0280(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_ReplayEventMarker(int32 EntryPoint, class UW_ReplayEventMarkerTag_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	class UWidget* GetToolTipWidget_0(class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ReplayEventMarker_C">();
	}
	static class UW_ReplayEventMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ReplayEventMarker_C>();
	}
};
static_assert(alignof(UW_ReplayEventMarker_C) == 0x000008, "Wrong alignment on UW_ReplayEventMarker_C");
static_assert(sizeof(UW_ReplayEventMarker_C) == 0x0002A8, "Wrong size on UW_ReplayEventMarker_C");
static_assert(offsetof(UW_ReplayEventMarker_C, UberGraphFrame) == 0x000260, "Member 'UW_ReplayEventMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ReplayEventMarker_C, Image_0) == 0x000268, "Member 'UW_ReplayEventMarker_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_ReplayEventMarker_C, BarPercentage) == 0x000270, "Member 'UW_ReplayEventMarker_C::BarPercentage' has a wrong offset!");
static_assert(offsetof(UW_ReplayEventMarker_C, ToolTip) == 0x000278, "Member 'UW_ReplayEventMarker_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UW_ReplayEventMarker_C, ReplayEvent) == 0x000280, "Member 'UW_ReplayEventMarker_C::ReplayEvent' has a wrong offset!");

}

