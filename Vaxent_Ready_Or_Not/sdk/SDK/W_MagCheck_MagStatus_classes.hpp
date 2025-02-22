#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MagCheck_MagStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MagCheck_MagStatus.W_MagCheck_MagStatus_C
// 0x0050 (0x02B0 - 0x0260)
class UW_MagCheck_MagStatus_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Highlight;                                    // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AmmoTypeText;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight_Bar_Image;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MagIcon_Image;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_MagIcon;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MagIndex;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1C1C[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AmmoType;                                          // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_W_MagCheck_MagStatus(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetMagazineAmmoPercentage_ReturnValue, int32 K2Node_CustomEvent_MagIndex, class FText K2Node_CustomEvent_AmmoTypeText);
	void Init(int32 Param_MagIndex, class FText Param_AmmoTypeText);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Highlight(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Unhighlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MagCheck_MagStatus_C">();
	}
	static class UW_MagCheck_MagStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MagCheck_MagStatus_C>();
	}
};
static_assert(alignof(UW_MagCheck_MagStatus_C) == 0x000008, "Wrong alignment on UW_MagCheck_MagStatus_C");
static_assert(sizeof(UW_MagCheck_MagStatus_C) == 0x0002B0, "Wrong size on UW_MagCheck_MagStatus_C");
static_assert(offsetof(UW_MagCheck_MagStatus_C, UberGraphFrame) == 0x000260, "Member 'UW_MagCheck_MagStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, Anim_Highlight) == 0x000268, "Member 'UW_MagCheck_MagStatus_C::Anim_Highlight' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, AmmoTypeText) == 0x000270, "Member 'UW_MagCheck_MagStatus_C::AmmoTypeText' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, Highlight_Bar_Image) == 0x000278, "Member 'UW_MagCheck_MagStatus_C::Highlight_Bar_Image' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, MagIcon_Image) == 0x000280, "Member 'UW_MagCheck_MagStatus_C::MagIcon_Image' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, MID_MagIcon) == 0x000288, "Member 'UW_MagCheck_MagStatus_C::MID_MagIcon' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, MagIndex) == 0x000290, "Member 'UW_MagCheck_MagStatus_C::MagIndex' has a wrong offset!");
static_assert(offsetof(UW_MagCheck_MagStatus_C, AmmoType) == 0x000298, "Member 'UW_MagCheck_MagStatus_C::AmmoType' has a wrong offset!");

}

