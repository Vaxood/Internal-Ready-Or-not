#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadoutInformationElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadoutInformationElement.W_LoadoutInformationElement_C
// 0x0168 (0x03F0 - 0x0288)
class UW_LoadoutInformationElement_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_W_LoadoutInformationElement_C;                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Type;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   AttachmentName;                                    // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AttachmentType;                                    // 0x02C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   EffectsName;                                       // 0x02D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   EffectsType;                                       // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           BorderColorAttachment;                             // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BorderColorEffects;                                // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            TypeTextColorAttachment;                           // 0x0328(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TypeTextColorEffects;                              // 0x0350(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TypeTextColorEffectsPos;                           // 0x0378(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TypeTextColorEffectsNeg;                           // 0x03A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsEffect;                                         // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3039[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BorderColorEffectsPos;                             // 0x03CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BorderColorEffectsNeg;                             // 0x03DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_LoadoutInformationElement(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadoutInformationElement_C">();
	}
	static class UW_LoadoutInformationElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadoutInformationElement_C>();
	}
};
static_assert(alignof(UW_LoadoutInformationElement_C) == 0x000008, "Wrong alignment on UW_LoadoutInformationElement_C");
static_assert(sizeof(UW_LoadoutInformationElement_C) == 0x0003F0, "Wrong size on UW_LoadoutInformationElement_C");
static_assert(offsetof(UW_LoadoutInformationElement_C, UberGraphFrame) == 0x000288, "Member 'UW_LoadoutInformationElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, Border) == 0x000290, "Member 'UW_LoadoutInformationElement_C::Border' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, Name_W_LoadoutInformationElement_C) == 0x000298, "Member 'UW_LoadoutInformationElement_C::Name_W_LoadoutInformationElement_C' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, Type) == 0x0002A0, "Member 'UW_LoadoutInformationElement_C::Type' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, AttachmentName) == 0x0002A8, "Member 'UW_LoadoutInformationElement_C::AttachmentName' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, AttachmentType) == 0x0002C0, "Member 'UW_LoadoutInformationElement_C::AttachmentType' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, EffectsName) == 0x0002D8, "Member 'UW_LoadoutInformationElement_C::EffectsName' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, EffectsType) == 0x0002F0, "Member 'UW_LoadoutInformationElement_C::EffectsType' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, BorderColorAttachment) == 0x000308, "Member 'UW_LoadoutInformationElement_C::BorderColorAttachment' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, BorderColorEffects) == 0x000318, "Member 'UW_LoadoutInformationElement_C::BorderColorEffects' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, TypeTextColorAttachment) == 0x000328, "Member 'UW_LoadoutInformationElement_C::TypeTextColorAttachment' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, TypeTextColorEffects) == 0x000350, "Member 'UW_LoadoutInformationElement_C::TypeTextColorEffects' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, TypeTextColorEffectsPos) == 0x000378, "Member 'UW_LoadoutInformationElement_C::TypeTextColorEffectsPos' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, TypeTextColorEffectsNeg) == 0x0003A0, "Member 'UW_LoadoutInformationElement_C::TypeTextColorEffectsNeg' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, bIsEffect) == 0x0003C8, "Member 'UW_LoadoutInformationElement_C::bIsEffect' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, BorderColorEffectsPos) == 0x0003CC, "Member 'UW_LoadoutInformationElement_C::BorderColorEffectsPos' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationElement_C, BorderColorEffectsNeg) == 0x0003DC, "Member 'UW_LoadoutInformationElement_C::BorderColorEffectsNeg' has a wrong offset!");

}

