#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModioProfileButtonWidget

#include "Basic.hpp"

#include "ModioUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ModioProfileButtonWidget.ModioProfileButtonWidget_C
// 0x0000 (0x0340 - 0x0340)
class UModioProfileButtonWidget_C final  : public UModioUserProfileButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ModioProfileButtonWidget_C">();
	}
	static class UModioProfileButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioProfileButtonWidget_C>();
	}
};
static_assert(alignof(UModioProfileButtonWidget_C) == 0x000008, "Wrong alignment on UModioProfileButtonWidget_C");
static_assert(sizeof(UModioProfileButtonWidget_C) == 0x000340, "Wrong size on UModioProfileButtonWidget_C");

}

