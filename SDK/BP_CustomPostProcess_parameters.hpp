#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomPostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomPostProcess.BP_CustomPostProcess_C.ExecuteUbergraph_BP_CustomPostProcess
// 0x0700 (0x0700 - 0x0000)
struct BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_CustomEvent_PP;                             // 0x0010(0x06F0)()
};
static_assert(alignof(BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess) == 0x000010, "Wrong alignment on BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess");
static_assert(sizeof(BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess) == 0x000700, "Wrong size on BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess");
static_assert(offsetof(BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess, EntryPoint) == 0x000000, "Member 'BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess, K2Node_CustomEvent_PP) == 0x000010, "Member 'BP_CustomPostProcess_C_ExecuteUbergraph_BP_CustomPostProcess::K2Node_CustomEvent_PP' has a wrong offset!");

// Function BP_CustomPostProcess.BP_CustomPostProcess_C.getPostProcess
// 0x06F0 (0x06F0 - 0x0000)
struct BP_CustomPostProcess_C_GetPostProcess final
{
public:
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0000(0x06F0)(Parm, OutParm)
};
static_assert(alignof(BP_CustomPostProcess_C_GetPostProcess) == 0x000010, "Wrong alignment on BP_CustomPostProcess_C_GetPostProcess");
static_assert(sizeof(BP_CustomPostProcess_C_GetPostProcess) == 0x0006F0, "Wrong size on BP_CustomPostProcess_C_GetPostProcess");
static_assert(offsetof(BP_CustomPostProcess_C_GetPostProcess, PostProcessSettings) == 0x000000, "Member 'BP_CustomPostProcess_C_GetPostProcess::PostProcessSettings' has a wrong offset!");

// Function BP_CustomPostProcess.BP_CustomPostProcess_C.UpdatePostProcess
// 0x06F0 (0x06F0 - 0x0000)
struct BP_CustomPostProcess_C_UpdatePostProcess final
{
public:
	struct FPostProcessSettings                   Param_PP;                                          // 0x0000(0x06F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_CustomPostProcess_C_UpdatePostProcess) == 0x000010, "Wrong alignment on BP_CustomPostProcess_C_UpdatePostProcess");
static_assert(sizeof(BP_CustomPostProcess_C_UpdatePostProcess) == 0x0006F0, "Wrong size on BP_CustomPostProcess_C_UpdatePostProcess");
static_assert(offsetof(BP_CustomPostProcess_C_UpdatePostProcess, Param_PP) == 0x000000, "Member 'BP_CustomPostProcess_C_UpdatePostProcess::Param_PP' has a wrong offset!");

}
