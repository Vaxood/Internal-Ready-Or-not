#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_NetworkStatusErrors

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_NetworkStatusErrors.W_NetworkStatusErrors_C
// 0x0030 (0x0290 - 0x0260)
class UW_NetworkStatusErrors_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_49;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_76;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_1;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              Txt_ConnectionError;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_NetworkStatusErrors(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetNetworkConnectionStatus_AvgLag, int32 CallFunc_GetNetworkConnectionStatus_OutLostPackets, int32 CallFunc_GetNetworkConnectionStatus_InLostPackets, int32 CallFunc_GetNetworkConnectionStatus_OutLostPacketPrcnt, int32 CallFunc_GetNetworkConnectionStatus_InLostPacketPrcnt, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNetworkStatus_AvgLag, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Construct();
	void UpdateLagStatus();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_NetworkStatusErrors_C">();
	}
	static class UW_NetworkStatusErrors_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_NetworkStatusErrors_C>();
	}
};
static_assert(alignof(UW_NetworkStatusErrors_C) == 0x000008, "Wrong alignment on UW_NetworkStatusErrors_C");
static_assert(sizeof(UW_NetworkStatusErrors_C) == 0x000290, "Wrong size on UW_NetworkStatusErrors_C");
static_assert(offsetof(UW_NetworkStatusErrors_C, UberGraphFrame) == 0x000260, "Member 'UW_NetworkStatusErrors_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_NetworkStatusErrors_C, Image_49) == 0x000268, "Member 'UW_NetworkStatusErrors_C::Image_49' has a wrong offset!");
static_assert(offsetof(UW_NetworkStatusErrors_C, Image_76) == 0x000270, "Member 'UW_NetworkStatusErrors_C::Image_76' has a wrong offset!");
static_assert(offsetof(UW_NetworkStatusErrors_C, InvalidationBox_0) == 0x000278, "Member 'UW_NetworkStatusErrors_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UW_NetworkStatusErrors_C, InvalidationBox_1) == 0x000280, "Member 'UW_NetworkStatusErrors_C::InvalidationBox_1' has a wrong offset!");
static_assert(offsetof(UW_NetworkStatusErrors_C, Txt_ConnectionError) == 0x000288, "Member 'UW_NetworkStatusErrors_C::Txt_ConnectionError' has a wrong offset!");

}

