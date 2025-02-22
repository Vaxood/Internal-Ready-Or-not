#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RosterSelection_Card

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RosterSelection_Card.W_RosterSelection_Card_C
// 0x0288 (0x05B8 - 0x0330)
class UW_RosterSelection_Card_C final  : public URosterSelectionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimReveal;                                        // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          Bio;                                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        btn_Card;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Details;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DetailsSizeBox;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Deployables;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Details;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBorder;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBorder_1;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_136;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSpinner;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_div_2;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_LongTactical;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PositionCorner;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PositionCorner_1;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Primary;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_Unknown;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Lbl_Unknown_1;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Loadout;                                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LockedTraitBox;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         OverviewDetailsBox_1;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OverviewPosition;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OverviewPosition_1;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OverviewStatusBox;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Portrait_Full;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Portrait_Small;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Position;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Position_1;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PositionColorBorder;                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PositionColorBorder_1;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PositionNumber;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PositionNumber_1;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProfileImage;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProfileImage_1;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Rtxt_Bio;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Bio;                                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Portrait;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SpecQualInfoBox;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Status;                                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Txb_SpecQual_Desc;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_DOB;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_EnlistDate;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_FirstName;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_LastName;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_LongTactical;                                  // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Primary;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_SerialNo;                                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_SpecQual;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Status;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Card;                                           // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*     W_Loadout_Munition_SummaryEntry;                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*     W_Loadout_Munition_SummaryEntry_1;                 // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*     W_Loadout_Munition_SummaryEntry_2;                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Bio_C*                        W_Roster_Bio;                                      // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_EKG_C*                        W_Roster_EKG;                                      // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterSelection_C*                   RosterSelection;                                   // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URosterCharacter*                       RosterCharacter;                                   // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERosterSquadPosition                          DebugPosition;                                     // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugHover;                                        // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Hidden;                                            // 0x051A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartHidden;                                       // 0x051B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_32CE[0x4];                                     // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BlankPortrait;                                     // 0x0520(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Reveal_Delay;                                      // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadoutHidden;                                     // 0x05AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FullDetails;                                       // 0x05AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32CF[0x2];                                     // 0x05AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Width;                                             // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFullPortrait;                                   // 0x05B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Clickable;                                         // 0x05B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void OnClicked__DelegateSignature(class UW_RosterSelection_Card_C* Card);
	void ExecuteUbergraph_W_RosterSelection_Card(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class FName K2Node_Event_PageName, const struct FSlateColor& K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsGamepad, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_4, bool K2Node_Event_IsDesignTime, class FText Temp_text_Variable, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class FText Temp_text_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable_2, class URosterCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_ShowDetails, bool K2Node_CustomEvent_Compare, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_FormatBio_OutText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_StressPercentageAsStatus_StatusText_1, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor_1, class FText CallFunc_Format_ReturnValue, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsInLobby_ReturnValue, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_IsInLobby_ReturnValue_1, ERosterSquadPosition Temp_byte_Variable_10, ESlateVisibility K2Node_Select_Default_4, class FText K2Node_Select_Default_5);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void QuickHide();
	void SetCharacter(class URosterCharacter* Character, bool ShowDetails, bool Compare);
	void AnimHidden();
	void Hide(float Delay, bool Collapse);
	void AnimRevealed();
	void Reveal(float Delay);
	void PreConstruct(bool IsDesignTime);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void OnLoaded_30A4DB04400864656FB7D9A5A7B21DAF(class UObject* Loaded);
	void SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetPosition(ERosterSquadPosition Param_Position, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ERosterSquadPosition Temp_byte_Variable_2, float Temp_float_Variable, ESlateVisibility K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, ERosterSquadPosition Temp_byte_Variable_3, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, ERosterSquadPosition Temp_byte_Variable_4, EHorizontalAlignment Temp_byte_Variable_5, EHorizontalAlignment Temp_byte_Variable_6, EHorizontalAlignment Temp_byte_Variable_7, EHorizontalAlignment Temp_byte_Variable_8, EHorizontalAlignment Temp_byte_Variable_9, ERosterSquadPosition Temp_byte_Variable_10, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_1, EHorizontalAlignment K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText K2Node_Select_Default_4, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
	void BlankDetails(class FText CallFunc_MakeLiteralText_ReturnValue);
	void UpdateLoadout(const TMap<class UClass*, int32>& DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables, bool CallFunc_IsValid_ReturnValue, const struct FRosterLoadout& CallFunc_GetCharacterLoadout_ReturnValue);
	void GetPrimaryIcon(class UClass* PrimaryItemClass, TSoftObjectPtr<class UTexture2D>* Param_Image, TSoftObjectPtr<class UTexture2D> OutImage, class UItemData* GameItemData, bool CallFunc_IsValidClass_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPrimaryInfo(class UClass* PrimaryItemData, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void SetLongTacticalInfo(class UClass* LongTacticalItemData, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void GetLongTacticalIcon(class UClass* LongTacticalItemClass, TSoftObjectPtr<class UTexture2D>* Param_Image, TSoftObjectPtr<class UTexture2D> OutImage, class UItemData* GameItemData, bool CallFunc_IsValidClass_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetDeployables(TArray<class UClass*>& Grenades, TArray<class UClass*>& Tactical, const TMap<class UClass*, int32>& DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_Loadout_Munition_SummaryEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void HideLoadout(bool Hide, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void InitLayout(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3);
	void BackPage(bool* Handled);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RosterSelection_Card_C">();
	}
	static class UW_RosterSelection_Card_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RosterSelection_Card_C>();
	}
};
static_assert(alignof(UW_RosterSelection_Card_C) == 0x000008, "Wrong alignment on UW_RosterSelection_Card_C");
static_assert(sizeof(UW_RosterSelection_Card_C) == 0x0005B8, "Wrong size on UW_RosterSelection_Card_C");
static_assert(offsetof(UW_RosterSelection_Card_C, UberGraphFrame) == 0x000330, "Member 'UW_RosterSelection_Card_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, AnimReveal) == 0x000338, "Member 'UW_RosterSelection_Card_C::AnimReveal' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Bio) == 0x000340, "Member 'UW_RosterSelection_Card_C::Bio' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, btn_Card) == 0x000348, "Member 'UW_RosterSelection_Card_C::btn_Card' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Details) == 0x000350, "Member 'UW_RosterSelection_Card_C::Details' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, DetailsSizeBox) == 0x000358, "Member 'UW_RosterSelection_Card_C::DetailsSizeBox' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, HB_Deployables) == 0x000360, "Member 'UW_RosterSelection_Card_C::HB_Deployables' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, HB_Details) == 0x000368, "Member 'UW_RosterSelection_Card_C::HB_Details' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, HoverBorder) == 0x000370, "Member 'UW_RosterSelection_Card_C::HoverBorder' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, HoverBorder_1) == 0x000378, "Member 'UW_RosterSelection_Card_C::HoverBorder_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Image) == 0x000380, "Member 'UW_RosterSelection_Card_C::Image' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Image_136) == 0x000388, "Member 'UW_RosterSelection_Card_C::Image_136' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, ImageSpinner) == 0x000390, "Member 'UW_RosterSelection_Card_C::ImageSpinner' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Img_div_2) == 0x000398, "Member 'UW_RosterSelection_Card_C::Img_div_2' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Img_LongTactical) == 0x0003A0, "Member 'UW_RosterSelection_Card_C::Img_LongTactical' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Img_PositionCorner) == 0x0003A8, "Member 'UW_RosterSelection_Card_C::Img_PositionCorner' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Img_PositionCorner_1) == 0x0003B0, "Member 'UW_RosterSelection_Card_C::Img_PositionCorner_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Img_Primary) == 0x0003B8, "Member 'UW_RosterSelection_Card_C::Img_Primary' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Lbl_Unknown) == 0x0003C0, "Member 'UW_RosterSelection_Card_C::Lbl_Unknown' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Lbl_Unknown_1) == 0x0003C8, "Member 'UW_RosterSelection_Card_C::Lbl_Unknown_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Loadout) == 0x0003D0, "Member 'UW_RosterSelection_Card_C::Loadout' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, LockedTraitBox) == 0x0003D8, "Member 'UW_RosterSelection_Card_C::LockedTraitBox' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, OverviewDetailsBox_1) == 0x0003E0, "Member 'UW_RosterSelection_Card_C::OverviewDetailsBox_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, OverviewPosition) == 0x0003E8, "Member 'UW_RosterSelection_Card_C::OverviewPosition' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, OverviewPosition_1) == 0x0003F0, "Member 'UW_RosterSelection_Card_C::OverviewPosition_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, OverviewStatusBox) == 0x0003F8, "Member 'UW_RosterSelection_Card_C::OverviewStatusBox' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Portrait_Full) == 0x000400, "Member 'UW_RosterSelection_Card_C::Portrait_Full' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Portrait_Small) == 0x000408, "Member 'UW_RosterSelection_Card_C::Portrait_Small' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Position) == 0x000410, "Member 'UW_RosterSelection_Card_C::Position' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Position_1) == 0x000418, "Member 'UW_RosterSelection_Card_C::Position_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, PositionColorBorder) == 0x000420, "Member 'UW_RosterSelection_Card_C::PositionColorBorder' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, PositionColorBorder_1) == 0x000428, "Member 'UW_RosterSelection_Card_C::PositionColorBorder_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, PositionNumber) == 0x000430, "Member 'UW_RosterSelection_Card_C::PositionNumber' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, PositionNumber_1) == 0x000438, "Member 'UW_RosterSelection_Card_C::PositionNumber_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, ProfileImage) == 0x000440, "Member 'UW_RosterSelection_Card_C::ProfileImage' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, ProfileImage_1) == 0x000448, "Member 'UW_RosterSelection_Card_C::ProfileImage_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Rtxt_Bio) == 0x000450, "Member 'UW_RosterSelection_Card_C::Rtxt_Bio' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Size_Bio) == 0x000458, "Member 'UW_RosterSelection_Card_C::Size_Bio' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Size_Portrait) == 0x000460, "Member 'UW_RosterSelection_Card_C::Size_Portrait' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, SpecQualInfoBox) == 0x000468, "Member 'UW_RosterSelection_Card_C::SpecQualInfoBox' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Status) == 0x000470, "Member 'UW_RosterSelection_Card_C::Status' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txb_SpecQual_Desc) == 0x000478, "Member 'UW_RosterSelection_Card_C::Txb_SpecQual_Desc' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_DOB) == 0x000480, "Member 'UW_RosterSelection_Card_C::Txt_DOB' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_EnlistDate) == 0x000488, "Member 'UW_RosterSelection_Card_C::Txt_EnlistDate' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_FirstName) == 0x000490, "Member 'UW_RosterSelection_Card_C::Txt_FirstName' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_LastName) == 0x000498, "Member 'UW_RosterSelection_Card_C::Txt_LastName' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_LongTactical) == 0x0004A0, "Member 'UW_RosterSelection_Card_C::Txt_LongTactical' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_Primary) == 0x0004A8, "Member 'UW_RosterSelection_Card_C::Txt_Primary' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_SerialNo) == 0x0004B0, "Member 'UW_RosterSelection_Card_C::Txt_SerialNo' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_SpecQual) == 0x0004B8, "Member 'UW_RosterSelection_Card_C::Txt_SpecQual' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Txt_Status) == 0x0004C0, "Member 'UW_RosterSelection_Card_C::Txt_Status' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, VB_Card) == 0x0004C8, "Member 'UW_RosterSelection_Card_C::VB_Card' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, W_Loadout_Munition_SummaryEntry) == 0x0004D0, "Member 'UW_RosterSelection_Card_C::W_Loadout_Munition_SummaryEntry' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, W_Loadout_Munition_SummaryEntry_1) == 0x0004D8, "Member 'UW_RosterSelection_Card_C::W_Loadout_Munition_SummaryEntry_1' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, W_Loadout_Munition_SummaryEntry_2) == 0x0004E0, "Member 'UW_RosterSelection_Card_C::W_Loadout_Munition_SummaryEntry_2' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, W_Roster_Bio) == 0x0004E8, "Member 'UW_RosterSelection_Card_C::W_Roster_Bio' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, W_Roster_EKG) == 0x0004F0, "Member 'UW_RosterSelection_Card_C::W_Roster_EKG' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, RosterSelection) == 0x0004F8, "Member 'UW_RosterSelection_Card_C::RosterSelection' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, OnClicked) == 0x000500, "Member 'UW_RosterSelection_Card_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, RosterCharacter) == 0x000510, "Member 'UW_RosterSelection_Card_C::RosterCharacter' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, DebugPosition) == 0x000518, "Member 'UW_RosterSelection_Card_C::DebugPosition' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, DebugHover) == 0x000519, "Member 'UW_RosterSelection_Card_C::DebugHover' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Hidden) == 0x00051A, "Member 'UW_RosterSelection_Card_C::Hidden' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, StartHidden) == 0x00051B, "Member 'UW_RosterSelection_Card_C::StartHidden' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, BlankPortrait) == 0x000520, "Member 'UW_RosterSelection_Card_C::BlankPortrait' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Reveal_Delay) == 0x0005A8, "Member 'UW_RosterSelection_Card_C::Reveal_Delay' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, LoadoutHidden) == 0x0005AC, "Member 'UW_RosterSelection_Card_C::LoadoutHidden' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, FullDetails) == 0x0005AD, "Member 'UW_RosterSelection_Card_C::FullDetails' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Width) == 0x0005B0, "Member 'UW_RosterSelection_Card_C::Width' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, UseFullPortrait) == 0x0005B4, "Member 'UW_RosterSelection_Card_C::UseFullPortrait' has a wrong offset!");
static_assert(offsetof(UW_RosterSelection_Card_C, Clickable) == 0x0005B5, "Member 'UW_RosterSelection_Card_C::Clickable' has a wrong offset!");

}

