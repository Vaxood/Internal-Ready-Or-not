#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubnavButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SubnavButtonStyle.SubnavButtonStyle_C
// 0x0000 (0x0580 - 0x0580)
class USubnavButtonStyle_C final  : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubnavButtonStyle_C">();
	}
	static class USubnavButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubnavButtonStyle_C>();
	}
};
static_assert(alignof(USubnavButtonStyle_C) == 0x000008, "Wrong alignment on USubnavButtonStyle_C");
static_assert(sizeof(USubnavButtonStyle_C) == 0x000580, "Wrong size on USubnavButtonStyle_C");

}

