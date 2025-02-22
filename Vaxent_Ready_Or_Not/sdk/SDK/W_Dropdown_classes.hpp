#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Dropdown

#include "Basic.hpp"

#include "ST_DropdownOptions_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_Style_Buttons_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass w_Dropdown.w_Dropdown_C
// 0x01E8 (0x0448 - 0x0260)
class UW_Dropdown_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Dropdown;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                           DropdownItemsMenu;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            DropdownMenuAnchor;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Label;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Label;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Placeholder;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Selection;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   LabelText;                                         // 0x02B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   PlaceholderText;                                   // 0x02C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class FString, class FText>              Options;                                           // 0x02E0(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 SelectedOption;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOptionSelected;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_Style_Buttons                               OptionButtonStyleOld;                              // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A84[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FST_DropdownOptions> FooterOptions;                                     // 0x0358(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn)
	E_Style_Buttons                               FooterOptionButtonStyle;                           // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A85[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFooterOptionSelected;                            // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Hidden;                                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A86[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOptionHovered;                                   // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOptionUnhovered;                                 // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMenuClosed;                                      // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         MaxDropdownHeight;                                 // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharacterLimit;                                    // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OptionButtonStyle;                                 // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFooterOptionHovered;                             // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFooterOptionUnhovered;                           // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
	void OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void OnOptionUnhovered__DelegateSignature();
	void OnFooterOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnFooterOptionUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UW_Dropdown_C* Dropdown);
	void OnUnhovered__DelegateSignature();
	void ExecuteUbergraph_w_Dropdown(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const class FString& K2Node_CustomEvent_OptionID_3, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_CustomEvent_OptionID_2, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FName K2Node_Event_PageName, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OptionID_1, bool K2Node_Event_IsGamepad, const class FString& K2Node_CustomEvent_OptionID, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void FooterOptionUnhovered();
	void FooterOptionHovered(const class FString& OptionID);
	void SetInputMode(bool IsGamepad);
	void OptionUnhovered();
	void BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature();
	void Clickaway();
	void OptionHovered(const class FString& OptionID);
	void Collapse();
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void FooterOptionSelected(const class FString& OptionID);
	void OptionSelected(const class FString& OptionID);
	void BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	class UUserWidget* On_DropdownMenuAnchor_GetUserMenuContent_0(TDelegate<void(const class FString& OptionID)> K2Node_CreateDelegate_OutputDelegate, class UW_DropdownMenu_C* CallFunc_Create_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UW_Button_C* DesiredFocus)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(const class FString& OptionID)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(const class FString& OptionID)> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void(const class FString& OptionID)> K2Node_CreateDelegate_OutputDelegate_7);
	void AddOption(const class FString& OptionID, class FText OptionText);
	void SetOptions(const TMap<class FString, class FText>& Param_Options);
	void SetSelection(const class FString& OptionID, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateLabelText(const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue);
	void SetLabelText(class FText Param_LabelText);
	void CloseMenu(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsOpen_ReturnValue);
	void DisableInteraction(bool Disable);
	void ClearSelection();
	void SetSelectionByIndex(int32 Param_Index, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item);
	void OnDropdown_Menu_Desired_Focus_Set(class UW_Button_C* DesiredFocus);
	void ClearOptions();
	void ClearFooterOptions();
	void SetFooterOptions(const TMap<class FString, struct FST_DropdownOptions>& Param_FooterOptions);
	void AddFooterOption(class FString& ID, struct FST_DropdownOptions& OptionData);
	void RemoveFooterOption(class FString& ID, bool CallFunc_Map_Remove_ReturnValue);
	void OpenMenu(bool CallFunc_IsOpen_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void DisableMenuInputConsume();
	void EnableMenuInputConsume();
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"w_Dropdown_C">();
	}
	static class UW_Dropdown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Dropdown_C>();
	}
};
static_assert(alignof(UW_Dropdown_C) == 0x000008, "Wrong alignment on UW_Dropdown_C");
static_assert(sizeof(UW_Dropdown_C) == 0x000448, "Wrong size on UW_Dropdown_C");
static_assert(offsetof(UW_Dropdown_C, UberGraphFrame) == 0x000260, "Member 'UW_Dropdown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, AnimReveal) == 0x000268, "Member 'UW_Dropdown_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, btn_Dropdown) == 0x000270, "Member 'UW_Dropdown_C::btn_Dropdown' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, DropdownItemsMenu) == 0x000278, "Member 'UW_Dropdown_C::DropdownItemsMenu' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, DropdownMenuAnchor) == 0x000280, "Member 'UW_Dropdown_C::DropdownMenuAnchor' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Img_Arrow) == 0x000288, "Member 'UW_Dropdown_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Label) == 0x000290, "Member 'UW_Dropdown_C::Label' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Txt_Label) == 0x000298, "Member 'UW_Dropdown_C::Txt_Label' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Txt_Placeholder) == 0x0002A0, "Member 'UW_Dropdown_C::Txt_Placeholder' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Txt_Selection) == 0x0002A8, "Member 'UW_Dropdown_C::Txt_Selection' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, LabelText) == 0x0002B0, "Member 'UW_Dropdown_C::LabelText' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, PlaceholderText) == 0x0002C8, "Member 'UW_Dropdown_C::PlaceholderText' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Options) == 0x0002E0, "Member 'UW_Dropdown_C::Options' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, SelectedOption) == 0x000330, "Member 'UW_Dropdown_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnOptionSelected) == 0x000340, "Member 'UW_Dropdown_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OptionButtonStyleOld) == 0x000350, "Member 'UW_Dropdown_C::OptionButtonStyleOld' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, FooterOptions) == 0x000358, "Member 'UW_Dropdown_C::FooterOptions' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, FooterOptionButtonStyle) == 0x0003A8, "Member 'UW_Dropdown_C::FooterOptionButtonStyle' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnFooterOptionSelected) == 0x0003B0, "Member 'UW_Dropdown_C::OnFooterOptionSelected' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, Hidden) == 0x0003C0, "Member 'UW_Dropdown_C::Hidden' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnOptionHovered) == 0x0003C8, "Member 'UW_Dropdown_C::OnOptionHovered' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnOptionUnhovered) == 0x0003D8, "Member 'UW_Dropdown_C::OnOptionUnhovered' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnMenuClosed) == 0x0003E8, "Member 'UW_Dropdown_C::OnMenuClosed' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, MaxDropdownHeight) == 0x0003F8, "Member 'UW_Dropdown_C::MaxDropdownHeight' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, CharacterLimit) == 0x0003FC, "Member 'UW_Dropdown_C::CharacterLimit' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OptionButtonStyle) == 0x000400, "Member 'UW_Dropdown_C::OptionButtonStyle' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnFooterOptionHovered) == 0x000408, "Member 'UW_Dropdown_C::OnFooterOptionHovered' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnFooterOptionUnhovered) == 0x000418, "Member 'UW_Dropdown_C::OnFooterOptionUnhovered' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnHovered) == 0x000428, "Member 'UW_Dropdown_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UW_Dropdown_C, OnUnhovered) == 0x000438, "Member 'UW_Dropdown_C::OnUnhovered' has a wrong offset!");

}

