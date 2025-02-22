#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RosterSpecialty

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RosterSpecialty.W_RosterSpecialty_C
// 0x0008 (0x0268 - 0x0260)
class UW_RosterSpecialty_C final  : public UUserWidget
{
public:
	class UCommonRichTextBlock*                   Txb_SpecialtyDesc;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RosterSpecialty_C">();
	}
	static class UW_RosterSpecialty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RosterSpecialty_C>();
	}
};
static_assert(alignof(UW_RosterSpecialty_C) == 0x000008, "Wrong alignment on UW_RosterSpecialty_C");
static_assert(sizeof(UW_RosterSpecialty_C) == 0x000268, "Wrong size on UW_RosterSpecialty_C");
static_assert(offsetof(UW_RosterSpecialty_C, Txb_SpecialtyDesc) == 0x000260, "Member 'UW_RosterSpecialty_C::Txb_SpecialtyDesc' has a wrong offset!");

}

