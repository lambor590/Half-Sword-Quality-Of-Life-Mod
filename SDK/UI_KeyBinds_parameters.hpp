#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyBinds

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_KeyBinds.UI_KeyBinds_C.ExecuteUbergraph_UI_KeyBinds
// 0x00F0 (0x00F0 - 0x0000)
struct UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Controls_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_AudioSettings_C*                    CallFunc_Create_ReturnValue_2;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_GameSettings_C*                     CallFunc_Create_ReturnValue_3;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_DisplaySettings_C*                  CallFunc_Create_ReturnValue_4;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Controls_C*                         CallFunc_Create_ReturnValue_5;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_6;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_7;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_8;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_9;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_2;             // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds) == 0x000008, "Wrong alignment on UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds");
static_assert(sizeof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds) == 0x0000F0, "Wrong size on UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, EntryPoint) == 0x000000, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue_2) == 0x000018, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue_3) == 0x000020, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue_4) == 0x000028, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_Create_ReturnValue_5) == 0x000030, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_2) == 0x000048, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_3) == 0x000050, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_4) == 0x000058, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_5) == 0x000060, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_6) == 0x000068, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_7) == 0x000070, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_8) == 0x000078, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_PlayAnimation_ReturnValue_9) == 0x000080, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_PlayAnimation_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, K2Node_Event_MyGeometry) == 0x000088, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, K2Node_Event_InDeltaTime) == 0x0000C0, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D0, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_IsInputKeyDown_ReturnValue) == 0x0000D8, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x0000D9, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000E0, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_BooleanOR_ReturnValue) == 0x0000E8, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_IsInputKeyDown_ReturnValue_2) == 0x0000E9, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_IsInputKeyDown_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds, CallFunc_BooleanOR_ReturnValue_1) == 0x0000EA, "Member 'UI_KeyBinds_C_ExecuteUbergraph_UI_KeyBinds::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function UI_KeyBinds.UI_KeyBinds_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_KeyBinds_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyBinds_C_Tick) == 0x000004, "Wrong alignment on UI_KeyBinds_C_Tick");
static_assert(sizeof(UI_KeyBinds_C_Tick) == 0x00003C, "Wrong size on UI_KeyBinds_C_Tick");
static_assert(offsetof(UI_KeyBinds_C_Tick, MyGeometry) == 0x000000, "Member 'UI_KeyBinds_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_KeyBinds_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_KeyBinds_C_Tick::InDeltaTime' has a wrong offset!");

}
