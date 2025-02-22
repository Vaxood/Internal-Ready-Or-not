#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RosterReview_EventCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonUI_classes.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RosterReview_EventCard.W_RosterReview_EventCard_C
// 0x01A0 (0x04C0 - 0x0320)
class UW_RosterReview_EventCard_C final  : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimRevealEventDetails;                            // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonButton_C*                        btn_Card;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EventOverlay;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBorder;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icn_Event;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icn_StatusChange;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_53;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PositionCorner;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_Unknown;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         OverviewDetailsBox_1;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OverviewPosition;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OverviewStatusBox;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Portrait_Full;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Position;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PositionColorBorder;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PositionNumber;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProfileImage;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Rtxt_EventDescription;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_EventDetails;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Status;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                StatusBorder;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TraitOverlay;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_EventDetailTitle;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_EventTitle;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_FirstName;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_LastName;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Status;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_TraitUnlocked;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Card;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URosterCharacter*                       RosterCharacter;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            BlankPortrait;                                     // 0x0420(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowEventDetails;                                  // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4270[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDetailsRevealed;                                 // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDetailsRevealed__DelegateSignature();
	void ExecuteUbergraph_W_RosterReview_EventCard(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ERosterCharacterState Temp_byte_Variable_3, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, ERosterRemovalReason Temp_byte_Variable_4, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, ERosterCharacterState Temp_byte_Variable_5, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, ERosterCharacterState Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class URosterCharacter* K2Node_CustomEvent_Character, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsGamepad, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, ESlateVisibility K2Node_Select_Default_5);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetCharacter(class URosterCharacter* Character);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void Finished_AF9B49AA4F6E19FB623872BB985C4A7D();
	void Finished_BA9218A1476038BD6635859D68F86118();
	void SetPosition(ERosterSquadPosition Param_Position, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ERosterSquadPosition Temp_byte_Variable_2, float Temp_float_Variable, ESlateVisibility K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, ERosterSquadPosition Temp_byte_Variable_3, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, ERosterSquadPosition Temp_byte_Variable_4, EHorizontalAlignment Temp_byte_Variable_5, EHorizontalAlignment Temp_byte_Variable_6, EHorizontalAlignment Temp_byte_Variable_7, EHorizontalAlignment Temp_byte_Variable_8, EHorizontalAlignment Temp_byte_Variable_9, ERosterSquadPosition Temp_byte_Variable_10, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, float K2Node_Select_Default_1, float K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, EHorizontalAlignment K2Node_Select_Default_3, class FText K2Node_Select_Default_4, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void BlankDetails();
	void UpdateStyleByState(ERosterCharacterState State, ESlateVisibility Temp_byte_Variable, ERosterCharacterState Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, ERosterCharacterState Temp_byte_Variable_2, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, ERosterCharacterState Temp_byte_Variable_3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, ERosterCharacterState Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, ERosterCharacterState Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_5, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select_Default_4, const struct FLinearColor& K2Node_Select_Default_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetInvisibleDuringShowDetails(ESlateVisibility* Param_Visibility, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RosterReview_EventCard_C">();
	}
	static class UW_RosterReview_EventCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RosterReview_EventCard_C>();
	}
};
static_assert(alignof(UW_RosterReview_EventCard_C) == 0x000008, "Wrong alignment on UW_RosterReview_EventCard_C");
static_assert(sizeof(UW_RosterReview_EventCard_C) == 0x0004C0, "Wrong size on UW_RosterReview_EventCard_C");
static_assert(offsetof(UW_RosterReview_EventCard_C, UberGraphFrame) == 0x000320, "Member 'UW_RosterReview_EventCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, AnimRevealEventDetails) == 0x000328, "Member 'UW_RosterReview_EventCard_C::AnimRevealEventDetails' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, AnimReveal) == 0x000330, "Member 'UW_RosterReview_EventCard_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, btn_Card) == 0x000338, "Member 'UW_RosterReview_EventCard_C::btn_Card' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, EventOverlay) == 0x000340, "Member 'UW_RosterReview_EventCard_C::EventOverlay' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, HoverBorder) == 0x000348, "Member 'UW_RosterReview_EventCard_C::HoverBorder' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Icn_Event) == 0x000350, "Member 'UW_RosterReview_EventCard_C::Icn_Event' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Icn_StatusChange) == 0x000358, "Member 'UW_RosterReview_EventCard_C::Icn_StatusChange' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Image_53) == 0x000360, "Member 'UW_RosterReview_EventCard_C::Image_53' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Img_PositionCorner) == 0x000368, "Member 'UW_RosterReview_EventCard_C::Img_PositionCorner' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Lbl_Unknown) == 0x000370, "Member 'UW_RosterReview_EventCard_C::Lbl_Unknown' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, OverviewDetailsBox_1) == 0x000378, "Member 'UW_RosterReview_EventCard_C::OverviewDetailsBox_1' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, OverviewPosition) == 0x000380, "Member 'UW_RosterReview_EventCard_C::OverviewPosition' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, OverviewStatusBox) == 0x000388, "Member 'UW_RosterReview_EventCard_C::OverviewStatusBox' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Portrait_Full) == 0x000390, "Member 'UW_RosterReview_EventCard_C::Portrait_Full' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Position) == 0x000398, "Member 'UW_RosterReview_EventCard_C::Position' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, PositionColorBorder) == 0x0003A0, "Member 'UW_RosterReview_EventCard_C::PositionColorBorder' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, PositionNumber) == 0x0003A8, "Member 'UW_RosterReview_EventCard_C::PositionNumber' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, ProfileImage) == 0x0003B0, "Member 'UW_RosterReview_EventCard_C::ProfileImage' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Rtxt_EventDescription) == 0x0003B8, "Member 'UW_RosterReview_EventCard_C::Rtxt_EventDescription' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Size_EventDetails) == 0x0003C0, "Member 'UW_RosterReview_EventCard_C::Size_EventDetails' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Status) == 0x0003C8, "Member 'UW_RosterReview_EventCard_C::Status' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, StatusBorder) == 0x0003D0, "Member 'UW_RosterReview_EventCard_C::StatusBorder' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, TraitOverlay) == 0x0003D8, "Member 'UW_RosterReview_EventCard_C::TraitOverlay' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_EventDetailTitle) == 0x0003E0, "Member 'UW_RosterReview_EventCard_C::Txt_EventDetailTitle' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_EventTitle) == 0x0003E8, "Member 'UW_RosterReview_EventCard_C::Txt_EventTitle' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_FirstName) == 0x0003F0, "Member 'UW_RosterReview_EventCard_C::Txt_FirstName' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_LastName) == 0x0003F8, "Member 'UW_RosterReview_EventCard_C::Txt_LastName' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_Status) == 0x000400, "Member 'UW_RosterReview_EventCard_C::Txt_Status' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, Txt_TraitUnlocked) == 0x000408, "Member 'UW_RosterReview_EventCard_C::Txt_TraitUnlocked' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, VB_Card) == 0x000410, "Member 'UW_RosterReview_EventCard_C::VB_Card' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, RosterCharacter) == 0x000418, "Member 'UW_RosterReview_EventCard_C::RosterCharacter' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, BlankPortrait) == 0x000420, "Member 'UW_RosterReview_EventCard_C::BlankPortrait' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, ShowEventDetails) == 0x0004A8, "Member 'UW_RosterReview_EventCard_C::ShowEventDetails' has a wrong offset!");
static_assert(offsetof(UW_RosterReview_EventCard_C, OnDetailsRevealed) == 0x0004B0, "Member 'UW_RosterReview_EventCard_C::OnDetailsRevealed' has a wrong offset!");

}

