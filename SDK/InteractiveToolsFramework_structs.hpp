#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractiveToolsFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Enum InteractiveToolsFramework.EGizmoElementState
// NumValues: 0x0005
enum class EGizmoElementState : uint8
{
	None                                     = 0,
	Visible                                  = 2,
	Hittable                                 = 4,
	VisibleAndHittable                       = 6,
	EGizmoElementState_MAX                   = 7,
};

// Enum InteractiveToolsFramework.EGizmoElementInteractionState
// NumValues: 0x0004
enum class EGizmoElementInteractionState : uint32
{
	None                                     = 0,
	Hovering                                 = 1,
	Interacting                              = 2,
	EGizmoElementInteractionState_MAX        = 3,
};

// Enum InteractiveToolsFramework.EGizmoElementViewDependentType
// NumValues: 0x0004
enum class EGizmoElementViewDependentType : uint32
{
	None                                     = 0,
	Axis                                     = 1,
	Plane                                    = 2,
	EGizmoElementViewDependentType_MAX       = 3,
};

// Enum InteractiveToolsFramework.EGizmoElementViewAlignType
// NumValues: 0x0006
enum class EGizmoElementViewAlignType : uint32
{
	None                                     = 0,
	PointOnly                                = 1,
	PointEye                                 = 2,
	PointScreen                              = 3,
	Axial                                    = 4,
	EGizmoElementViewAlignType_MAX           = 5,
};

// Enum InteractiveToolsFramework.EGizmoElementPartialType
// NumValues: 0x0004
enum class EGizmoElementPartialType : uint32
{
	None                                     = 0,
	Partial                                  = 1,
	PartialViewDependent                     = 2,
	EGizmoElementPartialType_MAX             = 3,
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
// NumValues: 0x0002
enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial                      = 1,
	EStandardToolContextMaterials_MAX        = 2,
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
// NumValues: 0x0003
enum class EToolContextCoordinateSystem : uint8
{
	World                                    = 0,
	Local                                    = 1,
	EToolContextCoordinateSystem_MAX         = 2,
};

// Enum InteractiveToolsFramework.EToolContextTransformGizmoMode
// NumValues: 0x0006
enum class EToolContextTransformGizmoMode : uint8
{
	NoGizmo                                  = 0,
	Translation                              = 1,
	Rotation                                 = 2,
	Scale                                    = 3,
	Combined                                 = 8,
	EToolContextTransformGizmoMode_MAX       = 9,
};

// Enum InteractiveToolsFramework.EToolMessageLevel
// NumValues: 0x0006
enum class EToolMessageLevel : uint8
{
	Internal                                 = 0,
	UserMessage                              = 1,
	UserNotification                         = 2,
	UserWarning                              = 3,
	UserError                                = 4,
	EToolMessageLevel_MAX                    = 5,
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
// NumValues: 0x0005
enum class ESelectedObjectsModificationType : uint8
{
	Replace                                  = 0,
	Add                                      = 1,
	Remove                                   = 2,
	Clear                                    = 3,
	ESelectedObjectsModificationType_MAX     = 4,
};

// Enum InteractiveToolsFramework.EViewInteractionState
// NumValues: 0x0004
enum class EViewInteractionState : uint8
{
	None                                     = 0,
	Hovered                                  = 1,
	Focused                                  = 2,
	EViewInteractionState_MAX                = 3,
};

// Enum InteractiveToolsFramework.EGizmoElementArrowHeadType
// NumValues: 0x0003
enum class EGizmoElementArrowHeadType : uint32
{
	Cone                                     = 0,
	Cube                                     = 1,
	EGizmoElementArrowHeadType_MAX           = 2,
};

// Enum InteractiveToolsFramework.EInputCaptureSide
// NumValues: 0x0006
enum class EInputCaptureSide : uint8
{
	None                                     = 0,
	Left                                     = 1,
	Right                                    = 2,
	Both                                     = 3,
	Any                                      = 99,
	EInputCaptureSide_MAX                    = 100,
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
// NumValues: 0x0003
enum class EInputCaptureRequestType : uint8
{
	Begin                                    = 1,
	Ignore                                   = 2,
	EInputCaptureRequestType_MAX             = 3,
};

// Enum InteractiveToolsFramework.EInputCaptureState
// NumValues: 0x0005
enum class EInputCaptureState : uint8
{
	Begin                                    = 1,
	Continue                                 = 2,
	End                                      = 3,
	Ignore                                   = 4,
	EInputCaptureState_MAX                   = 5,
};

// Enum InteractiveToolsFramework.EInputDevices
// NumValues: 0x0009
enum class EInputDevices : uint32
{
	None                                     = 0,
	Keyboard                                 = 1,
	Mouse                                    = 2,
	Gamepad                                  = 4,
	OculusTouch                              = 8,
	HTCViveWands                             = 16,
	AnySpatialDevice                         = 24,
	TabletFingers                            = 1024,
	EInputDevices_MAX                        = 1025,
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
// NumValues: 0x001A
enum class ETransformGizmoSubElements : uint32
{
	None                                     = 0,
	TranslateAxisX                           = 2,
	TranslateAxisY                           = 4,
	TranslateAxisZ                           = 8,
	TranslateAllAxes                         = 14,
	TranslatePlaneXY                         = 16,
	TranslatePlaneXZ                         = 32,
	TranslatePlaneYZ                         = 64,
	TranslateAllPlanes                       = 112,
	RotateAxisX                              = 128,
	RotateAxisY                              = 256,
	RotateAxisZ                              = 512,
	RotateAllAxes                            = 896,
	ScaleAxisX                               = 1024,
	ScaleAxisY                               = 2048,
	ScaleAxisZ                               = 4096,
	ScaleAllAxes                             = 7168,
	ScalePlaneYZ                             = 8192,
	ScalePlaneXZ                             = 16384,
	ScalePlaneXY                             = 32768,
	ScaleAllPlanes                           = 57344,
	ScaleUniform                             = 65536,
	StandardTranslateRotate                  = 1022,
	TranslateRotateUniformScale              = 66558,
	FullTranslateRotateScale                 = 131070,
	ETransformGizmoSubElements_MAX           = 131071,
};

// Enum InteractiveToolsFramework.EToolShutdownType
// NumValues: 0x0004
enum class EToolShutdownType : uint8
{
	Completed                                = 0,
	Accept                                   = 1,
	Cancel                                   = 2,
	EToolShutdownType_MAX                    = 3,
};

// Enum InteractiveToolsFramework.EToolSide
// NumValues: 0x0004
enum class EToolSide : uint8
{
	Left                                     = 1,
	Mouse                                    = 1,
	Right                                    = 2,
	EToolSide_MAX                            = 3,
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
// NumValues: 0x0004
enum class EToolChangeTrackingMode : uint8
{
	NoChangeTracking                         = 1,
	UndoToExit                               = 2,
	FullUndoRedo                             = 3,
	EToolChangeTrackingMode_MAX              = 4,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
// NumValues: 0x0003
enum class ESceneSnapQueryType : uint8
{
	Position                                 = 1,
	Rotation                                 = 2,
	ESceneSnapQueryType_MAX                  = 3,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
// NumValues: 0x0006
enum class ESceneSnapQueryTargetType : uint8
{
	None                                     = 0,
	MeshVertex                               = 1,
	MeshEdge                                 = 2,
	Grid                                     = 4,
	All                                      = 7,
	ESceneSnapQueryTargetType_MAX            = 8,
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0020 (0x0020 - 0x0000)
struct FGizmoVec2ParameterChange final
{
public:
	struct FVector2D                              InitialValue;                                      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              CurrentValue;                                      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoVec2ParameterChange) == 0x000008, "Wrong alignment on FGizmoVec2ParameterChange");
static_assert(sizeof(FGizmoVec2ParameterChange) == 0x000020, "Wrong size on FGizmoVec2ParameterChange");
static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0x000000, "Member 'FGizmoVec2ParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 0x000010, "Member 'FGizmoVec2ParameterChange::CurrentValue' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoElementColorAttribute
// 0x0014 (0x0014 - 0x0000)
struct FGizmoElementColorAttribute final
{
public:
	struct FLinearColor                           Value;                                             // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasValue;                                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesChildState;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGizmoElementColorAttribute) == 0x000004, "Wrong alignment on FGizmoElementColorAttribute");
static_assert(sizeof(FGizmoElementColorAttribute) == 0x000014, "Wrong size on FGizmoElementColorAttribute");
static_assert(offsetof(FGizmoElementColorAttribute, Value) == 0x000000, "Member 'FGizmoElementColorAttribute::Value' has a wrong offset!");
static_assert(offsetof(FGizmoElementColorAttribute, bHasValue) == 0x000010, "Member 'FGizmoElementColorAttribute::bHasValue' has a wrong offset!");
static_assert(offsetof(FGizmoElementColorAttribute, bOverridesChildState) == 0x000011, "Member 'FGizmoElementColorAttribute::bOverridesChildState' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoElementMaterialAttribute
// 0x000C (0x000C - 0x0000)
struct FGizmoElementMaterialAttribute final
{
public:
	TWeakObjectPtr<class UMaterialInterface>      Value;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesChildState;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGizmoElementMaterialAttribute) == 0x000004, "Wrong alignment on FGizmoElementMaterialAttribute");
static_assert(sizeof(FGizmoElementMaterialAttribute) == 0x00000C, "Wrong size on FGizmoElementMaterialAttribute");
static_assert(offsetof(FGizmoElementMaterialAttribute, Value) == 0x000000, "Member 'FGizmoElementMaterialAttribute::Value' has a wrong offset!");
static_assert(offsetof(FGizmoElementMaterialAttribute, bOverridesChildState) == 0x000008, "Member 'FGizmoElementMaterialAttribute::bOverridesChildState' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
// 0x0060 (0x0060 - 0x0000)
struct FGizmoElementMeshRenderStateAttributes final
{
public:
	struct FGizmoElementMaterialAttribute         Material;                                          // 0x0000(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementMaterialAttribute         HoverMaterial;                                     // 0x000C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementMaterialAttribute         InteractMaterial;                                  // 0x0018(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute            VertexColor;                                       // 0x0024(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute            HoverVertexColor;                                  // 0x0038(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute            InteractVertexColor;                               // 0x004C(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoElementMeshRenderStateAttributes) == 0x000004, "Wrong alignment on FGizmoElementMeshRenderStateAttributes");
static_assert(sizeof(FGizmoElementMeshRenderStateAttributes) == 0x000060, "Wrong size on FGizmoElementMeshRenderStateAttributes");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, Material) == 0x000000, "Member 'FGizmoElementMeshRenderStateAttributes::Material' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverMaterial) == 0x00000C, "Member 'FGizmoElementMeshRenderStateAttributes::HoverMaterial' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractMaterial) == 0x000018, "Member 'FGizmoElementMeshRenderStateAttributes::InteractMaterial' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, VertexColor) == 0x000024, "Member 'FGizmoElementMeshRenderStateAttributes::VertexColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverVertexColor) == 0x000038, "Member 'FGizmoElementMeshRenderStateAttributes::HoverVertexColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractVertexColor) == 0x00004C, "Member 'FGizmoElementMeshRenderStateAttributes::InteractVertexColor' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
// 0x003C (0x003C - 0x0000)
struct FGizmoElementLineRenderStateAttributes final
{
public:
	struct FGizmoElementColorAttribute            LineColor;                                         // 0x0000(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute            HoverLineColor;                                    // 0x0014(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute            InteractLineColor;                                 // 0x0028(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoElementLineRenderStateAttributes) == 0x000004, "Wrong alignment on FGizmoElementLineRenderStateAttributes");
static_assert(sizeof(FGizmoElementLineRenderStateAttributes) == 0x00003C, "Wrong size on FGizmoElementLineRenderStateAttributes");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, LineColor) == 0x000000, "Member 'FGizmoElementLineRenderStateAttributes::LineColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, HoverLineColor) == 0x000014, "Member 'FGizmoElementLineRenderStateAttributes::HoverLineColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, InteractLineColor) == 0x000028, "Member 'FGizmoElementLineRenderStateAttributes::InteractLineColor' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0008 (0x0008 - 0x0000)
struct FGizmoFloatParameterChange final
{
public:
	float                                         InitialValue;                                      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentValue;                                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGizmoFloatParameterChange) == 0x000004, "Wrong alignment on FGizmoFloatParameterChange");
static_assert(sizeof(FGizmoFloatParameterChange) == 0x000008, "Wrong size on FGizmoFloatParameterChange");
static_assert(offsetof(FGizmoFloatParameterChange, InitialValue) == 0x000000, "Member 'FGizmoFloatParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoFloatParameterChange, CurrentValue) == 0x000004, "Member 'FGizmoFloatParameterChange::CurrentValue' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.BrushStampData
// 0x0138 (0x0138 - 0x0000)
struct alignas(0x08) FBrushStampData final
{
public:
	uint8                                         Pad_0[0x138];                                      // 0x0000(0x0138)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBrushStampData) == 0x000008, "Wrong alignment on FBrushStampData");
static_assert(sizeof(FBrushStampData) == 0x000138, "Wrong size on FBrushStampData");

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0020 (0x0020 - 0x0000)
struct FBehaviorInfo final
{
public:
	class UInputBehavior*                         Behavior;                                          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x18];                                       // 0x0008(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBehaviorInfo) == 0x000008, "Wrong alignment on FBehaviorInfo");
static_assert(sizeof(FBehaviorInfo) == 0x000020, "Wrong size on FBehaviorInfo");
static_assert(offsetof(FBehaviorInfo, Behavior) == 0x000000, "Member 'FBehaviorInfo::Behavior' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0040 (0x0040 - 0x0000)
struct FInputRayHit final
{
public:
	bool                                          bHit;                                              // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HitDepth;                                          // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitNormal;                                         // 0x0010(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasHitNormal;                                     // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HitIdentifier;                                     // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class UObject>                 HitObject;                                         // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputRayHit) == 0x000008, "Wrong alignment on FInputRayHit");
static_assert(sizeof(FInputRayHit) == 0x000040, "Wrong size on FInputRayHit");
static_assert(offsetof(FInputRayHit, bHit) == 0x000000, "Member 'FInputRayHit::bHit' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitDepth) == 0x000008, "Member 'FInputRayHit::HitDepth' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitNormal) == 0x000010, "Member 'FInputRayHit::HitNormal' has a wrong offset!");
static_assert(offsetof(FInputRayHit, bHasHitNormal) == 0x000028, "Member 'FInputRayHit::bHasHitNormal' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitIdentifier) == 0x00002C, "Member 'FInputRayHit::HitIdentifier' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitObject) == 0x000038, "Member 'FInputRayHit::HitObject' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.DeviceButtonState
// 0x0020 (0x0020 - 0x0000)
struct FDeviceButtonState final
{
public:
	struct FKey                                   Button;                                            // 0x0000(0x0018)(BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPressed;                                          // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDown;                                             // 0x0019(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReleased;                                         // 0x001A(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDeviceButtonState) == 0x000008, "Wrong alignment on FDeviceButtonState");
static_assert(sizeof(FDeviceButtonState) == 0x000020, "Wrong size on FDeviceButtonState");
static_assert(offsetof(FDeviceButtonState, Button) == 0x000000, "Member 'FDeviceButtonState::Button' has a wrong offset!");
static_assert(offsetof(FDeviceButtonState, bPressed) == 0x000018, "Member 'FDeviceButtonState::bPressed' has a wrong offset!");
static_assert(offsetof(FDeviceButtonState, bDown) == 0x000019, "Member 'FDeviceButtonState::bDown' has a wrong offset!");
static_assert(offsetof(FDeviceButtonState, bReleased) == 0x00001A, "Member 'FDeviceButtonState::bReleased' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.KeyboardInputDeviceState
// 0x0020 (0x0020 - 0x0000)
struct FKeyboardInputDeviceState final
{
public:
	struct FDeviceButtonState                     ActiveKey;                                         // 0x0000(0x0020)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyboardInputDeviceState) == 0x000008, "Wrong alignment on FKeyboardInputDeviceState");
static_assert(sizeof(FKeyboardInputDeviceState) == 0x000020, "Wrong size on FKeyboardInputDeviceState");
static_assert(offsetof(FKeyboardInputDeviceState, ActiveKey) == 0x000000, "Member 'FKeyboardInputDeviceState::ActiveKey' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.MouseInputDeviceState
// 0x00B8 (0x00B8 - 0x0000)
struct FMouseInputDeviceState final
{
public:
	struct FDeviceButtonState                     Left;                                              // 0x0000(0x0020)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FDeviceButtonState                     Middle;                                            // 0x0020(0x0020)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FDeviceButtonState                     Right;                                             // 0x0040(0x0020)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                         WheelDelta;                                        // 0x0060(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Position2D;                                        // 0x0068(0x0010)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Delta2D;                                           // 0x0078(0x0010)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRay                                   WorldRay;                                          // 0x0088(0x0030)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMouseInputDeviceState) == 0x000008, "Wrong alignment on FMouseInputDeviceState");
static_assert(sizeof(FMouseInputDeviceState) == 0x0000B8, "Wrong size on FMouseInputDeviceState");
static_assert(offsetof(FMouseInputDeviceState, Left) == 0x000000, "Member 'FMouseInputDeviceState::Left' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, Middle) == 0x000020, "Member 'FMouseInputDeviceState::Middle' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, Right) == 0x000040, "Member 'FMouseInputDeviceState::Right' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, WheelDelta) == 0x000060, "Member 'FMouseInputDeviceState::WheelDelta' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, Position2D) == 0x000068, "Member 'FMouseInputDeviceState::Position2D' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, Delta2D) == 0x000078, "Member 'FMouseInputDeviceState::Delta2D' has a wrong offset!");
static_assert(offsetof(FMouseInputDeviceState, WorldRay) == 0x000088, "Member 'FMouseInputDeviceState::WorldRay' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.InputDeviceState
// 0x00E0 (0x00E0 - 0x0000)
struct FInputDeviceState final
{
public:
	EInputDevices                                 InputDevice;                                       // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShiftKeyDown;                                     // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAltKeyDown;                                       // 0x0005(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCtrlKeyDown;                                      // 0x0006(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCmdKeyDown;                                       // 0x0007(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKeyboardInputDeviceState              Keyboard;                                          // 0x0008(0x0020)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FMouseInputDeviceState                 Mouse;                                             // 0x0028(0x00B8)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputDeviceState) == 0x000008, "Wrong alignment on FInputDeviceState");
static_assert(sizeof(FInputDeviceState) == 0x0000E0, "Wrong size on FInputDeviceState");
static_assert(offsetof(FInputDeviceState, InputDevice) == 0x000000, "Member 'FInputDeviceState::InputDevice' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, bShiftKeyDown) == 0x000004, "Member 'FInputDeviceState::bShiftKeyDown' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, bAltKeyDown) == 0x000005, "Member 'FInputDeviceState::bAltKeyDown' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, bCtrlKeyDown) == 0x000006, "Member 'FInputDeviceState::bCtrlKeyDown' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, bCmdKeyDown) == 0x000007, "Member 'FInputDeviceState::bCmdKeyDown' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, Keyboard) == 0x000008, "Member 'FInputDeviceState::Keyboard' has a wrong offset!");
static_assert(offsetof(FInputDeviceState, Mouse) == 0x000028, "Member 'FInputDeviceState::Mouse' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.InputDeviceRay
// 0x0048 (0x0048 - 0x0000)
struct FInputDeviceRay final
{
public:
	struct FRay                                   WorldRay;                                          // 0x0000(0x0030)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bHas2D;                                            // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ScreenPosition;                                    // 0x0038(0x0010)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputDeviceRay) == 0x000008, "Wrong alignment on FInputDeviceRay");
static_assert(sizeof(FInputDeviceRay) == 0x000048, "Wrong size on FInputDeviceRay");
static_assert(offsetof(FInputDeviceRay, WorldRay) == 0x000000, "Member 'FInputDeviceRay::WorldRay' has a wrong offset!");
static_assert(offsetof(FInputDeviceRay, bHas2D) == 0x000030, "Member 'FInputDeviceRay::bHas2D' has a wrong offset!");
static_assert(offsetof(FInputDeviceRay, ScreenPosition) == 0x000038, "Member 'FInputDeviceRay::ScreenPosition' has a wrong offset!");

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0030 (0x0030 - 0x0000)
struct FActiveGizmo final
{
public:
	class UInteractiveGizmo*                      Gizmo;                                             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x28];                                       // 0x0008(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGizmo) == 0x000008, "Wrong alignment on FActiveGizmo");
static_assert(sizeof(FActiveGizmo) == 0x000030, "Wrong size on FActiveGizmo");
static_assert(offsetof(FActiveGizmo, Gizmo) == 0x000000, "Member 'FActiveGizmo::Gizmo' has a wrong offset!");

}
