#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldMapMissionBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WorldMapMissionBox.W_WorldMapMissionBox_C
// 0x0070 (0x02F8 - 0x0288)
class UW_WorldMapMissionBox_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovering;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 LevelPicture;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              MissionLabel;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_Gamepad_C*                  WorldMap;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMapInBuild_;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLocked_;                                         // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5C[0x2];                                     // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MissionName;                                       // 0x02BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5D[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Clicked;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Hovered;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Unhovered;                                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Clicked__DelegateSignature(class FName Param_MissionName);
	void Hovered__DelegateSignature(class FName Param_MissionName);
	void Unhovered__DelegateSignature(class FName Param_MissionName);
	void ExecuteUbergraph_W_WorldMapMissionBox(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_DoesLevelExistInBuild_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_IsLevelUnlocked_OutIsUnlocked, float CallFunc_IsLevelUnlocked_OutScoreRequired, const class FString& CallFunc_IsLevelUnlocked_OutLockedUrl, bool CallFunc_IsLevelUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WorldMapMissionBox_C">();
	}
	static class UW_WorldMapMissionBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WorldMapMissionBox_C>();
	}
};
static_assert(alignof(UW_WorldMapMissionBox_C) == 0x000008, "Wrong alignment on UW_WorldMapMissionBox_C");
static_assert(sizeof(UW_WorldMapMissionBox_C) == 0x0002F8, "Wrong size on UW_WorldMapMissionBox_C");
static_assert(offsetof(UW_WorldMapMissionBox_C, UberGraphFrame) == 0x000288, "Member 'UW_WorldMapMissionBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, Hovering) == 0x000290, "Member 'UW_WorldMapMissionBox_C::Hovering' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, LevelPicture) == 0x000298, "Member 'UW_WorldMapMissionBox_C::LevelPicture' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, MissionLabel) == 0x0002A0, "Member 'UW_WorldMapMissionBox_C::MissionLabel' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, W_Button) == 0x0002A8, "Member 'UW_WorldMapMissionBox_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, WorldMap) == 0x0002B0, "Member 'UW_WorldMapMissionBox_C::WorldMap' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, bMapInBuild_) == 0x0002B8, "Member 'UW_WorldMapMissionBox_C::bMapInBuild_' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, IsLocked_) == 0x0002B9, "Member 'UW_WorldMapMissionBox_C::IsLocked_' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, MissionName) == 0x0002BC, "Member 'UW_WorldMapMissionBox_C::MissionName' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, Clicked) == 0x0002C8, "Member 'UW_WorldMapMissionBox_C::Clicked' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, Hovered) == 0x0002D8, "Member 'UW_WorldMapMissionBox_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_WorldMapMissionBox_C, Unhovered) == 0x0002E8, "Member 'UW_WorldMapMissionBox_C::Unhovered' has a wrong offset!");

}

