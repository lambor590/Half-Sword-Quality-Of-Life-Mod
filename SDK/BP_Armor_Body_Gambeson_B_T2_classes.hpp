#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armor_Body_Gambeson_B_T2

#include "Basic.hpp"

#include "BP_Armor_Body_Gambeson_B_T1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Armor_Body_Gambeson_B_T2.BP_Armor_Body_Gambeson_B_T2_C
// 0x0000 (0x07F0 - 0x07F0)
class ABP_Armor_Body_Gambeson_B_T2_C final : public ABP_Armor_Body_Gambeson_B_T1_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Armor_Body_Gambeson_B_T2_C">();
	}
	static class ABP_Armor_Body_Gambeson_B_T2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Armor_Body_Gambeson_B_T2_C>();
	}
};
static_assert(alignof(ABP_Armor_Body_Gambeson_B_T2_C) == 0x000010, "Wrong alignment on ABP_Armor_Body_Gambeson_B_T2_C");
static_assert(sizeof(ABP_Armor_Body_Gambeson_B_T2_C) == 0x0007F0, "Wrong size on ABP_Armor_Body_Gambeson_B_T2_C");

}
