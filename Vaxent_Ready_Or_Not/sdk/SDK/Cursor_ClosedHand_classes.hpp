#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cursor_ClosedHand

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cursor_ClosedHand.Cursor_ClosedHand_C
// 0x0008 (0x0268 - 0x0260)
class UCursor_ClosedHand_C final  : public UCursorWidget
{
public:
	class UImage*                                 Mouse;                                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cursor_ClosedHand_C">();
	}
	static class UCursor_ClosedHand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCursor_ClosedHand_C>();
	}
};
static_assert(alignof(UCursor_ClosedHand_C) == 0x000008, "Wrong alignment on UCursor_ClosedHand_C");
static_assert(sizeof(UCursor_ClosedHand_C) == 0x000268, "Wrong size on UCursor_ClosedHand_C");
static_assert(offsetof(UCursor_ClosedHand_C, Mouse) == 0x000260, "Member 'UCursor_ClosedHand_C::Mouse' has a wrong offset!");

}

