#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommandInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CommandInterface.W_CommandInterface_C
// 0x0058 (0x02F8 - 0x02A0)
class UW_CommandInterface_C final  : public UCommandInterface
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ButtonPress;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CommandWheel;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CoverImage;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DeployImage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FallinImage;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MoveInImage;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedDown;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedLeft;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedRight_1;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedUp;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_CommandInterface(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CommandInterface_C">();
	}
	static class UW_CommandInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CommandInterface_C>();
	}
};
static_assert(alignof(UW_CommandInterface_C) == 0x000008, "Wrong alignment on UW_CommandInterface_C");
static_assert(sizeof(UW_CommandInterface_C) == 0x0002F8, "Wrong size on UW_CommandInterface_C");
static_assert(offsetof(UW_CommandInterface_C, UberGraphFrame) == 0x0002A0, "Member 'UW_CommandInterface_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, ButtonPress) == 0x0002A8, "Member 'UW_CommandInterface_C::ButtonPress' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, CommandWheel) == 0x0002B0, "Member 'UW_CommandInterface_C::CommandWheel' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, CoverImage) == 0x0002B8, "Member 'UW_CommandInterface_C::CoverImage' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, DeployImage) == 0x0002C0, "Member 'UW_CommandInterface_C::DeployImage' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, FallinImage) == 0x0002C8, "Member 'UW_CommandInterface_C::FallinImage' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, MoveInImage) == 0x0002D0, "Member 'UW_CommandInterface_C::MoveInImage' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, SelectedDown) == 0x0002D8, "Member 'UW_CommandInterface_C::SelectedDown' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, SelectedLeft) == 0x0002E0, "Member 'UW_CommandInterface_C::SelectedLeft' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, SelectedRight_1) == 0x0002E8, "Member 'UW_CommandInterface_C::SelectedRight_1' has a wrong offset!");
static_assert(offsetof(UW_CommandInterface_C, SelectedUp) == 0x0002F0, "Member 'UW_CommandInterface_C::SelectedUp' has a wrong offset!");

}

