#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_NeoLoadout_Slot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.OnClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct W_NeoLoadout_Slot_C_OnClicked__DelegateSignature final 
{
public:
	class ULoadoutItem*                           Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                   Param_Slot;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_NeoLoadout_Slot_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_NeoLoadout_Slot_C_OnClicked__DelegateSignature");
static_assert(sizeof(W_NeoLoadout_Slot_C_OnClicked__DelegateSignature) == 0x000010, "Wrong size on W_NeoLoadout_Slot_C_OnClicked__DelegateSignature");
static_assert(offsetof(W_NeoLoadout_Slot_C_OnClicked__DelegateSignature, Param_Item) == 0x000000, "Member 'W_NeoLoadout_Slot_C_OnClicked__DelegateSignature::Param_Item' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_OnClicked__DelegateSignature, Param_Slot) == 0x000008, "Member 'W_NeoLoadout_Slot_C_OnClicked__DelegateSignature::Param_Slot' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.ExecuteUbergraph_W_NeoLoadout_Slot
// 0x00A0 (0x00A0 - 0x0000)
struct W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41FD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoadoutItem*                           K2Node_CustomEvent_Item_2;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Subtext_1;                      // 0x0018(0x0018)()
	class ULoadoutItem*                           K2Node_CustomEvent_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEquipped;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Highlighted;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41FE[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FF[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	class ULoadoutItem*                           K2Node_CustomEvent_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Subtext;                        // 0x0080(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot) == 0x000008, "Wrong alignment on W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot");
static_assert(sizeof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot) == 0x0000A0, "Wrong size on W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, EntryPoint) == 0x000000, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_byte_Variable) == 0x000004, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_bool_Variable) == 0x000005, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_byte_Variable_1) == 0x000006, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_byte_Variable_2) == 0x000007, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_Event_IsDesignTime) == 0x000008, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Item_2) == 0x000010, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Item_2' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Subtext_1) == 0x000018, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Subtext_1' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Item_1) == 0x000030, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Item_1' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_IsEquipped) == 0x000038, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_IsEquipped' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_Select_Default) == 0x000039, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Highlighted) == 0x00003A, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Highlighted' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, CallFunc_SelectColor_ReturnValue) == 0x00003C, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Item) == 0x000078, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_CustomEvent_Subtext) == 0x000080, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_CustomEvent_Subtext' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_byte_Variable_3) == 0x000098, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, Temp_bool_Variable_1) == 0x000099, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, K2Node_Select_Default_1) == 0x00009A, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, CallFunc_IsValid_ReturnValue) == 0x00009B, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00009C, "Member 'W_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetItemDetails
// 0x0020 (0x0020 - 0x0000)
struct W_NeoLoadout_Slot_C_SetItemDetails final 
{
public:
	class ULoadoutItem*                           Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Subtext;                                           // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_NeoLoadout_Slot_C_SetItemDetails) == 0x000008, "Wrong alignment on W_NeoLoadout_Slot_C_SetItemDetails");
static_assert(sizeof(W_NeoLoadout_Slot_C_SetItemDetails) == 0x000020, "Wrong size on W_NeoLoadout_Slot_C_SetItemDetails");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetItemDetails, Param_Item) == 0x000000, "Member 'W_NeoLoadout_Slot_C_SetItemDetails::Param_Item' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetItemDetails, Subtext) == 0x000008, "Member 'W_NeoLoadout_Slot_C_SetItemDetails::Subtext' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetHighlighted
// 0x0001 (0x0001 - 0x0000)
struct W_NeoLoadout_Slot_C_SetHighlighted final 
{
public:
	bool                                          Highlighted;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_NeoLoadout_Slot_C_SetHighlighted) == 0x000001, "Wrong alignment on W_NeoLoadout_Slot_C_SetHighlighted");
static_assert(sizeof(W_NeoLoadout_Slot_C_SetHighlighted) == 0x000001, "Wrong size on W_NeoLoadout_Slot_C_SetHighlighted");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetHighlighted, Highlighted) == 0x000000, "Member 'W_NeoLoadout_Slot_C_SetHighlighted::Highlighted' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetSelectableItem
// 0x0010 (0x0010 - 0x0000)
struct W_NeoLoadout_Slot_C_SetSelectableItem final 
{
public:
	class ULoadoutItem*                           Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquipped;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_NeoLoadout_Slot_C_SetSelectableItem) == 0x000008, "Wrong alignment on W_NeoLoadout_Slot_C_SetSelectableItem");
static_assert(sizeof(W_NeoLoadout_Slot_C_SetSelectableItem) == 0x000010, "Wrong size on W_NeoLoadout_Slot_C_SetSelectableItem");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetSelectableItem, Param_Item) == 0x000000, "Member 'W_NeoLoadout_Slot_C_SetSelectableItem::Param_Item' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetSelectableItem, IsEquipped) == 0x000008, "Member 'W_NeoLoadout_Slot_C_SetSelectableItem::IsEquipped' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetEquippedItem
// 0x0020 (0x0020 - 0x0000)
struct W_NeoLoadout_Slot_C_SetEquippedItem final 
{
public:
	class ULoadoutItem*                           Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Subtext;                                           // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_NeoLoadout_Slot_C_SetEquippedItem) == 0x000008, "Wrong alignment on W_NeoLoadout_Slot_C_SetEquippedItem");
static_assert(sizeof(W_NeoLoadout_Slot_C_SetEquippedItem) == 0x000020, "Wrong size on W_NeoLoadout_Slot_C_SetEquippedItem");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetEquippedItem, Param_Item) == 0x000000, "Member 'W_NeoLoadout_Slot_C_SetEquippedItem::Param_Item' has a wrong offset!");
static_assert(offsetof(W_NeoLoadout_Slot_C_SetEquippedItem, Subtext) == 0x000008, "Member 'W_NeoLoadout_Slot_C_SetEquippedItem::Subtext' has a wrong offset!");

// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_NeoLoadout_Slot_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_NeoLoadout_Slot_C_PreConstruct) == 0x000001, "Wrong alignment on W_NeoLoadout_Slot_C_PreConstruct");
static_assert(sizeof(W_NeoLoadout_Slot_C_PreConstruct) == 0x000001, "Wrong size on W_NeoLoadout_Slot_C_PreConstruct");
static_assert(offsetof(W_NeoLoadout_Slot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_NeoLoadout_Slot_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

