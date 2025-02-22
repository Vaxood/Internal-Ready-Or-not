#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loadout_Preset_Preview_SubItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loadout_Preset_Preview_SubItem.W_Loadout_Preset_Preview_SubItem_C
// 0x0048 (0x02A8 - 0x0260)
class UW_Loadout_Preset_Preview_SubItem_C final  : public UUserWidget
{
public:
	class UCommonBorder*                          SubItem;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Name;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Subtext;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Subtext;                                           // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loadout_Preset_Preview_SubItem_C">();
	}
	static class UW_Loadout_Preset_Preview_SubItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loadout_Preset_Preview_SubItem_C>();
	}
};
static_assert(alignof(UW_Loadout_Preset_Preview_SubItem_C) == 0x000008, "Wrong alignment on UW_Loadout_Preset_Preview_SubItem_C");
static_assert(sizeof(UW_Loadout_Preset_Preview_SubItem_C) == 0x0002A8, "Wrong size on UW_Loadout_Preset_Preview_SubItem_C");
static_assert(offsetof(UW_Loadout_Preset_Preview_SubItem_C, SubItem) == 0x000260, "Member 'UW_Loadout_Preset_Preview_SubItem_C::SubItem' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Preset_Preview_SubItem_C, Txt_Name) == 0x000268, "Member 'UW_Loadout_Preset_Preview_SubItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Preset_Preview_SubItem_C, Txt_Subtext) == 0x000270, "Member 'UW_Loadout_Preset_Preview_SubItem_C::Txt_Subtext' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Preset_Preview_SubItem_C, Label) == 0x000278, "Member 'UW_Loadout_Preset_Preview_SubItem_C::Label' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Preset_Preview_SubItem_C, Subtext) == 0x000290, "Member 'UW_Loadout_Preset_Preview_SubItem_C::Subtext' has a wrong offset!");

}

