#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MunitionsOverviewSlot_Element

#include "Basic.hpp"

#include "W_MunitionsOverviewSlot_Element_classes.hpp"
#include "W_MunitionsOverviewSlot_Element_parameters.hpp"


namespace SDK
{

// Function W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C.AddNewImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize                  K2Node_MakeStruct_SlateChildSize                       (NoDestructor)
// class UImage*                           CallFunc_SpawnObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MunitionsOverviewSlot_Element_C::AddNewImage(class UTexture2D* Texture, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MunitionsOverviewSlot_Element_C", "AddNewImage");

	Params::W_MunitionsOverviewSlot_Element_C_AddNewImage Parms{};

	Parms.Texture = Texture;
	Parms.K2Node_MakeStruct_SlateChildSize = std::move(K2Node_MakeStruct_SlateChildSize);
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

