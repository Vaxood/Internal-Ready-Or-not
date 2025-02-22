#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Roster_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Roster_Entry.W_PreMission_Tablet_Roster_Entry_C
// 0x0028 (0x0288 - 0x0260)
class UW_PreMission_Tablet_Roster_Entry_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                              Txt_PlayerName;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                     W_OfficerMarker;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                 PlayerState;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry(int32 EntryPoint, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_Roster_Entry_C">();
	}
	static class UW_PreMission_Tablet_Roster_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_Roster_Entry_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_Roster_Entry_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_Roster_Entry_C");
static_assert(sizeof(UW_PreMission_Tablet_Roster_Entry_C) == 0x000288, "Wrong size on UW_PreMission_Tablet_Roster_Entry_C");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, UberGraphFrame) == 0x000260, "Member 'UW_PreMission_Tablet_Roster_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, Txt_PlayerName) == 0x000268, "Member 'UW_PreMission_Tablet_Roster_Entry_C::Txt_PlayerName' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, W_Button) == 0x000270, "Member 'UW_PreMission_Tablet_Roster_Entry_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, W_OfficerMarker) == 0x000278, "Member 'UW_PreMission_Tablet_Roster_Entry_C::W_OfficerMarker' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Roster_Entry_C, PlayerState) == 0x000280, "Member 'UW_PreMission_Tablet_Roster_Entry_C::PlayerState' has a wrong offset!");

}

