#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LadderSnapZone

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LadderSnapZone.BP_LadderSnapZone_C
// 0x0000 (0x0268 - 0x0268)
class ABP_LadderSnapZone_C final  : public ALadderSnapZone
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LadderSnapZone_C">();
	}
	static class ABP_LadderSnapZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LadderSnapZone_C>();
	}
};
static_assert(alignof(ABP_LadderSnapZone_C) == 0x000008, "Wrong alignment on ABP_LadderSnapZone_C");
static_assert(sizeof(ABP_LadderSnapZone_C) == 0x000268, "Wrong size on ABP_LadderSnapZone_C");

}

