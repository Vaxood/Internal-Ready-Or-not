#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ItemSelection_ItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ItemSelection_ItemList.W_ItemSelection_ItemList_C
// 0x00E0 (0x0358 - 0x0278)
class UW_ItemSelection_ItemList_C final  : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Focus;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Unfocus;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FadeOut;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Items;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ItemSelection_ItemGroup_C*           ItemGroup;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Items;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Main;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Style;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class ABaseItem*>                      Items;                                             // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	int32                                         SelectionIndex;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3464[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UW_ItemSelection_Item_C*>        ItemWidgets;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemSelectionGroup                    ItemGroupSetting;                                  // 0x02F0(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ABasePlayer_C*                          PlayerCharacter;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFocused;                                        // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCanNavigate;                                      // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnteredOnce;                                      // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3465[0x1];                                     // 0x0343(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NudgeAmount;                                       // 0x0344(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkingRenderOpacity;                              // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DuplicateRow;                                      // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLastGroup;                                      // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bInOverviewMode;                                   // 0x0355(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_ItemSelection_ItemList(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue_1);
	void CustomEvent_1();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_0();
	void OnInitialized();
	void Construct();
	void Initialize();
	void PopulateList(const TArray<class ABaseItem*>& SortedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Next(int32 CallFunc_Array_Length_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Previous(int32 CallFunc_Array_Length_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Select(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item);
	void Deselect(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item);
	void FadeOut(bool bFocusRequired, bool CallFunc_IsVisible_ReturnValue);
	void FadeIn(bool bFocusRequired, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void ExecuteSelection(bool bSoftSelection, int32 Temp_int_Array_Index_Variable, class ABaseItem* CallFunc_Array_Get_Item, TDelegate<void(class ABaseGrenade* ThrownGrenade)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class ABaseGrenade* ThrownGrenade)> K2Node_CreateDelegate_OutputDelegate_1, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, class ABaseItem* CallFunc_Array_Get_Item_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_3, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_4, bool CallFunc_EquipItem_ItemEquipped, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_PutItemInHands_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_6, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
	void EquipItem(bool* ItemEquipped, bool CallFunc_EquipItem_ItemEquipped);
	void Unfocus(bool bForce, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, bool CallFunc_HasAnyItems_Return_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Focus(bool bForce, bool CallFunc_HasAnyItems_Return_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyItems_Return_Value_1, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnAnimSelectFinished(int32 CallFunc_Array_Length_ReturnValue);
	void OnAnimFadeOutFinished();
	void SwapItem(int32 FromIndex, int32 ToIndex, class UW_ItemSelection_Item_C* PreviousItemWidget, class ABaseItem* PreviousItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue_1, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void CreateItem(class ABaseItem* Item, int32 Param_Index, bool bSwapping, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize);
	void HideList(bool bPlaySound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void ShowList(int32 Temp_int_Array_Index_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* Return_Value, TArray<class FString>* Names, const TArray<class FString>& NewLocalVar_0, const TArray<class ABaseItem*>& DuplicateItems, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3);
	void RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems);
	void RemoveItem__Index_(int32 ItemIndex, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UW_ItemSelection_Item_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ShowArrow(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HideArrow();
	void OnGrenadeThrown(class ABaseGrenade* ThrownGrenade, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SwapItemWithGroup(int32 ItemIndex, class ABaseItem* PreviousItem);
	void UpdateItemList(bool bPreviousCanNavigate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);

	void GetSelectedItem(class ABaseItem** Return_Value, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item) const;
	void IsInsideList(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ItemSelection_ItemList_C">();
	}
	static class UW_ItemSelection_ItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ItemSelection_ItemList_C>();
	}
};
static_assert(alignof(UW_ItemSelection_ItemList_C) == 0x000008, "Wrong alignment on UW_ItemSelection_ItemList_C");
static_assert(sizeof(UW_ItemSelection_ItemList_C) == 0x000358, "Wrong size on UW_ItemSelection_ItemList_C");
static_assert(offsetof(UW_ItemSelection_ItemList_C, UberGraphFrame) == 0x000278, "Member 'UW_ItemSelection_ItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_Focus) == 0x000280, "Member 'UW_ItemSelection_ItemList_C::Anim_Focus' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_Unfocus) == 0x000288, "Member 'UW_ItemSelection_ItemList_C::Anim_Unfocus' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_FadeIn) == 0x000290, "Member 'UW_ItemSelection_ItemList_C::Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Anim_FadeOut) == 0x000298, "Member 'UW_ItemSelection_ItemList_C::Anim_FadeOut' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, GridPanel_Items) == 0x0002A0, "Member 'UW_ItemSelection_ItemList_C::GridPanel_Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemGroup) == 0x0002A8, "Member 'UW_ItemSelection_ItemList_C::ItemGroup' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, VerticalBox_Items) == 0x0002B0, "Member 'UW_ItemSelection_ItemList_C::VerticalBox_Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, VerticalBox_Main) == 0x0002B8, "Member 'UW_ItemSelection_ItemList_C::VerticalBox_Main' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, WidgetSwitcher_Style) == 0x0002C0, "Member 'UW_ItemSelection_ItemList_C::WidgetSwitcher_Style' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, Items) == 0x0002C8, "Member 'UW_ItemSelection_ItemList_C::Items' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, SelectionIndex) == 0x0002D8, "Member 'UW_ItemSelection_ItemList_C::SelectionIndex' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemWidgets) == 0x0002E0, "Member 'UW_ItemSelection_ItemList_C::ItemWidgets' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, ItemGroupSetting) == 0x0002F0, "Member 'UW_ItemSelection_ItemList_C::ItemGroupSetting' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, PlayerCharacter) == 0x000338, "Member 'UW_ItemSelection_ItemList_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bIsFocused) == 0x000340, "Member 'UW_ItemSelection_ItemList_C::bIsFocused' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bCanNavigate) == 0x000341, "Member 'UW_ItemSelection_ItemList_C::bCanNavigate' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bEnteredOnce) == 0x000342, "Member 'UW_ItemSelection_ItemList_C::bEnteredOnce' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, NudgeAmount) == 0x000344, "Member 'UW_ItemSelection_ItemList_C::NudgeAmount' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, WorkingRenderOpacity) == 0x00034C, "Member 'UW_ItemSelection_ItemList_C::WorkingRenderOpacity' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, DuplicateRow) == 0x000350, "Member 'UW_ItemSelection_ItemList_C::DuplicateRow' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bIsLastGroup) == 0x000354, "Member 'UW_ItemSelection_ItemList_C::bIsLastGroup' has a wrong offset!");
static_assert(offsetof(UW_ItemSelection_ItemList_C, bInOverviewMode) == 0x000355, "Member 'UW_ItemSelection_ItemList_C::bInOverviewMode' has a wrong offset!");

}

