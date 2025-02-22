#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Secondary_S_Python

#include "Basic.hpp"

#include "Secondary_S_Python_classes.hpp"
#include "Secondary_S_Python_parameters.hpp"


namespace SDK
{

// Function Secondary_S_Python.Secondary_S_Python_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           CallFunc_GetItemMesh_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_S_Python_C::UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Secondary_S_Python_C", "UserConstructionScript");

	Params::Secondary_S_Python_C_UserConstructionScript Parms{};

	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

