#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_IntelList_Entry

#include "Basic.hpp"

#include "ST_Briefing_Evidence_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "E_Briefing_Intel_Types_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
// 0x0140 (0x0140 - 0x0000)
struct W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature final 
{
public:
	struct FCharacterBio                          Bio;                                               // 0x0000(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature) == 0x000140, "Wrong size on W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature, Bio) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature::Bio' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature final 
{
public:
	struct FST_Briefing_Evidence                  Param_Media;                                       // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature) == 0x0000A0, "Wrong size on W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature, Param_Media) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature::Param_Media' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
// 0x02A8 (0x02A8 - 0x0000)
struct W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Briefing_Intel_Types                        Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1617[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1618[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*              K2Node_CustomEvent_ClickedEntry_1;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Briefing_Evidence                  K2Node_CustomEvent_Media;                          // 0x0030(0x00A0)(HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*              K2Node_DynamicCast_AsW_Briefing_Intel_Entry;       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1619[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Briefing_Intel_Entry_C*              K2Node_CustomEvent_ClickedEntry;                   // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                          K2Node_CustomEvent_Bio;                            // 0x00F0(0x0140)()
	class FText                                   Temp_text_Variable_1;                              // 0x0230(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0248(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161A[0x5];                                     // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_3;                              // 0x0268(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161B[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0288(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry) == 0x0002A8, "Wrong size on W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, EntryPoint) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, Temp_byte_Variable) == 0x000004, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, Temp_text_Variable) == 0x000008, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_Event_IsDesignTime) == 0x000020, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_CustomEvent_Index) == 0x000024, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_CustomEvent_ClickedEntry_1) == 0x000028, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_CustomEvent_ClickedEntry_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_CustomEvent_Media) == 0x000030, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_CustomEvent_Media' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_GetChildAt_ReturnValue) == 0x0000D0, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_DynamicCast_AsW_Briefing_Intel_Entry) == 0x0000D8, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_DynamicCast_AsW_Briefing_Intel_Entry' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_CustomEvent_ClickedEntry) == 0x0000E8, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_CustomEvent_ClickedEntry' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_CustomEvent_Bio) == 0x0000F0, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_CustomEvent_Bio' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, Temp_text_Variable_1) == 0x000230, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, Temp_text_Variable_2) == 0x000248, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_IsValid_ReturnValue) == 0x000260, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000261, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_BooleanAND_ReturnValue) == 0x000262, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, Temp_text_Variable_3) == 0x000268, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_IsValid_ReturnValue_1) == 0x000280, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000281, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, K2Node_Select_Default) == 0x000288, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry, CallFunc_BooleanAND_ReturnValue_1) == 0x0002A0, "Member 'W_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
// 0x0148 (0x0148 - 0x0000)
struct W_Briefing_IntelList_Entry_C_BioClicked final 
{
public:
	class UW_Briefing_Intel_Entry_C*              ClickedEntry;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                          Bio;                                               // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_BioClicked) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_BioClicked");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_BioClicked) == 0x000148, "Wrong size on W_Briefing_IntelList_Entry_C_BioClicked");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_BioClicked, ClickedEntry) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_BioClicked::ClickedEntry' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_BioClicked, Bio) == 0x000008, "Member 'W_Briefing_IntelList_Entry_C_BioClicked::Bio' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
// 0x00A8 (0x00A8 - 0x0000)
struct W_Briefing_IntelList_Entry_C_MediaClicked final 
{
public:
	class UW_Briefing_Intel_Entry_C*              ClickedEntry;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Briefing_Evidence                  Param_Media;                                       // 0x0008(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_MediaClicked) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_MediaClicked");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_MediaClicked) == 0x0000A8, "Wrong size on W_Briefing_IntelList_Entry_C_MediaClicked");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_MediaClicked, ClickedEntry) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_MediaClicked::ClickedEntry' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_MediaClicked, Param_Media) == 0x000008, "Member 'W_Briefing_IntelList_Entry_C_MediaClicked::Param_Media' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
// 0x0004 (0x0004 - 0x0000)
struct W_Briefing_IntelList_Entry_C_ForceClick final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_ForceClick) == 0x000004, "Wrong alignment on W_Briefing_IntelList_Entry_C_ForceClick");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_ForceClick) == 0x000004, "Wrong size on W_Briefing_IntelList_Entry_C_ForceClick");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ForceClick, Param_Index) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_ForceClick::Param_Index' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_IntelList_Entry_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_PreConstruct) == 0x000001, "Wrong alignment on W_Briefing_IntelList_Entry_C_PreConstruct");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_PreConstruct) == 0x000001, "Wrong size on W_Briefing_IntelList_Entry_C_PreConstruct");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
// 0x0180 (0x0180 - 0x0000)
struct W_Briefing_IntelList_Entry_C_InitBios final 
{
public:
	TArray<struct FCharacterBio>                  Param_Bios;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterBio                          CallFunc_Array_Get_Item;                           // 0x0020(0x0140)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161D[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*              CallFunc_Create_ReturnValue;                       // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)> K2Node_CreateDelegate_OutputDelegate;              // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_InitBios) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_InitBios");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_InitBios) == 0x000180, "Wrong size on W_Briefing_IntelList_Entry_C_InitBios");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, Param_Bios) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_InitBios::Param_Bios' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'W_Briefing_IntelList_Entry_C_InitBios::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, Temp_int_Array_Index_Variable) == 0x000014, "Member 'W_Briefing_IntelList_Entry_C_InitBios::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'W_Briefing_IntelList_Entry_C_InitBios::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, CallFunc_Array_Get_Item) == 0x000020, "Member 'W_Briefing_IntelList_Entry_C_InitBios::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, CallFunc_Less_IntInt_ReturnValue) == 0x000160, "Member 'W_Briefing_IntelList_Entry_C_InitBios::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, CallFunc_Add_IntInt_ReturnValue) == 0x000164, "Member 'W_Briefing_IntelList_Entry_C_InitBios::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, CallFunc_Create_ReturnValue) == 0x000168, "Member 'W_Briefing_IntelList_Entry_C_InitBios::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitBios, K2Node_CreateDelegate_OutputDelegate) == 0x000170, "Member 'W_Briefing_IntelList_Entry_C_InitBios::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
// 0x00F0 (0x00F0 - 0x0000)
struct W_Briefing_IntelList_Entry_C_InitMedia final 
{
public:
	TArray<struct FST_Briefing_Evidence>          Param_Media;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_CurrentColumn;                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CurrentRow;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_Briefing_Evidence                  CallFunc_Array_Get_Item;                           // 0x0030(0x00A0)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161F[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)> K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_InitMedia) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_InitMedia");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_InitMedia) == 0x0000F0, "Wrong size on W_Briefing_IntelList_Entry_C_InitMedia");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, Param_Media) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::Param_Media' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, Param_CurrentColumn) == 0x000010, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::Param_CurrentColumn' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, Param_CurrentRow) == 0x000014, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::Param_CurrentRow' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_Create_ReturnValue) == 0x000018, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, Temp_int_Array_Index_Variable) == 0x000024, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_Array_Get_Item) == 0x000030, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_InitMedia, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E8, "Member 'W_Briefing_IntelList_Entry_C_InitMedia::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
// 0x0010 (0x0010 - 0x0000)
struct W_Briefing_IntelList_Entry_C_AddToGrid final 
{
public:
	class UWidget*                                Content;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_AddToGrid) == 0x000008, "Wrong alignment on W_Briefing_IntelList_Entry_C_AddToGrid");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_AddToGrid) == 0x000010, "Wrong size on W_Briefing_IntelList_Entry_C_AddToGrid");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_AddToGrid, Content) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_AddToGrid::Content' has a wrong offset!");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_AddToGrid, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000008, "Member 'W_Briefing_IntelList_Entry_C_AddToGrid::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");

// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_IntelList_Entry_C_ClearActive final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_IntelList_Entry_C_ClearActive) == 0x000001, "Wrong alignment on W_Briefing_IntelList_Entry_C_ClearActive");
static_assert(sizeof(W_Briefing_IntelList_Entry_C_ClearActive) == 0x000001, "Wrong size on W_Briefing_IntelList_Entry_C_ClearActive");
static_assert(offsetof(W_Briefing_IntelList_Entry_C_ClearActive, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'W_Briefing_IntelList_Entry_C_ClearActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

