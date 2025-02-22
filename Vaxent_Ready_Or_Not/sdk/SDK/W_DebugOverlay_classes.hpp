#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DebugOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DebugOverlay.W_DebugOverlay_C
// 0x0088 (0x02E8 - 0x0260)
class UW_DebugOverlay_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BlackText;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BounceVertical;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BouncingTextContainer;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DebugInfoContainer_C*                DebugInfo;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DebugInfoContainer_C*                DebugInfo_AI;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DebugInfoContainer_C*                DebugInfo_Score;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VeryHiddenID;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DevScoreDisplay_C*                   W_DevScoreDisplay;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WhiteText;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bInitialized;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40CD[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       CachedPlayer;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CachedActor;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_DebugOverlay(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, TArray<class UW_DebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class FText CallFunc_GetText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_DebugOverlay_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, bool CallFunc_IsEditorBuild_ReturnValue, bool CallFunc_IsDMOBuild_ReturnValue);
	void CustomEvent_1();
	void HideBounceVertical();
	void ShowBounceVertical();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomEvent_0();
	void Construct();
	void UpdateDebugPanel(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget, int32 CallFunc_GetNumDebugEntries_Return_Value, class FText CallFunc_GetText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class ACyberneticCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetTitle_Return_Value, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_5, class AScoringManager* CallFunc_Get_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IGatherDebugInterface> K2Node_DynamicCast_AsGather_Debug_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FDebugData>& CallFunc_GatherDebugData_OutDebugData, const struct FDebugData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, class AScoringManager* CallFunc_Get_ReturnValue_1, TScriptInterface<class IGatherDebugInterface> K2Node_DynamicCast_AsGather_Debug_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FDebugData>& CallFunc_GatherDebugData_OutDebugData_1, const struct FDebugData& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_3, TScriptInterface<class IGatherDebugInterface> K2Node_DynamicCast_AsGather_Debug_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FDebugData>& CallFunc_GatherDebugData_OutDebugData_2, const struct FDebugData& CallFunc_Array_Get_Item_3, TScriptInterface<class IGatherDebugInterface> K2Node_DynamicCast_AsGather_Debug_Interface_3, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FDebugData>& CallFunc_GatherDebugData_OutDebugData_3, const struct FDebugData& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget_2, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_5, class ACyberneticCharacter* CallFunc_Array_Get_Item_5, bool CallFunc_IsActive_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_4, ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, ESlateVisibility K2Node_Select_Default, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_5, TArray<class AActor*>& CallFunc_GetCollisionIgnoredActors_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void HideDebugElements();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DebugOverlay_C">();
	}
	static class UW_DebugOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DebugOverlay_C>();
	}
};
static_assert(alignof(UW_DebugOverlay_C) == 0x000008, "Wrong alignment on UW_DebugOverlay_C");
static_assert(sizeof(UW_DebugOverlay_C) == 0x0002E8, "Wrong size on UW_DebugOverlay_C");
static_assert(offsetof(UW_DebugOverlay_C, UberGraphFrame) == 0x000260, "Member 'UW_DebugOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, BlackText) == 0x000268, "Member 'UW_DebugOverlay_C::BlackText' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, BounceVertical) == 0x000270, "Member 'UW_DebugOverlay_C::BounceVertical' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, BouncingTextContainer) == 0x000278, "Member 'UW_DebugOverlay_C::BouncingTextContainer' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, DebugInfo) == 0x000280, "Member 'UW_DebugOverlay_C::DebugInfo' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, DebugInfo_AI) == 0x000288, "Member 'UW_DebugOverlay_C::DebugInfo_AI' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, DebugInfo_Score) == 0x000290, "Member 'UW_DebugOverlay_C::DebugInfo_Score' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, TextBlock_0) == 0x000298, "Member 'UW_DebugOverlay_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, TextBlock_1) == 0x0002A0, "Member 'UW_DebugOverlay_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, TextBlock_2) == 0x0002A8, "Member 'UW_DebugOverlay_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, TextBlock_3) == 0x0002B0, "Member 'UW_DebugOverlay_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, VeryHiddenID) == 0x0002B8, "Member 'UW_DebugOverlay_C::VeryHiddenID' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, W_DevScoreDisplay) == 0x0002C0, "Member 'UW_DebugOverlay_C::W_DevScoreDisplay' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, WhiteText) == 0x0002C8, "Member 'UW_DebugOverlay_C::WhiteText' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, bInitialized) == 0x0002D0, "Member 'UW_DebugOverlay_C::bInitialized' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, CachedPlayer) == 0x0002D8, "Member 'UW_DebugOverlay_C::CachedPlayer' has a wrong offset!");
static_assert(offsetof(UW_DebugOverlay_C, CachedActor) == 0x0002E0, "Member 'UW_DebugOverlay_C::CachedActor' has a wrong offset!");

}

