#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass commonButton.CommonButton_C
// 0x0040 (0x0C00 - 0x0BC0)
class UCommonButton_C final  : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonButton;                                      // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0BD0(0x0018)(Edit, BlueprintVisible)
	int32                                         CharacterLimit;                                    // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A82[0x4];                                     // 0x0BEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TruncatedCharacters;                               // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue);
	void OnCurrentTextStyleChanged();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonButton_C">();
	}
	static class UCommonButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButton_C>();
	}
};
static_assert(alignof(UCommonButton_C) == 0x000008, "Wrong alignment on UCommonButton_C");
static_assert(sizeof(UCommonButton_C) == 0x000C00, "Wrong size on UCommonButton_C");
static_assert(offsetof(UCommonButton_C, UberGraphFrame) == 0x000BC0, "Member 'UCommonButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonButton_C, CommonButton) == 0x000BC8, "Member 'UCommonButton_C::CommonButton' has a wrong offset!");
static_assert(offsetof(UCommonButton_C, InText) == 0x000BD0, "Member 'UCommonButton_C::InText' has a wrong offset!");
static_assert(offsetof(UCommonButton_C, CharacterLimit) == 0x000BE8, "Member 'UCommonButton_C::CharacterLimit' has a wrong offset!");
static_assert(offsetof(UCommonButton_C, TruncatedCharacters) == 0x000BF0, "Member 'UCommonButton_C::TruncatedCharacters' has a wrong offset!");

}

