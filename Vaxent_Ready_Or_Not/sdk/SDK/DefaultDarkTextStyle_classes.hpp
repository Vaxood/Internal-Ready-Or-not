#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultDarkTextStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultDarkTextStyle.DefaultDarkTextStyle_C
// 0x0000 (0x0150 - 0x0150)
class UDefaultDarkTextStyle_C final  : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultDarkTextStyle_C">();
	}
	static class UDefaultDarkTextStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultDarkTextStyle_C>();
	}
};
static_assert(alignof(UDefaultDarkTextStyle_C) == 0x000008, "Wrong alignment on UDefaultDarkTextStyle_C");
static_assert(sizeof(UDefaultDarkTextStyle_C) == 0x000150, "Wrong size on UDefaultDarkTextStyle_C");

}

