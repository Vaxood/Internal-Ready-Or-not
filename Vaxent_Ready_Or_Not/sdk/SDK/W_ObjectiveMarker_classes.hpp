#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ObjectiveMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ObjectiveMarker.W_ObjectiveMarker_C
// 0x0018 (0x02E0 - 0x02C8)
class UW_ObjectiveMarker_C final  : public UObjectiveMarkerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_OnMarkerSet;                                  // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             MarkerName_Text_1;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_ObjectiveMarker(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMarkerVisibilityEnabled();
	void CustomEvent_0();
	void OnMarkerVisibilityDisabled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ObjectiveMarker_C">();
	}
	static class UW_ObjectiveMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ObjectiveMarker_C>();
	}
};
static_assert(alignof(UW_ObjectiveMarker_C) == 0x000008, "Wrong alignment on UW_ObjectiveMarker_C");
static_assert(sizeof(UW_ObjectiveMarker_C) == 0x0002E0, "Wrong size on UW_ObjectiveMarker_C");
static_assert(offsetof(UW_ObjectiveMarker_C, UberGraphFrame) == 0x0002C8, "Member 'UW_ObjectiveMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ObjectiveMarker_C, Anim_OnMarkerSet) == 0x0002D0, "Member 'UW_ObjectiveMarker_C::Anim_OnMarkerSet' has a wrong offset!");
static_assert(offsetof(UW_ObjectiveMarker_C, MarkerName_Text_1) == 0x0002D8, "Member 'UW_ObjectiveMarker_C::MarkerName_Text_1' has a wrong offset!");

}

