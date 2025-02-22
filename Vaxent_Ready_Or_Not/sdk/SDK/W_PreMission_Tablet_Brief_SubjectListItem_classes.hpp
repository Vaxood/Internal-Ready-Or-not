#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Brief_SubjectListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief_SubjectListItem.W_PreMission_Tablet_Brief_SubjectListItem_C
// 0x01A0 (0x0400 - 0x0260)
class UW_PreMission_Tablet_Brief_SubjectListItem_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonLazyImage*                       CommonLazyImage_146;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Details;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Rtxt_Bio;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Build;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_DOB;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Height;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Race;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Sex;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_SuspectName;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Weight;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCharacterBio                          CharacterBio;                                      // 0x02C0(0x0140)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_W_PreMission_Tablet_Brief_SubjectListItem(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_Brief_SubjectListItem_C">();
	}
	static class UW_PreMission_Tablet_Brief_SubjectListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_Brief_SubjectListItem_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_Brief_SubjectListItem_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_Brief_SubjectListItem_C");
static_assert(sizeof(UW_PreMission_Tablet_Brief_SubjectListItem_C) == 0x000400, "Wrong size on UW_PreMission_Tablet_Brief_SubjectListItem_C");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, UberGraphFrame) == 0x000260, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, CommonLazyImage_146) == 0x000268, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::CommonLazyImage_146' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Details) == 0x000270, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Details' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Rtxt_Bio) == 0x000278, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Rtxt_Bio' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_Build) == 0x000280, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_Build' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_DOB) == 0x000288, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_DOB' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_Height) == 0x000290, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_Height' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_Race) == 0x000298, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_Race' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_Sex) == 0x0002A0, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_Sex' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_SuspectName) == 0x0002A8, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_SuspectName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, Txt_Weight) == 0x0002B0, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::Txt_Weight' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, W_Button) == 0x0002B8, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Brief_SubjectListItem_C, CharacterBio) == 0x0002C0, "Member 'UW_PreMission_Tablet_Brief_SubjectListItem_C::CharacterBio' has a wrong offset!");

}

