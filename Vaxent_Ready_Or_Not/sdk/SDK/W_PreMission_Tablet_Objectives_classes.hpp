#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Objectives

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C
// 0x0848 (0x0AA8 - 0x0260)
class UW_PreMission_Tablet_Objectives_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                              Lbl_Objectives;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_Situation;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ObjectiveList;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                  LevelData;                                         // 0x0280(0x0788)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 MissionURL;                                        // 0x0A08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         ObjectiveSpacing;                                  // 0x0A18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3234[0x4];                                     // 0x0A1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            DividerBrush;                                      // 0x0A20(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, const class FString& CallFunc_GetSelectedMode_OutMode, bool CallFunc_GetSelectedMode_ReturnValue, ECOOPMode CallFunc_GetCoopModeFromModeName_ReturnValue, TSoftClassPtr<class UClass> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, class AObjective* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue_1, TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsObjective, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetSelectedModeName_OutName, bool CallFunc_GetSelectedModeName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInLobby_ReturnValue);
	void CustomEvent_0();
	void GetObjectivesByClass();
	void UpdateObjectives();
	void MissionChanged(const class FString& Param_MissionURL, const struct FLevelDataLookupTable& Param_LevelData);
	void Construct();
	void OnLoaded_3BD6E0A444807EC303095394A3607018(TSubclassOf<class UObject> Loaded);
	void AddObjectiveToList(class UW_PreMission_Tablet_Objectives_Entry_C* ObjectiveEntry, bool IsLast, class UImage* Divider, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_Objectives_C">();
	}
	static class UW_PreMission_Tablet_Objectives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_Objectives_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_Objectives_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_Objectives_C");
static_assert(sizeof(UW_PreMission_Tablet_Objectives_C) == 0x000AA8, "Wrong size on UW_PreMission_Tablet_Objectives_C");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, UberGraphFrame) == 0x000260, "Member 'UW_PreMission_Tablet_Objectives_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, Lbl_Objectives) == 0x000268, "Member 'UW_PreMission_Tablet_Objectives_C::Lbl_Objectives' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, Txt_Situation) == 0x000270, "Member 'UW_PreMission_Tablet_Objectives_C::Txt_Situation' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, VB_ObjectiveList) == 0x000278, "Member 'UW_PreMission_Tablet_Objectives_C::VB_ObjectiveList' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, LevelData) == 0x000280, "Member 'UW_PreMission_Tablet_Objectives_C::LevelData' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, MissionURL) == 0x000A08, "Member 'UW_PreMission_Tablet_Objectives_C::MissionURL' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveSpacing) == 0x000A18, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveSpacing' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, DividerBrush) == 0x000A20, "Member 'UW_PreMission_Tablet_Objectives_C::DividerBrush' has a wrong offset!");

}

