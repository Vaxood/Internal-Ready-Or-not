#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadoutItemName

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LoadoutItemName.LoadoutItemName_C
// 0x0000 (0x0150 - 0x0150)
class ULoadoutItemName_C final  : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadoutItemName_C">();
	}
	static class ULoadoutItemName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadoutItemName_C>();
	}
};
static_assert(alignof(ULoadoutItemName_C) == 0x000008, "Wrong alignment on ULoadoutItemName_C");
static_assert(sizeof(ULoadoutItemName_C) == 0x000150, "Wrong size on ULoadoutItemName_C");

}

