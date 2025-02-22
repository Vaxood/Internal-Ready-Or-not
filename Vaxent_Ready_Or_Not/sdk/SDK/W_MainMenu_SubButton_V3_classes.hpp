#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MainMenu_SubButton_V3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C
// 0x00C0 (0x0CF8 - 0x0C38)
class UW_MainMenu_SubButton_V3_C final  : public UMainMenu_BaseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       MenuText;                                          // 0x0C40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         FontStyleDefault;                                  // 0x0C48(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         FontStyleHovered;                                  // 0x0CA0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_MainMenu_SubButton_V3(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetState(bool Hovered, bool Selected, const struct FSlateColor& White_90, const struct FSlateColor& White_40, bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MainMenu_SubButton_V3_C">();
	}
	static class UW_MainMenu_SubButton_V3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MainMenu_SubButton_V3_C>();
	}
};
static_assert(alignof(UW_MainMenu_SubButton_V3_C) == 0x000008, "Wrong alignment on UW_MainMenu_SubButton_V3_C");
static_assert(sizeof(UW_MainMenu_SubButton_V3_C) == 0x000CF8, "Wrong size on UW_MainMenu_SubButton_V3_C");
static_assert(offsetof(UW_MainMenu_SubButton_V3_C, UberGraphFrame) == 0x000C38, "Member 'UW_MainMenu_SubButton_V3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_MainMenu_SubButton_V3_C, MenuText) == 0x000C40, "Member 'UW_MainMenu_SubButton_V3_C::MenuText' has a wrong offset!");
static_assert(offsetof(UW_MainMenu_SubButton_V3_C, FontStyleDefault) == 0x000C48, "Member 'UW_MainMenu_SubButton_V3_C::FontStyleDefault' has a wrong offset!");
static_assert(offsetof(UW_MainMenu_SubButton_V3_C, FontStyleHovered) == 0x000CA0, "Member 'UW_MainMenu_SubButton_V3_C::FontStyleHovered' has a wrong offset!");

}

