#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loadout_InformationTable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loadout_InformationTable.W_Loadout_InformationTable_C
// 0x04C8 (0x0728 - 0x0260)
class UW_Loadout_InformationTable_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimRefresh;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHide;                                          // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Div_Formation_Bot_1;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_icon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemInfoPanelWidget;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            ItemListAnchor;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Icon;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectedMissionPanel_1;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Icon;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Category;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Class;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Description;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_ItemName;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Overview_C*                  W_Loadout_Overview;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnModifyWeaponButtonClicked;                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Hidden;                                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DB3[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ItemName;                                          // 0x0300(0x0018)(Edit, BlueprintVisible)
	class FText                                   ItemCategory;                                      // 0x0318(0x0018)(Edit, BlueprintVisible)
	class FText                                   ItemDescription;                                   // 0x0330(0x0018)(Edit, BlueprintVisible)
	class UClass*                                 ItemClass;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EItemCategory                                 LoadoutSlot;                                       // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3DB4[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   WeaponClassText;                                   // 0x0358(0x0018)(Edit, BlueprintVisible)
	EItemClass                                    WeaponClass;                                       // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DB5[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInfoPanelRemoved;                                // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          InfoHidden;                                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DB6[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCancelRefresh;                                   // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSavedLoadout                          ActiveLoadout;                                     // 0x03A0(0x0188)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UW_LoadoutInfo_AttachmentList_C*        AttachmentList;                                    // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Restricted;                                        // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DB7[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInfoPanelAttachmentClicked;                      // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   AmmoType;                                          // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             ItemIcon;                                          // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                        ArmourMaterial;                                    // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Attachment;                                        // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponAttachmentType                         AttachmentType;                                    // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DB8[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ScopeReticle;                                      // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_EffectsList_C*           EffectsList;                                       // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInfoPanelRemoveAttachmentClicked;                // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLoadoutPreset                         Loadout_Preset;                                    // 0x0590(0x0190)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_Loadout_Overview_C*                  LoadoutPresetPreview;                              // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify);
	void OnInfoPanelRemoved__DelegateSignature();
	void OnCancelRefresh__DelegateSignature();
	void OnInfoPanelAttachmentClicked__DelegateSignature(EWeaponAttachmentType Param_Slot, class UClass* AttachmentData);
	void OnInfoPanelRemoveAttachmentClicked__DelegateSignature(EWeaponAttachmentType Param_Slot);
	void ExecuteUbergraph_W_Loadout_InformationTable(int32 EntryPoint, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout_1, class UClass* K2Node_CustomEvent_ItemClass, EItemCategory K2Node_CustomEvent_LoadoutSlot, bool K2Node_CustomEvent_Restricted, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UClass* K2Node_CustomEvent_ItemToModify, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FName K2Node_CustomEvent_AmmoType, class UClass* K2Node_CustomEvent_WeaponData, const TMap<EItemCategory, class UClass*>& K2Node_Event_ItemCategory, class UArmourMaterial* K2Node_CustomEvent_ArmourMaterial, class UClass* K2Node_CustomEvent_Attachment, class UClass* K2Node_CustomEvent_AttachingWeapon, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem, const struct FLoadoutPreset& K2Node_CustomEvent_LoadoutPreset);
	void RefreshPanelLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset);
	void RemoveAttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
	void RefreshPanelAttachment(class UClass* Param_Attachment, class UClass* AttachingWeapon);
	void RefreshPanelArmourMaterial(class UArmourMaterial* Param_ArmourMaterial);
	void RefreshPanelAmmoInfo(class FName Param_AmmoType, class UClass* WeaponData);
	void AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void UpdateActiveLoadout(const struct FSavedLoadout& Param_ActiveLoadout);
	void InitializePanel(const struct FSavedLoadout& Param_ActiveLoadout);
	void ModifyWeaponClicked(class UClass* ItemToModify);
	void RefreshPanelItemInfo(const struct FSavedLoadout& Param_ActiveLoadout, class UClass* Param_ItemClass, EItemCategory Param_LoadoutSlot, bool Param_Restricted);
	void Construct();
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& Param_ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateItemInfo(bool CallFunc_IsValidClass_ReturnValue);
	void GetWeaponClassText(class FText* Param_WeaponClass, EItemClass Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText K2Node_Select_Default);
	void UpdateAmmoInfo(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAmmoCategoryText_Text, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateArmourMaterialInfo(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateAttachmentInfo(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAttachmentSlotText_SlotText, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, class UW_LoadoutInfo_EffectsList_C* CallFunc_Create_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Play_Refresh_Anim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void QuickHide();
	void SetAttachmentEffects(TArray<struct FST_ItemEffects>* Effects, const TArray<struct FST_ItemEffects>& AttachmentEffects, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, EScrollDirection Temp_byte_Variable, EScrollDirection Temp_byte_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_3, EScrollDirection Temp_byte_Variable_2, EScrollDirection Temp_byte_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool Temp_bool_Variable_5, EScrollDirection Temp_byte_Variable_4, EScrollDirection Temp_byte_Variable_5, bool Temp_bool_Variable_6, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_7, EScrollDirection Temp_byte_Variable_6, EScrollDirection Temp_byte_Variable_7, bool Temp_bool_Variable_8, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable_9, EScrollDirection Temp_byte_Variable_8, EScrollDirection Temp_byte_Variable_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText K2Node_Select_Default, EScrollDirection K2Node_Select_Default_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class FText K2Node_Select_Default_2, EScrollDirection K2Node_Select_Default_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_2, int32 CallFunc_Array_Add_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_3, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, EScrollDirection K2Node_Select_Default_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_5, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, EScrollDirection K2Node_Select_Default_7, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_6, int32 CallFunc_Array_Add_ReturnValue_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_4, class FText K2Node_Select_Default_8, EScrollDirection K2Node_Select_Default_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_7, int32 CallFunc_Array_Add_ReturnValue_7);
	void UpdateLoadoutPresetInfo(class UW_Loadout_Overview_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loadout_InformationTable_C">();
	}
	static class UW_Loadout_InformationTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loadout_InformationTable_C>();
	}
};
static_assert(alignof(UW_Loadout_InformationTable_C) == 0x000008, "Wrong alignment on UW_Loadout_InformationTable_C");
static_assert(sizeof(UW_Loadout_InformationTable_C) == 0x000728, "Wrong size on UW_Loadout_InformationTable_C");
static_assert(offsetof(UW_Loadout_InformationTable_C, UberGraphFrame) == 0x000260, "Member 'UW_Loadout_InformationTable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AnimRefresh) == 0x000268, "Member 'UW_Loadout_InformationTable_C::AnimRefresh' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AnimHide) == 0x000270, "Member 'UW_Loadout_InformationTable_C::AnimHide' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AnimReveal) == 0x000278, "Member 'UW_Loadout_InformationTable_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Div_Formation_Bot_1) == 0x000280, "Member 'UW_Loadout_InformationTable_C::Div_Formation_Bot_1' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Img_icon) == 0x000288, "Member 'UW_Loadout_InformationTable_C::Img_icon' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemInfoPanelWidget) == 0x000290, "Member 'UW_Loadout_InformationTable_C::ItemInfoPanelWidget' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemListAnchor) == 0x000298, "Member 'UW_Loadout_InformationTable_C::ItemListAnchor' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ScaleBox_Icon) == 0x0002A0, "Member 'UW_Loadout_InformationTable_C::ScaleBox_Icon' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, SelectedMissionPanel_1) == 0x0002A8, "Member 'UW_Loadout_InformationTable_C::SelectedMissionPanel_1' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, SizeBox) == 0x0002B0, "Member 'UW_Loadout_InformationTable_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, SizeBox_Icon) == 0x0002B8, "Member 'UW_Loadout_InformationTable_C::SizeBox_Icon' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Txt_Category) == 0x0002C0, "Member 'UW_Loadout_InformationTable_C::Txt_Category' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Txt_Class) == 0x0002C8, "Member 'UW_Loadout_InformationTable_C::Txt_Class' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Txt_Description) == 0x0002D0, "Member 'UW_Loadout_InformationTable_C::Txt_Description' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Txt_ItemName) == 0x0002D8, "Member 'UW_Loadout_InformationTable_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, W_Loadout_Overview) == 0x0002E0, "Member 'UW_Loadout_InformationTable_C::W_Loadout_Overview' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, OnModifyWeaponButtonClicked) == 0x0002E8, "Member 'UW_Loadout_InformationTable_C::OnModifyWeaponButtonClicked' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Hidden) == 0x0002F8, "Member 'UW_Loadout_InformationTable_C::Hidden' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemName) == 0x000300, "Member 'UW_Loadout_InformationTable_C::ItemName' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemCategory) == 0x000318, "Member 'UW_Loadout_InformationTable_C::ItemCategory' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemDescription) == 0x000330, "Member 'UW_Loadout_InformationTable_C::ItemDescription' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemClass) == 0x000348, "Member 'UW_Loadout_InformationTable_C::ItemClass' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, LoadoutSlot) == 0x000350, "Member 'UW_Loadout_InformationTable_C::LoadoutSlot' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, WeaponClassText) == 0x000358, "Member 'UW_Loadout_InformationTable_C::WeaponClassText' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, WeaponClass) == 0x000370, "Member 'UW_Loadout_InformationTable_C::WeaponClass' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, OnInfoPanelRemoved) == 0x000378, "Member 'UW_Loadout_InformationTable_C::OnInfoPanelRemoved' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, InfoHidden) == 0x000388, "Member 'UW_Loadout_InformationTable_C::InfoHidden' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, OnCancelRefresh) == 0x000390, "Member 'UW_Loadout_InformationTable_C::OnCancelRefresh' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ActiveLoadout) == 0x0003A0, "Member 'UW_Loadout_InformationTable_C::ActiveLoadout' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AttachmentList) == 0x000528, "Member 'UW_Loadout_InformationTable_C::AttachmentList' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Restricted) == 0x000530, "Member 'UW_Loadout_InformationTable_C::Restricted' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, OnInfoPanelAttachmentClicked) == 0x000538, "Member 'UW_Loadout_InformationTable_C::OnInfoPanelAttachmentClicked' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AmmoType) == 0x000548, "Member 'UW_Loadout_InformationTable_C::AmmoType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ItemIcon) == 0x000550, "Member 'UW_Loadout_InformationTable_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ArmourMaterial) == 0x000558, "Member 'UW_Loadout_InformationTable_C::ArmourMaterial' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Attachment) == 0x000560, "Member 'UW_Loadout_InformationTable_C::Attachment' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, AttachmentType) == 0x000568, "Member 'UW_Loadout_InformationTable_C::AttachmentType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, ScopeReticle) == 0x000570, "Member 'UW_Loadout_InformationTable_C::ScopeReticle' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, EffectsList) == 0x000578, "Member 'UW_Loadout_InformationTable_C::EffectsList' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, OnInfoPanelRemoveAttachmentClicked) == 0x000580, "Member 'UW_Loadout_InformationTable_C::OnInfoPanelRemoveAttachmentClicked' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, Loadout_Preset) == 0x000590, "Member 'UW_Loadout_InformationTable_C::Loadout_Preset' has a wrong offset!");
static_assert(offsetof(UW_Loadout_InformationTable_C, LoadoutPresetPreview) == 0x000720, "Member 'UW_Loadout_InformationTable_C::LoadoutPresetPreview' has a wrong offset!");

}

