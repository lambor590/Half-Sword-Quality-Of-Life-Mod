#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WinScreen_Versus

#include "Basic.hpp"

#include "UI_WinScreen_Versus_classes.hpp"
#include "UI_WinScreen_Versus_parameters.hpp"


namespace SDK
{

// Function UI_WinScreen_Versus.UI_WinScreen_Versus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WinScreen_Versus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WinScreen_Versus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WinScreen_Versus.UI_WinScreen_Versus_C.ExecuteUbergraph_UI_WinScreen_Versus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WinScreen_Versus_C::ExecuteUbergraph_UI_WinScreen_Versus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WinScreen_Versus_C", "ExecuteUbergraph_UI_WinScreen_Versus");

	Params::UI_WinScreen_Versus_C_ExecuteUbergraph_UI_WinScreen_Versus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
