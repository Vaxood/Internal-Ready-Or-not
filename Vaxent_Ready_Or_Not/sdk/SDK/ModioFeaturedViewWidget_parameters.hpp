#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModioFeaturedViewWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ModioFeaturedViewWidget.ModioFeaturedViewWidget_C.DoCustomNavigation_0
// 0x0010 (0x0010 - 0x0000)
struct ModioFeaturedViewWidget_C_DoCustomNavigation_0 final 
{
public:
	EUINavigation                                 Param_Navigation;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModioFeaturedViewWidget_C_DoCustomNavigation_0) == 0x000008, "Wrong alignment on ModioFeaturedViewWidget_C_DoCustomNavigation_0");
static_assert(sizeof(ModioFeaturedViewWidget_C_DoCustomNavigation_0) == 0x000010, "Wrong size on ModioFeaturedViewWidget_C_DoCustomNavigation_0");
static_assert(offsetof(ModioFeaturedViewWidget_C_DoCustomNavigation_0, Param_Navigation) == 0x000000, "Member 'ModioFeaturedViewWidget_C_DoCustomNavigation_0::Param_Navigation' has a wrong offset!");
static_assert(offsetof(ModioFeaturedViewWidget_C_DoCustomNavigation_0, ReturnValue) == 0x000008, "Member 'ModioFeaturedViewWidget_C_DoCustomNavigation_0::ReturnValue' has a wrong offset!");

}

