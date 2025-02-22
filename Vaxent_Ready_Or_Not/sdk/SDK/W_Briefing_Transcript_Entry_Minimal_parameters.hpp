#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Transcript_Entry_Minimal

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.TranscriptEntryClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature final 
{
public:
	float                                         Param_EntryID;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature) == 0x000004, "Wrong alignment on W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature");
static_assert(sizeof(W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature) == 0x000004, "Wrong size on W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature, Param_EntryID) == 0x000000, "Member 'W_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature::Param_EntryID' has a wrong offset!");

// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal
// 0x0168 (0x0168 - 0x0000)
struct W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34FF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3500[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	class UW_Button_C*                            K2Node_ComponentBoundEvent_Button;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3501[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0150(0x0018)()
};
static_assert(alignof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal) == 0x000008, "Wrong alignment on W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal");
static_assert(sizeof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal) == 0x000168, "Wrong size on W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, EntryPoint) == 0x000000, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, Temp_bool_Variable) == 0x000004, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, Temp_text_Variable) == 0x000008, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_Event_IsDesignTime) == 0x000020, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_ComponentBoundEvent_Button) == 0x000068, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, CallFunc_TextIsEmpty_ReturnValue) == 0x0000B8, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_MakeArray_Array) == 0x0000C0, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_Select_Default) == 0x0000E8, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_MakeStruct_FormatArgumentData_2) == 0x000100, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, K2Node_MakeArray_Array_1) == 0x000140, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal, CallFunc_Format_ReturnValue_1) == 0x000150, "Member 'W_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature final 
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature) == 0x000008, "Wrong alignment on W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
static_assert(sizeof(W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature) == 0x000008, "Wrong size on W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature, Button) == 0x000000, "Member 'W_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature::Button' has a wrong offset!");

// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Transcript_Entry_Minimal_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Briefing_Transcript_Entry_Minimal_C_PreConstruct) == 0x000001, "Wrong alignment on W_Briefing_Transcript_Entry_Minimal_C_PreConstruct");
static_assert(sizeof(W_Briefing_Transcript_Entry_Minimal_C_PreConstruct) == 0x000001, "Wrong size on W_Briefing_Transcript_Entry_Minimal_C_PreConstruct");
static_assert(offsetof(W_Briefing_Transcript_Entry_Minimal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Briefing_Transcript_Entry_Minimal_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

