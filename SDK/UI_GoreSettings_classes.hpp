#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GoreSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GoreSettings.UI_GoreSettings_C
// 0x0100 (0x03E0 - 0x02E0)
class UUI_GoreSettings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverBack;                                         // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAudio;                                        // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverControls;                                     // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverDisplay;                                      // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                BackButton_1;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                BodyDensitySlid;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_1;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_2;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_27;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GraphicsDown;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GraphicsUp;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_9;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_12;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_1;                                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x03A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         GraphicsLevel;                                     // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar;                                            // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Go_Back_To;                                        // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UGI_Settings_C*                         GI_Settings;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USG_Settings_C*                         SG_Settings;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AWillie_BP_C*                           My_Master__Willie_;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Gore_Preset_Int;                                   // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__UI_Controls_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_27_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_27_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSettings_Button_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GoreSettings_GraphicsDown_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_GoreSettings_GraphicsUp_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Settings_AuVi_Slider_1_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_Settings_Game_BodyDensitySlid_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_Settings_Game_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Settings_Game_Button_27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_GoreSettings(int32 EntryPoint);
	float Get_BoneSnappingSlid_Value();
	float Get_Slider_DamagePlayer_Value();
	float Get_Slider_LockOnSlider_Value();
	struct FSlateBrush GetBrush();
	class FText GetText();
	float GetValue();
	float GetValue_0();
	float GetValue_1();
	float GetValue_2();
	float GetValue_3();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GoreSettings_C">();
	}
	static class UUI_GoreSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GoreSettings_C>();
	}
};
static_assert(alignof(UUI_GoreSettings_C) == 0x000008, "Wrong alignment on UUI_GoreSettings_C");
static_assert(sizeof(UUI_GoreSettings_C) == 0x0003E0, "Wrong size on UUI_GoreSettings_C");
static_assert(offsetof(UUI_GoreSettings_C, UberGraphFrame) == 0x0002E0, "Member 'UUI_GoreSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, HoverBack) == 0x0002E8, "Member 'UUI_GoreSettings_C::HoverBack' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, HoverAudio) == 0x0002F0, "Member 'UUI_GoreSettings_C::HoverAudio' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, HoverControls) == 0x0002F8, "Member 'UUI_GoreSettings_C::HoverControls' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, HoverDisplay) == 0x000300, "Member 'UUI_GoreSettings_C::HoverDisplay' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, BackButton_1) == 0x000308, "Member 'UUI_GoreSettings_C::BackButton_1' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, BodyDensitySlid) == 0x000310, "Member 'UUI_GoreSettings_C::BodyDensitySlid' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Button) == 0x000318, "Member 'UUI_GoreSettings_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Button_1) == 0x000320, "Member 'UUI_GoreSettings_C::Button_1' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Button_2) == 0x000328, "Member 'UUI_GoreSettings_C::Button_2' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Button_27) == 0x000330, "Member 'UUI_GoreSettings_C::Button_27' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, GraphicsDown) == 0x000338, "Member 'UUI_GoreSettings_C::GraphicsDown' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, GraphicsUp) == 0x000340, "Member 'UUI_GoreSettings_C::GraphicsUp' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image) == 0x000348, "Member 'UUI_GoreSettings_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_0) == 0x000350, "Member 'UUI_GoreSettings_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_1) == 0x000358, "Member 'UUI_GoreSettings_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_2) == 0x000360, "Member 'UUI_GoreSettings_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_3) == 0x000368, "Member 'UUI_GoreSettings_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_4) == 0x000370, "Member 'UUI_GoreSettings_C::Image_4' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_5) == 0x000378, "Member 'UUI_GoreSettings_C::Image_5' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_9) == 0x000380, "Member 'UUI_GoreSettings_C::Image_9' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_10) == 0x000388, "Member 'UUI_GoreSettings_C::Image_10' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_11) == 0x000390, "Member 'UUI_GoreSettings_C::Image_11' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Image_12) == 0x000398, "Member 'UUI_GoreSettings_C::Image_12' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Slider_1) == 0x0003A0, "Member 'UUI_GoreSettings_C::Slider_1' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, TextBlock_0) == 0x0003A8, "Member 'UUI_GoreSettings_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, GraphicsLevel) == 0x0003B0, "Member 'UUI_GoreSettings_C::GraphicsLevel' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, NewVar) == 0x0003B4, "Member 'UUI_GoreSettings_C::NewVar' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Go_Back_To) == 0x0003B8, "Member 'UUI_GoreSettings_C::Go_Back_To' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, GI_Settings) == 0x0003C0, "Member 'UUI_GoreSettings_C::GI_Settings' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, SG_Settings) == 0x0003C8, "Member 'UUI_GoreSettings_C::SG_Settings' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, My_Master__Willie_) == 0x0003D0, "Member 'UUI_GoreSettings_C::My_Master__Willie_' has a wrong offset!");
static_assert(offsetof(UUI_GoreSettings_C, Gore_Preset_Int) == 0x0003D8, "Member 'UUI_GoreSettings_C::Gore_Preset_Int' has a wrong offset!");

}
