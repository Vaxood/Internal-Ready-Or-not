#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_AttachmentItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_AttachmentItem.W_AttachmentItem_C
// 0x00C8 (0x0340 - 0x0278)
class UW_AttachmentItem_C final  : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_ButtonPressed;                                // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BottonBorder_Image;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardButton_C*                    Button;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon_Image;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftBorder_Image;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RadioIcon_SizeBox;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightBorder_Image;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedRadioIcon_Image;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBorder_Image;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_ItemClassName;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_ItemName;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnselectedRadioIcon_Image;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ItemName;                                          // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 WeaponAttachmentClass;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*                Owner;                                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3627[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnButtonHovered;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnButtonUnhovered;                                 // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem);
	void OnButtonHovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem);
	void OnButtonUnhovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem);
	void ExecuteUbergraph_W_AttachmentItem(int32 EntryPoint, TArray<EItemCategory>& Temp_byte_Variable, EItemCategory Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue);
	void OnGunCleaned();
	void OnLoadoutLoaded();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	ESlateVisibility Get_ItemClassName_Text_Visibility(ERONBuildConfiguration Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void Select();
	void Deselect();
	void SimulateHover();
	void SimulateUnhover();
	void SimulateClicked();
	void UpdateAttachmentName(const class FString& CallFunc_GetClassDisplayName_ReturnValue);
	void HighlightBorder();
	void UnhighlightBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_AttachmentItem_C">();
	}
	static class UW_AttachmentItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_AttachmentItem_C>();
	}
};
static_assert(alignof(UW_AttachmentItem_C) == 0x000008, "Wrong alignment on UW_AttachmentItem_C");
static_assert(sizeof(UW_AttachmentItem_C) == 0x000340, "Wrong size on UW_AttachmentItem_C");
static_assert(offsetof(UW_AttachmentItem_C, UberGraphFrame) == 0x000278, "Member 'UW_AttachmentItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, Anim_ButtonPressed) == 0x000280, "Member 'UW_AttachmentItem_C::Anim_ButtonPressed' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, BottonBorder_Image) == 0x000288, "Member 'UW_AttachmentItem_C::BottonBorder_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, Button) == 0x000290, "Member 'UW_AttachmentItem_C::Button' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, ItemIcon_Image) == 0x000298, "Member 'UW_AttachmentItem_C::ItemIcon_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, LeftBorder_Image) == 0x0002A0, "Member 'UW_AttachmentItem_C::LeftBorder_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, RadioIcon_SizeBox) == 0x0002A8, "Member 'UW_AttachmentItem_C::RadioIcon_SizeBox' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, RightBorder_Image) == 0x0002B0, "Member 'UW_AttachmentItem_C::RightBorder_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, SelectedRadioIcon_Image) == 0x0002B8, "Member 'UW_AttachmentItem_C::SelectedRadioIcon_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, TopBorder_Image) == 0x0002C0, "Member 'UW_AttachmentItem_C::TopBorder_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, Txt_ItemClassName) == 0x0002C8, "Member 'UW_AttachmentItem_C::Txt_ItemClassName' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, Txt_ItemName) == 0x0002D0, "Member 'UW_AttachmentItem_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, UnselectedRadioIcon_Image) == 0x0002D8, "Member 'UW_AttachmentItem_C::UnselectedRadioIcon_Image' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, ItemName) == 0x0002E0, "Member 'UW_AttachmentItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, WeaponAttachmentClass) == 0x0002F8, "Member 'UW_AttachmentItem_C::WeaponAttachmentClass' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, Owner) == 0x000300, "Member 'UW_AttachmentItem_C::Owner' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, bSelected) == 0x000308, "Member 'UW_AttachmentItem_C::bSelected' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, OnButtonClicked) == 0x000310, "Member 'UW_AttachmentItem_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, OnButtonHovered) == 0x000320, "Member 'UW_AttachmentItem_C::OnButtonHovered' has a wrong offset!");
static_assert(offsetof(UW_AttachmentItem_C, OnButtonUnhovered) == 0x000330, "Member 'UW_AttachmentItem_C::OnButtonUnhovered' has a wrong offset!");

}

