#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosVehiclesEngine

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ChaosVehiclesEngine.ChaosVehicles
// 0x0000 (0x0028 - 0x0028)
class UChaosVehicles final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosVehicles">();
	}
	static class UChaosVehicles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosVehicles>();
	}
};
static_assert(alignof(UChaosVehicles) == 0x000008, "Wrong alignment on UChaosVehicles");
static_assert(sizeof(UChaosVehicles) == 0x000028, "Wrong size on UChaosVehicles");

}
