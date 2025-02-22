#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_AK103

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Primary_AK103.Primary_AK103_C
// 0x0010 (0x1440 - 0x1430)
class APrimary_AK103_C final  : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Primary_AK103(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Primary_AK103_C">();
	}
	static class APrimary_AK103_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrimary_AK103_C>();
	}
};
static_assert(alignof(APrimary_AK103_C) == 0x000010, "Wrong alignment on APrimary_AK103_C");
static_assert(sizeof(APrimary_AK103_C) == 0x001440, "Wrong size on APrimary_AK103_C");
static_assert(offsetof(APrimary_AK103_C, UberGraphFrame) == 0x001430, "Member 'APrimary_AK103_C::UberGraphFrame' has a wrong offset!");

}

