#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BriefingMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_BriefingMain.W_BriefingMain_C
// 0x0070 (0x0340 - 0x02D0)
class alignas(0x10) UW_BriefingMain_C final  : public UBriefingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BriefingText;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CivilianBios;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelNickname;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ObjectiveString;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SuspectBios;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimelineString;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*                W_BriefingTaskButton;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*                W_BriefingTaskButton_1;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*                W_BriefingTaskButton_2;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*                W_BriefingTaskButton_3;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPreMissionPlanning*                    PreMissionPlanning;                                // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_BriefingTaskButton_C*>        BriefingTaskButtons;                               // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_W_BriefingMain(int32 EntryPoint, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class UW_BriefingBio_ProfileRight_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetWhiteboardObjectiveText_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetLevelNickname_OutNickname, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FCharacterBio& CallFunc_Array_Get_Item_1, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet, class UTexture2D* CallFunc_GetBioDetails_ProfileImage, const class FString& CallFunc_GetBioDetails_OutDescription, const class FString& CallFunc_GetBioDetails_OutBioText, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, const struct FCharacterBio& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet_1, class UTexture2D* CallFunc_GetBioDetails_ProfileImage_1, const class FString& CallFunc_GetBioDetails_OutDescription_1, const class FString& CallFunc_GetBioDetails_OutBioText_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const class FString& CallFunc_GetWhiteboardTimelineAsString_OutString, class FText CallFunc_Conv_StringToText_ReturnValue_7, TArray<class UW_BriefingTaskButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingBio_ProfileLeft_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetBriefingTaskButtonsActive(bool Active, bool IsActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_BriefingMain_C">();
	}
	static class UW_BriefingMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_BriefingMain_C>();
	}
};
static_assert(alignof(UW_BriefingMain_C) == 0x000010, "Wrong alignment on UW_BriefingMain_C");
static_assert(sizeof(UW_BriefingMain_C) == 0x000340, "Wrong size on UW_BriefingMain_C");
static_assert(offsetof(UW_BriefingMain_C, UberGraphFrame) == 0x0002D0, "Member 'UW_BriefingMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, BriefingText) == 0x0002D8, "Member 'UW_BriefingMain_C::BriefingText' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, CivilianBios) == 0x0002E0, "Member 'UW_BriefingMain_C::CivilianBios' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, LevelNickname) == 0x0002E8, "Member 'UW_BriefingMain_C::LevelNickname' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, ObjectiveString) == 0x0002F0, "Member 'UW_BriefingMain_C::ObjectiveString' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, SuspectBios) == 0x0002F8, "Member 'UW_BriefingMain_C::SuspectBios' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, TimelineString) == 0x000300, "Member 'UW_BriefingMain_C::TimelineString' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, W_BriefingTaskButton) == 0x000308, "Member 'UW_BriefingMain_C::W_BriefingTaskButton' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, W_BriefingTaskButton_1) == 0x000310, "Member 'UW_BriefingMain_C::W_BriefingTaskButton_1' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, W_BriefingTaskButton_2) == 0x000318, "Member 'UW_BriefingMain_C::W_BriefingTaskButton_2' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, W_BriefingTaskButton_3) == 0x000320, "Member 'UW_BriefingMain_C::W_BriefingTaskButton_3' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, PreMissionPlanning) == 0x000328, "Member 'UW_BriefingMain_C::PreMissionPlanning' has a wrong offset!");
static_assert(offsetof(UW_BriefingMain_C, BriefingTaskButtons) == 0x000330, "Member 'UW_BriefingMain_C::BriefingTaskButtons' has a wrong offset!");

}

