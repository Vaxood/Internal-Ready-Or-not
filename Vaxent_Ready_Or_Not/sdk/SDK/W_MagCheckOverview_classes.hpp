#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MagCheckOverview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MagCheckOverview.W_MagCheckOverview_C
// 0x00A8 (0x0308 - 0x0260)
class UW_MagCheckOverview_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_OnMagCheck;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_1;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_2;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_3;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_4;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_5;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_6;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_7;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_8;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_9;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_10;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_11;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_12;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_13;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_14;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_15;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*                MagCheck_MagStatus_16;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Mags_Container;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_MagCheck_MagStatus_C*>        MagCheckStatusWidgets;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_W_MagCheckOverview(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABaseMagazineWeapon* K2Node_CustomEvent_MagazineWeapon, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1);
	void OnWeaponMagCheck_Event_0(class ABaseMagazineWeapon* MagazineWeapon);
	void Construct();
	void RefreshMags(class ABaseMagazineWeapon* MagazineWeapon, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FMagazine& CallFunc_Array_Get_Item, class UW_MagCheck_MagStatus_C* CallFunc_IndexToMagStatusWidget_Return_Value, class FText CallFunc_GetMagazineScreenName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void HighlightCurrentMag(class ABaseMagazineWeapon* MagazineWeapon, bool CallFunc_IsValid_ReturnValue, class UW_MagCheck_MagStatus_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1);
	void UnhighlightAllMags(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_MagCheck_MagStatus_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void CollapseAllMagStatusWidget();

	void IndexToMagStatusWidget(int32 Param_Index, class UW_MagCheck_MagStatus_C** Return_Value, bool K2Node_SwitchInteger_CmpSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MagCheckOverview_C">();
	}
	static class UW_MagCheckOverview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MagCheckOverview_C>();
	}
};
static_assert(alignof(UW_MagCheckOverview_C) == 0x000008, "Wrong alignment on UW_MagCheckOverview_C");
static_assert(sizeof(UW_MagCheckOverview_C) == 0x000308, "Wrong size on UW_MagCheckOverview_C");
static_assert(offsetof(UW_MagCheckOverview_C, UberGraphFrame) == 0x000260, "Member 'UW_MagCheckOverview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, Anim_OnMagCheck) == 0x000268, "Member 'UW_MagCheckOverview_C::Anim_OnMagCheck' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_1) == 0x000270, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_1' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_2) == 0x000278, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_2' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_3) == 0x000280, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_3' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_4) == 0x000288, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_4' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_5) == 0x000290, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_5' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_6) == 0x000298, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_6' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_7) == 0x0002A0, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_7' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_8) == 0x0002A8, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_8' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_9) == 0x0002B0, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_9' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_10) == 0x0002B8, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_10' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_11) == 0x0002C0, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_11' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_12) == 0x0002C8, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_12' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_13) == 0x0002D0, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_13' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_14) == 0x0002D8, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_14' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_15) == 0x0002E0, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_15' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheck_MagStatus_16) == 0x0002E8, "Member 'UW_MagCheckOverview_C::MagCheck_MagStatus_16' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, Mags_Container) == 0x0002F0, "Member 'UW_MagCheckOverview_C::Mags_Container' has a wrong offset!");
static_assert(offsetof(UW_MagCheckOverview_C, MagCheckStatusWidgets) == 0x0002F8, "Member 'UW_MagCheckOverview_C::MagCheckStatusWidgets' has a wrong offset!");

}

