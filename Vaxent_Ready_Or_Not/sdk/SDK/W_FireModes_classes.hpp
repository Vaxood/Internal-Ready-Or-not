#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FireModes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FireModes.W_FireModes_C
// 0x0058 (0x02B8 - 0x0260)
class UW_FireModes_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FadeOut;                                      // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_FireMode_C*                          FireMode_Auto;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FireMode_C*                          FireMode_Burst;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FireMode_C*                          FireMode_Safe;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FireMode_C*                          FireMode_Single;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        FireMode_StyleSwitcher;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FireMode_Text;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FireModeStates_Container;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFireMode                                     CurrentFireMode;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC6[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeOutTime;                                       // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TH_FadeOut;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_FireModes(int32 EntryPoint, class ABaseWeapon* K2Node_CustomEvent_NewWeapon, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnWeaponEquipped(class ABaseWeapon* NewWeapon);
	void SetFireMode(EFireMode NewFireMode, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Select(class UW_FireMode_C* FireModeWidget);
	void DeselectAllExpect(class UW_FireMode_C* FireModeWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_FireMode_C* K2Node_DynamicCast_AsW_Fire_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void DeselectAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_FireMode_C* K2Node_DynamicCast_AsW_Fire_Mode, bool K2Node_DynamicCast_bSuccess);
	void Deselect(class UW_FireMode_C* FireModeWidget);
	void UpdateAvailableFireModes(class ABaseWeapon* Weapon, EFireMode Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_2, EFireMode Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_Array_Contains_ReturnValue_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_5, EFireMode Temp_byte_Variable_6, bool Temp_bool_Variable_2, bool CallFunc_Array_Contains_ReturnValue_2, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_8, EFireMode Temp_byte_Variable_9, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_2);
	void FadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetStyle(int32 Option);

	void IsFadeOutTimerActive(bool* Return_Value, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue) const;
	void IsFadingOut(bool* Return_Value, bool CallFunc_IsAnimationPlaying_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FireModes_C">();
	}
	static class UW_FireModes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FireModes_C>();
	}
};
static_assert(alignof(UW_FireModes_C) == 0x000008, "Wrong alignment on UW_FireModes_C");
static_assert(sizeof(UW_FireModes_C) == 0x0002B8, "Wrong size on UW_FireModes_C");
static_assert(offsetof(UW_FireModes_C, UberGraphFrame) == 0x000260, "Member 'UW_FireModes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, Anim_FadeOut) == 0x000268, "Member 'UW_FireModes_C::Anim_FadeOut' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_Auto) == 0x000270, "Member 'UW_FireModes_C::FireMode_Auto' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_Burst) == 0x000278, "Member 'UW_FireModes_C::FireMode_Burst' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_Safe) == 0x000280, "Member 'UW_FireModes_C::FireMode_Safe' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_Single) == 0x000288, "Member 'UW_FireModes_C::FireMode_Single' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_StyleSwitcher) == 0x000290, "Member 'UW_FireModes_C::FireMode_StyleSwitcher' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireMode_Text) == 0x000298, "Member 'UW_FireModes_C::FireMode_Text' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FireModeStates_Container) == 0x0002A0, "Member 'UW_FireModes_C::FireModeStates_Container' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, CurrentFireMode) == 0x0002A8, "Member 'UW_FireModes_C::CurrentFireMode' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, FadeOutTime) == 0x0002AC, "Member 'UW_FireModes_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UW_FireModes_C, TH_FadeOut) == 0x0002B0, "Member 'UW_FireModes_C::TH_FadeOut' has a wrong offset!");

}

