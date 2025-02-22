#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Roster_Details

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Roster_Details.W_Roster_Details_C
// 0x0278 (0x05A8 - 0x0330)
class UW_Roster_Details_C final  : public URosterSelectionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          Bio;                                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        btn_Card;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Fire;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Therapist;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Details;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DetailsSizeBox;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Details;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Name;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBorder;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBorder_1;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_136;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSpinner;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PositionCorner;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PositionCorner_1;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_Unknown;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_Unknown_1;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Loadout_C*                    Loadout;                                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LockedTraitBox;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Bio_C*                        OfficerBio;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_OfficerEvents_C*              OfficerEvents;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OfficerName;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OverviewPosition;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OverviewPosition_1;                                // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OverviewStatusBox;                                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Portrait_Full;                                     // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Portrait_Small;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Position;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Position_1;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PositionColorBorder;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PositionColorBorder_1;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PositionNumber;                                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PositionNumber_1;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProfileImage;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProfileImage_1;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Rtxt_Bio;                                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Portrait;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SpecQual;                                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SpecQualInfoBox;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StressWarning;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Txb_SpecQual_Desc;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_DOB;                                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_EnlistDate;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_FirstName;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_LastName;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_SerialNo;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_SpecQual;                                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Status;                                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Status_1;                                      // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Card;                                           // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_EKG_C*                        W_Roster_EKG;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterSelection_C*                   RosterSelection;                                   // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URosterCharacter*                       RosterCharacter;                                   // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERosterSquadPosition                          DebugPosition;                                     // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugHover;                                        // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Hidden;                                            // 0x04FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartHidden;                                       // 0x04FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_32A5[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BlankPortrait;                                     // 0x0500(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Reveal_Delay;                                      // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadoutHidden;                                     // 0x058C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FullDetails;                                       // 0x058D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32A6[0x2];                                     // 0x058E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Width;                                             // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFullPortrait;                                   // 0x0594(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Clickable;                                         // 0x0595(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PressedFire;                                       // 0x0596(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32A7[0x1];                                     // 0x0597(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_PreMission_Tablet_RosterManager_C*   Parent_Tablet;                                     // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PressedTherapist;                                  // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClicked__DelegateSignature(class UW_RosterSelection_Card_C* Card);
	void ExecuteUbergraph_W_Roster_Details(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class URosterCharacter* K2Node_CustomEvent_Character, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsValid_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void UpdateFromParent();
	void OnCharactersUpdated();
	void BndEvt__W_Roster_Details_btn_Fire_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Roster_Details_btn_Therapist_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void QuickHide();
	void AnimHidden();
	void Hide(float Delay, bool Collapse);
	void AnimRevealed();
	void Reveal(float Delay);
	void SetCharacter(class URosterCharacter* Character);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_CCF0F7F943E348430C2100970C186F79(class UObject* Loaded);
	void SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetPosition(ERosterSquadPosition Param_Position, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ERosterSquadPosition Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, ERosterSquadPosition Temp_byte_Variable_5, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, ERosterSquadPosition Temp_byte_Variable_6, EHorizontalAlignment Temp_byte_Variable_7, EHorizontalAlignment Temp_byte_Variable_8, EHorizontalAlignment Temp_byte_Variable_9, EHorizontalAlignment Temp_byte_Variable_10, EHorizontalAlignment Temp_byte_Variable_11, ERosterSquadPosition Temp_byte_Variable_12, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_2, EHorizontalAlignment K2Node_Select_Default_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText K2Node_Select_Default_5, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
	void BlankDetails(class FText CallFunc_MakeLiteralText_ReturnValue);
	void HideLoadout(bool Hide, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void InitLayout(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void UpdateStatus(ERosterCharacterState CurrentState, ERosterCharacterState Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_CanUseTherapist_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, class FText K2Node_Select_Default);
	void UpdateCharacterText(bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_FormatBio_OutText);
	void UpdateSpec(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void UpdateLoadout(bool CallFunc_IsValid_ReturnValue, const struct FRosterLoadout& CallFunc_GetCharacterLoadout_ReturnValue);
	void UpdateFireText(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_CanFireCharacter_ReturnValue, ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void UpdateTherapistText(bool Temp_bool_Variable, class FText Temp_text_Variable, int32 CallFunc_GetNumCharactersInTherapy_ReturnValue, int32 CallFunc_GetMaxCharactersInTherapy_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetMaxCharactersInTherapy_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetNumCharactersInTherapy_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Roster_Details_C">();
	}
	static class UW_Roster_Details_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Roster_Details_C>();
	}
};
static_assert(alignof(UW_Roster_Details_C) == 0x000008, "Wrong alignment on UW_Roster_Details_C");
static_assert(sizeof(UW_Roster_Details_C) == 0x0005A8, "Wrong size on UW_Roster_Details_C");
static_assert(offsetof(UW_Roster_Details_C, UberGraphFrame) == 0x000330, "Member 'UW_Roster_Details_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, AnimReveal) == 0x000338, "Member 'UW_Roster_Details_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Bio) == 0x000340, "Member 'UW_Roster_Details_C::Bio' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, btn_Card) == 0x000348, "Member 'UW_Roster_Details_C::btn_Card' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, btn_Fire) == 0x000350, "Member 'UW_Roster_Details_C::btn_Fire' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, btn_Therapist) == 0x000358, "Member 'UW_Roster_Details_C::btn_Therapist' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Details) == 0x000360, "Member 'UW_Roster_Details_C::Details' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, DetailsSizeBox) == 0x000368, "Member 'UW_Roster_Details_C::DetailsSizeBox' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, HB_Details) == 0x000370, "Member 'UW_Roster_Details_C::HB_Details' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, HB_Name) == 0x000378, "Member 'UW_Roster_Details_C::HB_Name' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, HoverBorder) == 0x000380, "Member 'UW_Roster_Details_C::HoverBorder' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, HoverBorder_1) == 0x000388, "Member 'UW_Roster_Details_C::HoverBorder_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Image) == 0x000390, "Member 'UW_Roster_Details_C::Image' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Image_136) == 0x000398, "Member 'UW_Roster_Details_C::Image_136' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, ImageSpinner) == 0x0003A0, "Member 'UW_Roster_Details_C::ImageSpinner' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Img_PositionCorner) == 0x0003A8, "Member 'UW_Roster_Details_C::Img_PositionCorner' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Img_PositionCorner_1) == 0x0003B0, "Member 'UW_Roster_Details_C::Img_PositionCorner_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Lbl_Unknown) == 0x0003B8, "Member 'UW_Roster_Details_C::Lbl_Unknown' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Lbl_Unknown_1) == 0x0003C0, "Member 'UW_Roster_Details_C::Lbl_Unknown_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Loadout) == 0x0003C8, "Member 'UW_Roster_Details_C::Loadout' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, LockedTraitBox) == 0x0003D0, "Member 'UW_Roster_Details_C::LockedTraitBox' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OfficerBio) == 0x0003D8, "Member 'UW_Roster_Details_C::OfficerBio' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OfficerEvents) == 0x0003E0, "Member 'UW_Roster_Details_C::OfficerEvents' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OfficerName) == 0x0003E8, "Member 'UW_Roster_Details_C::OfficerName' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OverviewPosition) == 0x0003F0, "Member 'UW_Roster_Details_C::OverviewPosition' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OverviewPosition_1) == 0x0003F8, "Member 'UW_Roster_Details_C::OverviewPosition_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OverviewStatusBox) == 0x000400, "Member 'UW_Roster_Details_C::OverviewStatusBox' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Portrait_Full) == 0x000408, "Member 'UW_Roster_Details_C::Portrait_Full' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Portrait_Small) == 0x000410, "Member 'UW_Roster_Details_C::Portrait_Small' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Position) == 0x000418, "Member 'UW_Roster_Details_C::Position' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Position_1) == 0x000420, "Member 'UW_Roster_Details_C::Position_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PositionColorBorder) == 0x000428, "Member 'UW_Roster_Details_C::PositionColorBorder' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PositionColorBorder_1) == 0x000430, "Member 'UW_Roster_Details_C::PositionColorBorder_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PositionNumber) == 0x000438, "Member 'UW_Roster_Details_C::PositionNumber' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PositionNumber_1) == 0x000440, "Member 'UW_Roster_Details_C::PositionNumber_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, ProfileImage) == 0x000448, "Member 'UW_Roster_Details_C::ProfileImage' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, ProfileImage_1) == 0x000450, "Member 'UW_Roster_Details_C::ProfileImage_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Rtxt_Bio) == 0x000458, "Member 'UW_Roster_Details_C::Rtxt_Bio' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Size_Portrait) == 0x000460, "Member 'UW_Roster_Details_C::Size_Portrait' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, SpecQual) == 0x000468, "Member 'UW_Roster_Details_C::SpecQual' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, SpecQualInfoBox) == 0x000470, "Member 'UW_Roster_Details_C::SpecQualInfoBox' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, StressWarning) == 0x000478, "Member 'UW_Roster_Details_C::StressWarning' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txb_SpecQual_Desc) == 0x000480, "Member 'UW_Roster_Details_C::Txb_SpecQual_Desc' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_DOB) == 0x000488, "Member 'UW_Roster_Details_C::Txt_DOB' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_EnlistDate) == 0x000490, "Member 'UW_Roster_Details_C::Txt_EnlistDate' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_FirstName) == 0x000498, "Member 'UW_Roster_Details_C::Txt_FirstName' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_LastName) == 0x0004A0, "Member 'UW_Roster_Details_C::Txt_LastName' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_SerialNo) == 0x0004A8, "Member 'UW_Roster_Details_C::Txt_SerialNo' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_SpecQual) == 0x0004B0, "Member 'UW_Roster_Details_C::Txt_SpecQual' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_Status) == 0x0004B8, "Member 'UW_Roster_Details_C::Txt_Status' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Txt_Status_1) == 0x0004C0, "Member 'UW_Roster_Details_C::Txt_Status_1' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, VB_Card) == 0x0004C8, "Member 'UW_Roster_Details_C::VB_Card' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, W_Roster_EKG) == 0x0004D0, "Member 'UW_Roster_Details_C::W_Roster_EKG' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, RosterSelection) == 0x0004D8, "Member 'UW_Roster_Details_C::RosterSelection' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, OnClicked) == 0x0004E0, "Member 'UW_Roster_Details_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, RosterCharacter) == 0x0004F0, "Member 'UW_Roster_Details_C::RosterCharacter' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, DebugPosition) == 0x0004F8, "Member 'UW_Roster_Details_C::DebugPosition' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, DebugHover) == 0x0004F9, "Member 'UW_Roster_Details_C::DebugHover' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Hidden) == 0x0004FA, "Member 'UW_Roster_Details_C::Hidden' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, StartHidden) == 0x0004FB, "Member 'UW_Roster_Details_C::StartHidden' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, BlankPortrait) == 0x000500, "Member 'UW_Roster_Details_C::BlankPortrait' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Reveal_Delay) == 0x000588, "Member 'UW_Roster_Details_C::Reveal_Delay' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, LoadoutHidden) == 0x00058C, "Member 'UW_Roster_Details_C::LoadoutHidden' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, FullDetails) == 0x00058D, "Member 'UW_Roster_Details_C::FullDetails' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Width) == 0x000590, "Member 'UW_Roster_Details_C::Width' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, UseFullPortrait) == 0x000594, "Member 'UW_Roster_Details_C::UseFullPortrait' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Clickable) == 0x000595, "Member 'UW_Roster_Details_C::Clickable' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PressedFire) == 0x000596, "Member 'UW_Roster_Details_C::PressedFire' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, Parent_Tablet) == 0x000598, "Member 'UW_Roster_Details_C::Parent_Tablet' has a wrong offset!");
static_assert(offsetof(UW_Roster_Details_C, PressedTherapist) == 0x0005A0, "Member 'UW_Roster_Details_C::PressedTherapist' has a wrong offset!");

}

