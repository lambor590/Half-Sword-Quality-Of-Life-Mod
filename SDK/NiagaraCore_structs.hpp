#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraCore

#include "Basic.hpp"


namespace SDK
{

// Enum NiagaraCore.ENiagaraIterationSource
// NumValues: 0x0004
enum class ENiagaraIterationSource : uint8
{
	Particles                                = 0,
	DataInterface                            = 1,
	DirectSet                                = 2,
	ENiagaraIterationSource_MAX              = 3,
};

// ScriptStruct NiagaraCore.NiagaraVariableCommonReference
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraVariableCommonReference final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                UnderlyingType;                                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraVariableCommonReference) == 0x000008, "Wrong alignment on FNiagaraVariableCommonReference");
static_assert(sizeof(FNiagaraVariableCommonReference) == 0x000010, "Wrong size on FNiagaraVariableCommonReference");
static_assert(offsetof(FNiagaraVariableCommonReference, Name) == 0x000000, "Member 'FNiagaraVariableCommonReference::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableCommonReference, UnderlyingType) == 0x000008, "Member 'FNiagaraVariableCommonReference::UnderlyingType' has a wrong offset!");

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FNiagaraCompileHash) == 0x000008, "Wrong alignment on FNiagaraCompileHash");
static_assert(sizeof(FNiagaraCompileHash) == 0x000010, "Wrong size on FNiagaraCompileHash");
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x000000, "Member 'FNiagaraCompileHash::DataHash' has a wrong offset!");

}
