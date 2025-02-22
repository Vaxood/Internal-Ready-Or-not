#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MSDFSupport

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct MSDFSupport.SVGConversionParams
// 0x0028 (0x0028 - 0x0000)
struct FSVGConversionParams final 
{
public:
	int32                                         SVGPathIndex;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              OutputDimensions;                                  // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoFrame;                                        // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1931[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ExtraMargin;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Scale;                                             // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Translation;                                       // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FieldRangeInPixels;                                // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSVGConversionParams) == 0x000004, "Wrong alignment on FSVGConversionParams");
static_assert(sizeof(FSVGConversionParams) == 0x000028, "Wrong size on FSVGConversionParams");
static_assert(offsetof(FSVGConversionParams, SVGPathIndex) == 0x000000, "Member 'FSVGConversionParams::SVGPathIndex' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, OutputDimensions) == 0x000004, "Member 'FSVGConversionParams::OutputDimensions' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, bAutoFrame) == 0x00000C, "Member 'FSVGConversionParams::bAutoFrame' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, ExtraMargin) == 0x000010, "Member 'FSVGConversionParams::ExtraMargin' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, Scale) == 0x000014, "Member 'FSVGConversionParams::Scale' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, Translation) == 0x00001C, "Member 'FSVGConversionParams::Translation' has a wrong offset!");
static_assert(offsetof(FSVGConversionParams, FieldRangeInPixels) == 0x000024, "Member 'FSVGConversionParams::FieldRangeInPixels' has a wrong offset!");

}

