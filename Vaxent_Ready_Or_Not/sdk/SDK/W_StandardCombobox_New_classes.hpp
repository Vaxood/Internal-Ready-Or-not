#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_StandardCombobox_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_StandardCombobox_New.W_StandardCombobox_New_C
// 0x0170 (0x03D0 - 0x0260)
class UW_StandardCombobox_New_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackGroundImg;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            ComboboxAnchor;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ComboboxButton;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ComboButton_Dn;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ComboButton_Hi;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DropdownArrow;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionTextWidget;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         OptionsAsStrings;                                  // 0x02A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FText>                           OptionsAsText;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         DefaultOptionSelected;                             // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_35E9[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOptionMenuOpened;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOptionMenuClosed;                                // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNewOptionSelected;                               // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTextBlock*                             DescriptionWidget;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DescriptionText;                                   // 0x0320(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Opened;                                            // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Hovered;                                           // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Pressed;                                           // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35EA[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           OptionDescriptions;                                // 0x0360(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         CurrentlySelectedOption;                           // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35EB[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             OpenedSound;                                       // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                             ClosedSound;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                             OptionSelectedSound;                               // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                             ComboboxHoveredSound;                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           ImageBackgroundColor;                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           ItemBackgroundColor;                               // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           HoveredItemBackgroundColor;                        // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         FontSize;                                          // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnOptionMenuOpened__DelegateSignature();
	void OnOptionMenuClosed__DelegateSignature();
	void OnNewOptionSelected__DelegateSignature(int32 NewOption);
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnReleased__DelegateSignature();
	void ExecuteUbergraph_W_StandardCombobox_New(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UFMODEvent* K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Reconstruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class UWidget* GetAnchorMenuContent(class UW_Combobox_Menu_C* CallFunc_Create_ReturnValue);
	void ReceivedOptionClickedSignal(const class FString& OptionAsString, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void UpdateOptionText(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Array_Get_Item);
	void SetOption(int32 NewOption);
	void SetStringOption(const class FString& Option, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void AddOption(const class FString& OptionString, class FText OptionName, class FText OptionDescription, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void InsertOption(int32 Param_Index, const class FString& OptionString, class FText OptionName, class FText OptionDescription);
	void DeleteOptionIndex(int32 Param_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DeleteOptionString(const class FString& StringValue, int32 CallFunc_Array_Find_ReturnValue);
	void ClearOptions();
	void GetCurrentOptionAsString(class FString* OptionAsString, const class FString& CallFunc_Array_Get_Item);
	struct FLinearColor Get_BackGroundImg_ColorAndOpacity_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_StandardCombobox_New_C">();
	}
	static class UW_StandardCombobox_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_StandardCombobox_New_C>();
	}
};
static_assert(alignof(UW_StandardCombobox_New_C) == 0x000008, "Wrong alignment on UW_StandardCombobox_New_C");
static_assert(sizeof(UW_StandardCombobox_New_C) == 0x0003D0, "Wrong size on UW_StandardCombobox_New_C");
static_assert(offsetof(UW_StandardCombobox_New_C, UberGraphFrame) == 0x000260, "Member 'UW_StandardCombobox_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, BackGroundImg) == 0x000268, "Member 'UW_StandardCombobox_New_C::BackGroundImg' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ComboboxAnchor) == 0x000270, "Member 'UW_StandardCombobox_New_C::ComboboxAnchor' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ComboboxButton) == 0x000278, "Member 'UW_StandardCombobox_New_C::ComboboxButton' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ComboButton_Dn) == 0x000280, "Member 'UW_StandardCombobox_New_C::ComboButton_Dn' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ComboButton_Hi) == 0x000288, "Member 'UW_StandardCombobox_New_C::ComboButton_Hi' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, DropdownArrow) == 0x000290, "Member 'UW_StandardCombobox_New_C::DropdownArrow' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, SelectedOptionTextWidget) == 0x000298, "Member 'UW_StandardCombobox_New_C::SelectedOptionTextWidget' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OptionsAsStrings) == 0x0002A0, "Member 'UW_StandardCombobox_New_C::OptionsAsStrings' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OptionsAsText) == 0x0002B0, "Member 'UW_StandardCombobox_New_C::OptionsAsText' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, DefaultOptionSelected) == 0x0002C0, "Member 'UW_StandardCombobox_New_C::DefaultOptionSelected' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnOptionMenuOpened) == 0x0002C8, "Member 'UW_StandardCombobox_New_C::OnOptionMenuOpened' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnOptionMenuClosed) == 0x0002D8, "Member 'UW_StandardCombobox_New_C::OnOptionMenuClosed' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnNewOptionSelected) == 0x0002E8, "Member 'UW_StandardCombobox_New_C::OnNewOptionSelected' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnHovered) == 0x0002F8, "Member 'UW_StandardCombobox_New_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnUnhovered) == 0x000308, "Member 'UW_StandardCombobox_New_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, DescriptionWidget) == 0x000318, "Member 'UW_StandardCombobox_New_C::DescriptionWidget' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, DescriptionText) == 0x000320, "Member 'UW_StandardCombobox_New_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnPressed) == 0x000338, "Member 'UW_StandardCombobox_New_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OnReleased) == 0x000348, "Member 'UW_StandardCombobox_New_C::OnReleased' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, Opened) == 0x000358, "Member 'UW_StandardCombobox_New_C::Opened' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, Hovered) == 0x000359, "Member 'UW_StandardCombobox_New_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, Pressed) == 0x00035A, "Member 'UW_StandardCombobox_New_C::Pressed' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OptionDescriptions) == 0x000360, "Member 'UW_StandardCombobox_New_C::OptionDescriptions' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, CurrentlySelectedOption) == 0x000370, "Member 'UW_StandardCombobox_New_C::CurrentlySelectedOption' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OpenedSound) == 0x000378, "Member 'UW_StandardCombobox_New_C::OpenedSound' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ClosedSound) == 0x000380, "Member 'UW_StandardCombobox_New_C::ClosedSound' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, OptionSelectedSound) == 0x000388, "Member 'UW_StandardCombobox_New_C::OptionSelectedSound' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ComboboxHoveredSound) == 0x000390, "Member 'UW_StandardCombobox_New_C::ComboboxHoveredSound' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ImageBackgroundColor) == 0x000398, "Member 'UW_StandardCombobox_New_C::ImageBackgroundColor' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, ItemBackgroundColor) == 0x0003A8, "Member 'UW_StandardCombobox_New_C::ItemBackgroundColor' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, HoveredItemBackgroundColor) == 0x0003B8, "Member 'UW_StandardCombobox_New_C::HoveredItemBackgroundColor' has a wrong offset!");
static_assert(offsetof(UW_StandardCombobox_New_C, FontSize) == 0x0003C8, "Member 'UW_StandardCombobox_New_C::FontSize' has a wrong offset!");

}

