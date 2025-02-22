#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Customization_InfoBox

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"
#include "UMG_structs.hpp"
#include "E_CustomizationGroups_structs.hpp"


namespace SDK::Params
{

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.ExecuteUbergraph_W_Customization_InfoBox
// 0x00C0 (0x00C0 - 0x0000)
struct W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsGamepad;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F69[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_PageName;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoadoutCustomization*                  K2Node_CustomEvent_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECustomizationType                            K2Node_CustomEvent_Type;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F6B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0028(0x0018)()
	float                                         K2Node_Event_Delay_1;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delay;                                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Collapse;                             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0060(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6D[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6E[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox) == 0x000008, "Wrong alignment on W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox");
static_assert(sizeof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox) == 0x0000C0, "Wrong size on W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, EntryPoint) == 0x000000, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_IsGamepad) == 0x000004, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_IsGamepad' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_PageName) == 0x000008, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_PageName' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_IsDesignTime) == 0x000010, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_CustomEvent_Item) == 0x000018, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_CustomEvent_Type) == 0x000020, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_MakeLiteralText_ReturnValue) == 0x000028, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_Delay_1) == 0x000040, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_Delay_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_Delay) == 0x000044, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_Delay' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_Event_Collapse) == 0x000048, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_Event_Collapse' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000058, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000060, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000078, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000080, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000088, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000091, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_BreakVector2D_X) == 0x000094, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_BreakVector2D_Y) == 0x000098, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00009C, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_BreakVector2D_X_1) == 0x0000A0, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_BreakVector2D_Y_1) == 0x0000A4, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0000B8, "Member 'W_Customization_InfoBox_C_ExecuteUbergraph_W_Customization_InfoBox::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.Hide
// 0x0008 (0x0008 - 0x0000)
struct W_Customization_InfoBox_C_Hide final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Collapse;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Customization_InfoBox_C_Hide) == 0x000004, "Wrong alignment on W_Customization_InfoBox_C_Hide");
static_assert(sizeof(W_Customization_InfoBox_C_Hide) == 0x000008, "Wrong size on W_Customization_InfoBox_C_Hide");
static_assert(offsetof(W_Customization_InfoBox_C_Hide, Delay) == 0x000000, "Member 'W_Customization_InfoBox_C_Hide::Delay' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_Hide, Collapse) == 0x000004, "Member 'W_Customization_InfoBox_C_Hide::Collapse' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.Reveal
// 0x0004 (0x0004 - 0x0000)
struct W_Customization_InfoBox_C_Reveal final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_Reveal) == 0x000004, "Wrong alignment on W_Customization_InfoBox_C_Reveal");
static_assert(sizeof(W_Customization_InfoBox_C_Reveal) == 0x000004, "Wrong size on W_Customization_InfoBox_C_Reveal");
static_assert(offsetof(W_Customization_InfoBox_C_Reveal, Delay) == 0x000000, "Member 'W_Customization_InfoBox_C_Reveal::Delay' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.SetCategoryInfo
// 0x0001 (0x0001 - 0x0000)
struct W_Customization_InfoBox_C_SetCategoryInfo final 
{
public:
	ECustomizationType                            Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_SetCategoryInfo) == 0x000001, "Wrong alignment on W_Customization_InfoBox_C_SetCategoryInfo");
static_assert(sizeof(W_Customization_InfoBox_C_SetCategoryInfo) == 0x000001, "Wrong size on W_Customization_InfoBox_C_SetCategoryInfo");
static_assert(offsetof(W_Customization_InfoBox_C_SetCategoryInfo, Type) == 0x000000, "Member 'W_Customization_InfoBox_C_SetCategoryInfo::Type' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.SetItemInfo
// 0x0008 (0x0008 - 0x0000)
struct W_Customization_InfoBox_C_SetItemInfo final 
{
public:
	class ULoadoutCustomization*                  Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_SetItemInfo) == 0x000008, "Wrong alignment on W_Customization_InfoBox_C_SetItemInfo");
static_assert(sizeof(W_Customization_InfoBox_C_SetItemInfo) == 0x000008, "Wrong size on W_Customization_InfoBox_C_SetItemInfo");
static_assert(offsetof(W_Customization_InfoBox_C_SetItemInfo, Param_Item) == 0x000000, "Member 'W_Customization_InfoBox_C_SetItemInfo::Param_Item' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Customization_InfoBox_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Customization_InfoBox_C_PreConstruct) == 0x000001, "Wrong alignment on W_Customization_InfoBox_C_PreConstruct");
static_assert(sizeof(W_Customization_InfoBox_C_PreConstruct) == 0x000001, "Wrong size on W_Customization_InfoBox_C_PreConstruct");
static_assert(offsetof(W_Customization_InfoBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Customization_InfoBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.ChangePage
// 0x0008 (0x0008 - 0x0000)
struct W_Customization_InfoBox_C_ChangePage final 
{
public:
	class FName                                   PageName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_ChangePage) == 0x000004, "Wrong alignment on W_Customization_InfoBox_C_ChangePage");
static_assert(sizeof(W_Customization_InfoBox_C_ChangePage) == 0x000008, "Wrong size on W_Customization_InfoBox_C_ChangePage");
static_assert(offsetof(W_Customization_InfoBox_C_ChangePage, PageName) == 0x000000, "Member 'W_Customization_InfoBox_C_ChangePage::PageName' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.SetInputMode
// 0x0001 (0x0001 - 0x0000)
struct W_Customization_InfoBox_C_SetInputMode final 
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Customization_InfoBox_C_SetInputMode) == 0x000001, "Wrong alignment on W_Customization_InfoBox_C_SetInputMode");
static_assert(sizeof(W_Customization_InfoBox_C_SetInputMode) == 0x000001, "Wrong size on W_Customization_InfoBox_C_SetInputMode");
static_assert(offsetof(W_Customization_InfoBox_C_SetInputMode, IsGamepad) == 0x000000, "Member 'W_Customization_InfoBox_C_SetInputMode::IsGamepad' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.UpdateCategoryText
// 0x0048 (0x0048 - 0x0000)
struct W_Customization_InfoBox_C_UpdateCategoryText final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F6F[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCustomizationCategoryText_Category_Text; // 0x0008(0x0018)()
	E_CustomizationGroups                         CallFunc_GetCustomizationGroupByCategory_Group;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsNotEmpty_NotEmpty;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F70[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCustomizationGroupText_Text;           // 0x0028(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_UpdateCategoryText) == 0x000008, "Wrong alignment on W_Customization_InfoBox_C_UpdateCategoryText");
static_assert(sizeof(W_Customization_InfoBox_C_UpdateCategoryText) == 0x000048, "Wrong size on W_Customization_InfoBox_C_UpdateCategoryText");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, Temp_bool_Variable) == 0x000000, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, Temp_byte_Variable) == 0x000001, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, Temp_byte_Variable_1) == 0x000002, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, CallFunc_GetCustomizationCategoryText_Category_Text) == 0x000008, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::CallFunc_GetCustomizationCategoryText_Category_Text' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, CallFunc_GetCustomizationGroupByCategory_Group) == 0x000020, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::CallFunc_GetCustomizationGroupByCategory_Group' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, CallFunc_TextIsNotEmpty_NotEmpty) == 0x000021, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::CallFunc_TextIsNotEmpty_NotEmpty' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, CallFunc_GetCustomizationGroupText_Text) == 0x000028, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::CallFunc_GetCustomizationGroupText_Text' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateCategoryText, K2Node_Select_Default) == 0x000040, "Member 'W_Customization_InfoBox_C_UpdateCategoryText::K2Node_Select_Default' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.UpdateItemInfo
// 0x0002 (0x0002 - 0x0000)
struct W_Customization_InfoBox_C_UpdateItemInfo final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECustomizationType                            CallFunc_GetCustomizationType_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_UpdateItemInfo) == 0x000001, "Wrong alignment on W_Customization_InfoBox_C_UpdateItemInfo");
static_assert(sizeof(W_Customization_InfoBox_C_UpdateItemInfo) == 0x000002, "Wrong size on W_Customization_InfoBox_C_UpdateItemInfo");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateItemInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'W_Customization_InfoBox_C_UpdateItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Customization_InfoBox_C_UpdateItemInfo, CallFunc_GetCustomizationType_ReturnValue) == 0x000001, "Member 'W_Customization_InfoBox_C_UpdateItemInfo::CallFunc_GetCustomizationType_ReturnValue' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.BackPage
// 0x0001 (0x0001 - 0x0000)
struct W_Customization_InfoBox_C_BackPage final 
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Customization_InfoBox_C_BackPage) == 0x000001, "Wrong alignment on W_Customization_InfoBox_C_BackPage");
static_assert(sizeof(W_Customization_InfoBox_C_BackPage) == 0x000001, "Wrong size on W_Customization_InfoBox_C_BackPage");
static_assert(offsetof(W_Customization_InfoBox_C_BackPage, Handled) == 0x000000, "Member 'W_Customization_InfoBox_C_BackPage::Handled' has a wrong offset!");

// Function W_Customization_InfoBox.W_Customization_InfoBox_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct W_Customization_InfoBox_C_GetFocusTarget final 
{
public:
	class UWidget*                                Focus;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Customization_InfoBox_C_GetFocusTarget) == 0x000008, "Wrong alignment on W_Customization_InfoBox_C_GetFocusTarget");
static_assert(sizeof(W_Customization_InfoBox_C_GetFocusTarget) == 0x000008, "Wrong size on W_Customization_InfoBox_C_GetFocusTarget");
static_assert(offsetof(W_Customization_InfoBox_C_GetFocusTarget, Focus) == 0x000000, "Member 'W_Customization_InfoBox_C_GetFocusTarget::Focus' has a wrong offset!");

}

