#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlanningMap_Lines

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_PlanningMap_Lines.BPI_PlanningMap_Lines_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_PlanningMap_Lines_C final  : public IInterface
{
public:
	void ScaleLineWeightByZoom(float CurrentZoom);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_PlanningMap_Lines_C">();
	}
	static class IBPI_PlanningMap_Lines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_PlanningMap_Lines_C>();
	}
};
static_assert(alignof(IBPI_PlanningMap_Lines_C) == 0x000008, "Wrong alignment on IBPI_PlanningMap_Lines_C");
static_assert(sizeof(IBPI_PlanningMap_Lines_C) == 0x000028, "Wrong size on IBPI_PlanningMap_Lines_C");

}

