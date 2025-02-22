#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DistanceToLastNoise

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_DistanceToLastNoise.AC_DistanceToLastNoise_C
// 0x0010 (0x00E8 - 0x00D8)
class UAC_DistanceToLastNoise_C final  : public UAIActionConsideration
{
public:
	bool                                          bAggressiveOnly;                                   // 0x00D8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bFriendlyOnly;                                     // 0x00D9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_40F9[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Tag;                                               // 0x00DC(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value, const struct FExposedToNoise& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value_1) const;
	void DetermineNoiseScore(const struct FExposedToNoise& Noise, float* Return_Value, float CallFunc_MapRangeClamped_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_DistanceToLastNoise_C">();
	}
	static class UAC_DistanceToLastNoise_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_DistanceToLastNoise_C>();
	}
};
static_assert(alignof(UAC_DistanceToLastNoise_C) == 0x000008, "Wrong alignment on UAC_DistanceToLastNoise_C");
static_assert(sizeof(UAC_DistanceToLastNoise_C) == 0x0000E8, "Wrong size on UAC_DistanceToLastNoise_C");
static_assert(offsetof(UAC_DistanceToLastNoise_C, bAggressiveOnly) == 0x0000D8, "Member 'UAC_DistanceToLastNoise_C::bAggressiveOnly' has a wrong offset!");
static_assert(offsetof(UAC_DistanceToLastNoise_C, bFriendlyOnly) == 0x0000D9, "Member 'UAC_DistanceToLastNoise_C::bFriendlyOnly' has a wrong offset!");
static_assert(offsetof(UAC_DistanceToLastNoise_C, Tag) == 0x0000DC, "Member 'UAC_DistanceToLastNoise_C::Tag' has a wrong offset!");

}

