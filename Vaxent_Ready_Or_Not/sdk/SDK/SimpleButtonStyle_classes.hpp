#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SimpleButtonStyle.SimpleButtonStyle_C
// 0x0000 (0x0580 - 0x0580)
class USimpleButtonStyle_C final  : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleButtonStyle_C">();
	}
	static class USimpleButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleButtonStyle_C>();
	}
};
static_assert(alignof(USimpleButtonStyle_C) == 0x000008, "Wrong alignment on USimpleButtonStyle_C");
static_assert(sizeof(USimpleButtonStyle_C) == 0x000580, "Wrong size on USimpleButtonStyle_C");

}

