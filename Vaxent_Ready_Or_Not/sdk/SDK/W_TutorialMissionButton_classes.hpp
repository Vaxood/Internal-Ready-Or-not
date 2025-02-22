#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TutorialMissionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "W_StandardButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TutorialMissionButton.W_TutorialMissionButton_C
// 0x01A8 (0x0718 - 0x0570)
class UW_TutorialMissionButton_C final  : public UW_StandardButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_TutorialMissionButton_C;          // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTutorialMissionData                   TutorialData;                                      // 0x0578(0x01A0)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_W_TutorialMissionButton(int32 EntryPoint, TDelegate<void(class UW_StandardButton_C* CallingButton)> K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATutorialGS* K2Node_DynamicCast_AsTutorial_GS, bool K2Node_DynamicCast_bSuccess, class UW_StandardButton_C* K2Node_CustomEvent_CallingButton);
	void Destruct();
	void UpdateTutorialMissionData(class UW_StandardButton_C* CallingButton);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TutorialMissionButton_C">();
	}
	static class UW_TutorialMissionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TutorialMissionButton_C>();
	}
};
static_assert(alignof(UW_TutorialMissionButton_C) == 0x000008, "Wrong alignment on UW_TutorialMissionButton_C");
static_assert(sizeof(UW_TutorialMissionButton_C) == 0x000718, "Wrong size on UW_TutorialMissionButton_C");
static_assert(offsetof(UW_TutorialMissionButton_C, UberGraphFrame_W_TutorialMissionButton_C) == 0x000570, "Member 'UW_TutorialMissionButton_C::UberGraphFrame_W_TutorialMissionButton_C' has a wrong offset!");
static_assert(offsetof(UW_TutorialMissionButton_C, TutorialData) == 0x000578, "Member 'UW_TutorialMissionButton_C::TutorialData' has a wrong offset!");

}

