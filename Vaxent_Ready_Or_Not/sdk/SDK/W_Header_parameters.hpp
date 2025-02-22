#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Header

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_Header.W_Header_C.ExecuteUbergraph_W_Header
// 0x0060 (0x0060 - 0x0000)
struct W_Header_C_ExecuteUbergraph_W_Header final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4027[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_LabelText;                      // 0x0008(0x0018)()
	bool                                          K2Node_CustomEvent_IsButton;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETextFlowDirection                            K2Node_CustomEvent_Orientation;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4028[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_PageName;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsGamepad;                            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4029[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Delay_1;                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delay;                                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Collapse;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_ExecuteUbergraph_W_Header) == 0x000008, "Wrong alignment on W_Header_C_ExecuteUbergraph_W_Header");
static_assert(sizeof(W_Header_C_ExecuteUbergraph_W_Header) == 0x000060, "Wrong size on W_Header_C_ExecuteUbergraph_W_Header");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, EntryPoint) == 0x000000, "Member 'W_Header_C_ExecuteUbergraph_W_Header::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_CustomEvent_LabelText) == 0x000008, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_CustomEvent_LabelText' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_CustomEvent_IsButton) == 0x000020, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_CustomEvent_IsButton' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_CustomEvent_Orientation) == 0x000021, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_CustomEvent_Orientation' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_PageName) == 0x000024, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_PageName' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_IsGamepad) == 0x00002C, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_IsGamepad' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_Delay_1) == 0x000030, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_Delay_1' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_Delay) == 0x000034, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_Delay' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_Event_Collapse) == 0x000038, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_Event_Collapse' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'W_Header_C_ExecuteUbergraph_W_Header::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000048, "Member 'W_Header_C_ExecuteUbergraph_W_Header::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Header_C_ExecuteUbergraph_W_Header, K2Node_MakeStruct_LinearColor) == 0x000050, "Member 'W_Header_C_ExecuteUbergraph_W_Header::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function W_Header.W_Header_C.Hide
// 0x0008 (0x0008 - 0x0000)
struct W_Header_C_Hide final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Collapse;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_Hide) == 0x000004, "Wrong alignment on W_Header_C_Hide");
static_assert(sizeof(W_Header_C_Hide) == 0x000008, "Wrong size on W_Header_C_Hide");
static_assert(offsetof(W_Header_C_Hide, Delay) == 0x000000, "Member 'W_Header_C_Hide::Delay' has a wrong offset!");
static_assert(offsetof(W_Header_C_Hide, Collapse) == 0x000004, "Member 'W_Header_C_Hide::Collapse' has a wrong offset!");

// Function W_Header.W_Header_C.Reveal
// 0x0004 (0x0004 - 0x0000)
struct W_Header_C_Reveal final 
{
public:
	float                                         Delay;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_Reveal) == 0x000004, "Wrong alignment on W_Header_C_Reveal");
static_assert(sizeof(W_Header_C_Reveal) == 0x000004, "Wrong size on W_Header_C_Reveal");
static_assert(offsetof(W_Header_C_Reveal, Delay) == 0x000000, "Member 'W_Header_C_Reveal::Delay' has a wrong offset!");

// Function W_Header.W_Header_C.Initialize
// 0x0020 (0x0020 - 0x0000)
struct W_Header_C_Initialize final 
{
public:
	class FText                                   Param_LabelText;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsButton;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ETextFlowDirection                            Orientation;                                       // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_Initialize) == 0x000008, "Wrong alignment on W_Header_C_Initialize");
static_assert(sizeof(W_Header_C_Initialize) == 0x000020, "Wrong size on W_Header_C_Initialize");
static_assert(offsetof(W_Header_C_Initialize, Param_LabelText) == 0x000000, "Member 'W_Header_C_Initialize::Param_LabelText' has a wrong offset!");
static_assert(offsetof(W_Header_C_Initialize, IsButton) == 0x000018, "Member 'W_Header_C_Initialize::IsButton' has a wrong offset!");
static_assert(offsetof(W_Header_C_Initialize, Orientation) == 0x000019, "Member 'W_Header_C_Initialize::Orientation' has a wrong offset!");

// Function W_Header.W_Header_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Header_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_PreConstruct) == 0x000001, "Wrong alignment on W_Header_C_PreConstruct");
static_assert(sizeof(W_Header_C_PreConstruct) == 0x000001, "Wrong size on W_Header_C_PreConstruct");
static_assert(offsetof(W_Header_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Header_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Header.W_Header_C.ChangePage
// 0x0008 (0x0008 - 0x0000)
struct W_Header_C_ChangePage final 
{
public:
	class FName                                   PageName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_ChangePage) == 0x000004, "Wrong alignment on W_Header_C_ChangePage");
static_assert(sizeof(W_Header_C_ChangePage) == 0x000008, "Wrong size on W_Header_C_ChangePage");
static_assert(offsetof(W_Header_C_ChangePage, PageName) == 0x000000, "Member 'W_Header_C_ChangePage::PageName' has a wrong offset!");

// Function W_Header.W_Header_C.SetInputMode
// 0x0001 (0x0001 - 0x0000)
struct W_Header_C_SetInputMode final 
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_SetInputMode) == 0x000001, "Wrong alignment on W_Header_C_SetInputMode");
static_assert(sizeof(W_Header_C_SetInputMode) == 0x000001, "Wrong size on W_Header_C_SetInputMode");
static_assert(offsetof(W_Header_C_SetInputMode, IsGamepad) == 0x000000, "Member 'W_Header_C_SetInputMode::IsGamepad' has a wrong offset!");

// Function W_Header.W_Header_C.SetLabel
// 0x0018 (0x0018 - 0x0000)
struct W_Header_C_SetLabel final 
{
public:
	class FText                                   Param_LabelText;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Header_C_SetLabel) == 0x000008, "Wrong alignment on W_Header_C_SetLabel");
static_assert(sizeof(W_Header_C_SetLabel) == 0x000018, "Wrong size on W_Header_C_SetLabel");
static_assert(offsetof(W_Header_C_SetLabel, Param_LabelText) == 0x000000, "Member 'W_Header_C_SetLabel::Param_LabelText' has a wrong offset!");

// Function W_Header.W_Header_C.SetLayout
// 0x0024 (0x0024 - 0x0000)
struct W_Header_C_SetLayout final 
{
public:
	ETextFlowDirection                            Param_Layout;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextFlowDirection                            Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_402B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAugment_HasAugment;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_402C[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_SetLayout) == 0x000004, "Wrong alignment on W_Header_C_SetLayout");
static_assert(sizeof(W_Header_C_SetLayout) == 0x000024, "Wrong size on W_Header_C_SetLayout");
static_assert(offsetof(W_Header_C_SetLayout, Param_Layout) == 0x000000, "Member 'W_Header_C_SetLayout::Param_Layout' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_byte_Variable) == 0x000001, "Member 'W_Header_C_SetLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_float_Variable) == 0x000004, "Member 'W_Header_C_SetLayout::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_float_Variable_1) == 0x000008, "Member 'W_Header_C_SetLayout::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_float_Variable_2) == 0x00000C, "Member 'W_Header_C_SetLayout::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_bool_Variable) == 0x000010, "Member 'W_Header_C_SetLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_byte_Variable_1) == 0x000011, "Member 'W_Header_C_SetLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, Temp_byte_Variable_2) == 0x000012, "Member 'W_Header_C_SetLayout::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'W_Header_C_SetLayout::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, CallFunc_HasAugment_HasAugment) == 0x000014, "Member 'W_Header_C_SetLayout::CallFunc_HasAugment_HasAugment' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, K2Node_Select_Default) == 0x000015, "Member 'W_Header_C_SetLayout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, K2Node_Select_Default_1) == 0x000018, "Member 'W_Header_C_SetLayout::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetLayout, CallFunc_MakeVector2D_ReturnValue) == 0x00001C, "Member 'W_Header_C_SetLayout::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function W_Header.W_Header_C.SetButton
// 0x0001 (0x0001 - 0x0000)
struct W_Header_C_SetButton final 
{
public:
	bool                                          IsButton;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_SetButton) == 0x000001, "Wrong alignment on W_Header_C_SetButton");
static_assert(sizeof(W_Header_C_SetButton) == 0x000001, "Wrong size on W_Header_C_SetButton");
static_assert(offsetof(W_Header_C_SetButton, IsButton) == 0x000000, "Member 'W_Header_C_SetButton::IsButton' has a wrong offset!");

// Function W_Header.W_Header_C.AddAugment
// 0x0018 (0x0018 - 0x0000)
struct W_Header_C_AddAugment final 
{
public:
	class UWidget*                                AugmentWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_AddAugment) == 0x000008, "Wrong alignment on W_Header_C_AddAugment");
static_assert(sizeof(W_Header_C_AddAugment) == 0x000018, "Wrong size on W_Header_C_AddAugment");
static_assert(offsetof(W_Header_C_AddAugment, AugmentWidget) == 0x000000, "Member 'W_Header_C_AddAugment::AugmentWidget' has a wrong offset!");
static_assert(offsetof(W_Header_C_AddAugment, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'W_Header_C_AddAugment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Header_C_AddAugment, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'W_Header_C_AddAugment::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function W_Header.W_Header_C.HasAugment
// 0x0018 (0x0018 - 0x0000)
struct W_Header_C_HasAugment final 
{
public:
	bool                                          Param_HasAugment;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_HasAugment) == 0x000008, "Wrong alignment on W_Header_C_HasAugment");
static_assert(sizeof(W_Header_C_HasAugment) == 0x000018, "Wrong size on W_Header_C_HasAugment");
static_assert(offsetof(W_Header_C_HasAugment, Param_HasAugment) == 0x000000, "Member 'W_Header_C_HasAugment::Param_HasAugment' has a wrong offset!");
static_assert(offsetof(W_Header_C_HasAugment, CallFunc_GetContentSlot_ReturnValue) == 0x000008, "Member 'W_Header_C_HasAugment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Header_C_HasAugment, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'W_Header_C_HasAugment::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function W_Header.W_Header_C.SetTheme
// 0x0020 (0x0020 - 0x0000)
struct W_Header_C_SetTheme final 
{
public:
	bool                                          UseDarkTheme;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402F[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4030[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default_1;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_SetTheme) == 0x000008, "Wrong alignment on W_Header_C_SetTheme");
static_assert(sizeof(W_Header_C_SetTheme) == 0x000020, "Wrong size on W_Header_C_SetTheme");
static_assert(offsetof(W_Header_C_SetTheme, UseDarkTheme) == 0x000000, "Member 'W_Header_C_SetTheme::UseDarkTheme' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetTheme, Temp_bool_Variable) == 0x000001, "Member 'W_Header_C_SetTheme::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetTheme, Temp_bool_Variable_1) == 0x000002, "Member 'W_Header_C_SetTheme::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetTheme, K2Node_Select_Default) == 0x000004, "Member 'W_Header_C_SetTheme::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Header_C_SetTheme, K2Node_Select_Default_1) == 0x000018, "Member 'W_Header_C_SetTheme::K2Node_Select_Default_1' has a wrong offset!");

// Function W_Header.W_Header_C.BackPage
// 0x0001 (0x0001 - 0x0000)
struct W_Header_C_BackPage final 
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Header_C_BackPage) == 0x000001, "Wrong alignment on W_Header_C_BackPage");
static_assert(sizeof(W_Header_C_BackPage) == 0x000001, "Wrong size on W_Header_C_BackPage");
static_assert(offsetof(W_Header_C_BackPage, Handled) == 0x000000, "Member 'W_Header_C_BackPage::Handled' has a wrong offset!");

// Function W_Header.W_Header_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct W_Header_C_GetFocusTarget final 
{
public:
	class UWidget*                                Focus;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Header_C_GetFocusTarget) == 0x000008, "Wrong alignment on W_Header_C_GetFocusTarget");
static_assert(sizeof(W_Header_C_GetFocusTarget) == 0x000008, "Wrong size on W_Header_C_GetFocusTarget");
static_assert(offsetof(W_Header_C_GetFocusTarget, Focus) == 0x000000, "Member 'W_Header_C_GetFocusTarget::Focus' has a wrong offset!");

}

