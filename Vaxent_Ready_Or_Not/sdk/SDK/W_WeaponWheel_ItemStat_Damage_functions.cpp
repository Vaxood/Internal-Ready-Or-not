#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WeaponWheel_ItemStat_Damage

#include "Basic.hpp"

#include "W_WeaponWheel_ItemStat_Damage_classes.hpp"
#include "W_WeaponWheel_ItemStat_Damage_parameters.hpp"


namespace SDK
{

// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Damage_C::ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage");

	Params::W_WeaponWheel_ItemStat_Damage_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Damage Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_ItemStat_Damage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "PreConstruct");

	Params::W_WeaponWheel_ItemStat_Damage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnWheelCreated
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_Damage_C::OnWheelCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "OnWheelCreated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_Damage_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "OnRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Damage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "Tick");

	Params::W_WeaponWheel_ItemStat_Damage_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WeaponWheel_ItemStat_Damage.W_WeaponWheel_ItemStat_Damage_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_Damage_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Damage_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}

