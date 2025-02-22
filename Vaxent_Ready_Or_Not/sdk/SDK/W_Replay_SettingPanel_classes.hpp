#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Replay_SettingPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Replay_SettingPanel.W_Replay_SettingPanel_C
// 0x0150 (0x03B0 - 0x0260)
class UW_Replay_SettingPanel_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                            btn_Spline_Add;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Spline_Play;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Spline_RemoveAll;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Spline_RemoveLast;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                          Drop_SplineRotation;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_38;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Aperture;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_BlackClip;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_CameraRoll;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Contrast;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_FieldOfView;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_FocalDistance;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Gamma;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_LookSensitivity;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Saturation;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Shoulder;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Slope;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_SplineDuration;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_Toe;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Lbl_WhiteClip;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Aperture;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_BlackClip;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_CameraRoll;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Contrast;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_FieldOfView;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_FocalDistance;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Gamma;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_LookSensitivity;                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Saturation;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Shoulder;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Slope;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_SplineDuration;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_Toe;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                           Spinbox_WhiteClip;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Camera;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Film;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Lens;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Spline;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ActivePanel;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_Replay_SettingPanel(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_ComponentBoundEvent_Value_13, int32 Temp_int_Variable_1, float K2Node_ComponentBoundEvent_Value_12, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, float K2Node_ComponentBoundEvent_Value_11, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float K2Node_ComponentBoundEvent_Value_10, float K2Node_ComponentBoundEvent_Value_9, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_4, bool K2Node_DynamicCast_bSuccess_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_5, bool K2Node_DynamicCast_bSuccess_6, class APawn* CallFunc_GetPlayerPawn_ReturnValue_6, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_6, bool K2Node_DynamicCast_bSuccess_7, class APawn* CallFunc_GetPlayerPawn_ReturnValue_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_7, bool K2Node_DynamicCast_bSuccess_8, float K2Node_ComponentBoundEvent_Value_8, const struct FVector4& K2Node_MakeStruct_Vector4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_8, float K2Node_ComponentBoundEvent_Value_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_8, bool K2Node_DynamicCast_bSuccess_9, const struct FVector4& K2Node_MakeStruct_Vector4_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_9, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_9, bool K2Node_DynamicCast_bSuccess_10, float K2Node_ComponentBoundEvent_Value_6, const struct FVector4& K2Node_MakeStruct_Vector4_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_12, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_2, bool K2Node_DynamicCast_bSuccess_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_3, bool K2Node_DynamicCast_bSuccess_14, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_4, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_10, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_ReplayCameraPawn_C* K2Node_DynamicCast_AsBP_Replay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_16, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_5, bool K2Node_DynamicCast_bSuccess_17, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_5, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_11, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_10, bool K2Node_DynamicCast_bSuccess_18, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_BreakVector4_X, float CallFunc_BreakVector4_Y, float CallFunc_BreakVector4_Z, float CallFunc_BreakVector4_W, class APawn* CallFunc_GetPlayerPawn_ReturnValue_12, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_11, bool K2Node_DynamicCast_bSuccess_19, float K2Node_ComponentBoundEvent_Value_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_13, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_12, bool K2Node_DynamicCast_bSuccess_20, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_ComponentBoundEvent_Value_3, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, class APawn* CallFunc_GetPlayerPawn_ReturnValue_14, class APawn* CallFunc_GetPlayerPawn_ReturnValue_15, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_13, bool K2Node_DynamicCast_bSuccess_21, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_14, bool K2Node_DynamicCast_bSuccess_22, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component_1, bool K2Node_DynamicCast_bSuccess_23, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component_2, bool K2Node_DynamicCast_bSuccess_24);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(float Value);
	void InitializeDefaults();
	void BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value);
	void SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, float Value);
	void ToggleCameraPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ToggleFilmPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ToggleLensPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ToggleSplinePanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ClosePanel();
	void OpenPanel(bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Replay_SettingPanel_C">();
	}
	static class UW_Replay_SettingPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Replay_SettingPanel_C>();
	}
};
static_assert(alignof(UW_Replay_SettingPanel_C) == 0x000008, "Wrong alignment on UW_Replay_SettingPanel_C");
static_assert(sizeof(UW_Replay_SettingPanel_C) == 0x0003B0, "Wrong size on UW_Replay_SettingPanel_C");
static_assert(offsetof(UW_Replay_SettingPanel_C, UberGraphFrame) == 0x000260, "Member 'UW_Replay_SettingPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, btn_Spline_Add) == 0x000268, "Member 'UW_Replay_SettingPanel_C::btn_Spline_Add' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, btn_Spline_Play) == 0x000270, "Member 'UW_Replay_SettingPanel_C::btn_Spline_Play' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, btn_Spline_RemoveAll) == 0x000278, "Member 'UW_Replay_SettingPanel_C::btn_Spline_RemoveAll' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, btn_Spline_RemoveLast) == 0x000280, "Member 'UW_Replay_SettingPanel_C::btn_Spline_RemoveLast' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Drop_SplineRotation) == 0x000288, "Member 'UW_Replay_SettingPanel_C::Drop_SplineRotation' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Image_38) == 0x000290, "Member 'UW_Replay_SettingPanel_C::Image_38' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Aperture) == 0x000298, "Member 'UW_Replay_SettingPanel_C::Lbl_Aperture' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_BlackClip) == 0x0002A0, "Member 'UW_Replay_SettingPanel_C::Lbl_BlackClip' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_CameraRoll) == 0x0002A8, "Member 'UW_Replay_SettingPanel_C::Lbl_CameraRoll' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Contrast) == 0x0002B0, "Member 'UW_Replay_SettingPanel_C::Lbl_Contrast' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_FieldOfView) == 0x0002B8, "Member 'UW_Replay_SettingPanel_C::Lbl_FieldOfView' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_FocalDistance) == 0x0002C0, "Member 'UW_Replay_SettingPanel_C::Lbl_FocalDistance' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Gamma) == 0x0002C8, "Member 'UW_Replay_SettingPanel_C::Lbl_Gamma' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_LookSensitivity) == 0x0002D0, "Member 'UW_Replay_SettingPanel_C::Lbl_LookSensitivity' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Saturation) == 0x0002D8, "Member 'UW_Replay_SettingPanel_C::Lbl_Saturation' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Shoulder) == 0x0002E0, "Member 'UW_Replay_SettingPanel_C::Lbl_Shoulder' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Slope) == 0x0002E8, "Member 'UW_Replay_SettingPanel_C::Lbl_Slope' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_SplineDuration) == 0x0002F0, "Member 'UW_Replay_SettingPanel_C::Lbl_SplineDuration' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_Toe) == 0x0002F8, "Member 'UW_Replay_SettingPanel_C::Lbl_Toe' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Lbl_WhiteClip) == 0x000300, "Member 'UW_Replay_SettingPanel_C::Lbl_WhiteClip' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Aperture) == 0x000308, "Member 'UW_Replay_SettingPanel_C::Spinbox_Aperture' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_BlackClip) == 0x000310, "Member 'UW_Replay_SettingPanel_C::Spinbox_BlackClip' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_CameraRoll) == 0x000318, "Member 'UW_Replay_SettingPanel_C::Spinbox_CameraRoll' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Contrast) == 0x000320, "Member 'UW_Replay_SettingPanel_C::Spinbox_Contrast' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_FieldOfView) == 0x000328, "Member 'UW_Replay_SettingPanel_C::Spinbox_FieldOfView' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_FocalDistance) == 0x000330, "Member 'UW_Replay_SettingPanel_C::Spinbox_FocalDistance' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Gamma) == 0x000338, "Member 'UW_Replay_SettingPanel_C::Spinbox_Gamma' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_LookSensitivity) == 0x000340, "Member 'UW_Replay_SettingPanel_C::Spinbox_LookSensitivity' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Saturation) == 0x000348, "Member 'UW_Replay_SettingPanel_C::Spinbox_Saturation' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Shoulder) == 0x000350, "Member 'UW_Replay_SettingPanel_C::Spinbox_Shoulder' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Slope) == 0x000358, "Member 'UW_Replay_SettingPanel_C::Spinbox_Slope' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_SplineDuration) == 0x000360, "Member 'UW_Replay_SettingPanel_C::Spinbox_SplineDuration' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_Toe) == 0x000368, "Member 'UW_Replay_SettingPanel_C::Spinbox_Toe' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, Spinbox_WhiteClip) == 0x000370, "Member 'UW_Replay_SettingPanel_C::Spinbox_WhiteClip' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, VB_Camera) == 0x000378, "Member 'UW_Replay_SettingPanel_C::VB_Camera' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, VB_Film) == 0x000380, "Member 'UW_Replay_SettingPanel_C::VB_Film' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, VB_Lens) == 0x000388, "Member 'UW_Replay_SettingPanel_C::VB_Lens' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, VB_Spline) == 0x000390, "Member 'UW_Replay_SettingPanel_C::VB_Spline' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, WidgetSwitcher_0) == 0x000398, "Member 'UW_Replay_SettingPanel_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, ActivePanel) == 0x0003A0, "Member 'UW_Replay_SettingPanel_C::ActivePanel' has a wrong offset!");
static_assert(offsetof(UW_Replay_SettingPanel_C, IsOpen) == 0x0003A8, "Member 'UW_Replay_SettingPanel_C::IsOpen' has a wrong offset!");

}

