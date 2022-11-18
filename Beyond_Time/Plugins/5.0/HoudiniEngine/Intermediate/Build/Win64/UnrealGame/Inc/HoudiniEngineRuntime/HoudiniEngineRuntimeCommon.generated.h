// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniEngineRuntimeCommon_generated_h
#error "HoudiniEngineRuntimeCommon.generated.h already included, missing '#pragma once' in HoudiniEngineRuntimeCommon.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniEngineRuntimeCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h


#define FOREACH_ENUM_EHOUDINIRAMPINTERPOLATIONTYPE(op) \
	op(EHoudiniRampInterpolationType::InValid) \
	op(EHoudiniRampInterpolationType::CONSTANT) \
	op(EHoudiniRampInterpolationType::LINEAR) \
	op(EHoudiniRampInterpolationType::CATMULL_ROM) \
	op(EHoudiniRampInterpolationType::MONOTONE_CUBIC) \
	op(EHoudiniRampInterpolationType::BEZIER) \
	op(EHoudiniRampInterpolationType::BSPLINE) \
	op(EHoudiniRampInterpolationType::HERMITE) 

enum class EHoudiniRampInterpolationType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>();

#define FOREACH_ENUM_EHOUDINIENGINEBAKEOPTION(op) \
	op(EHoudiniEngineBakeOption::ToActor) \
	op(EHoudiniEngineBakeOption::ToBlueprint) \
	op(EHoudiniEngineBakeOption::ToFoliage) \
	op(EHoudiniEngineBakeOption::ToWorldOutliner) 

enum class EHoudiniEngineBakeOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>();

#define FOREACH_ENUM_EHOUDINILANDSCAPEOUTPUTBAKETYPE(op) \
	op(EHoudiniLandscapeOutputBakeType::Detachment) \
	op(EHoudiniLandscapeOutputBakeType::BakeToImage) \
	op(EHoudiniLandscapeOutputBakeType::BakeToWorld) \
	op(EHoudiniLandscapeOutputBakeType::InValid) 

enum class EHoudiniLandscapeOutputBakeType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>();

#define FOREACH_ENUM_EHOUDINIINPUTTYPE(op) \
	op(EHoudiniInputType::Invalid) \
	op(EHoudiniInputType::Geometry) \
	op(EHoudiniInputType::Curve) \
	op(EHoudiniInputType::Asset) \
	op(EHoudiniInputType::Landscape) \
	op(EHoudiniInputType::World) \
	op(EHoudiniInputType::Skeletal) \
	op(EHoudiniInputType::GeometryCollection) 

enum class EHoudiniInputType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>();

#define FOREACH_ENUM_EHOUDINIOUTPUTTYPE(op) \
	op(EHoudiniOutputType::Invalid) \
	op(EHoudiniOutputType::Mesh) \
	op(EHoudiniOutputType::Instancer) \
	op(EHoudiniOutputType::Landscape) \
	op(EHoudiniOutputType::Curve) \
	op(EHoudiniOutputType::Skeletal) \
	op(EHoudiniOutputType::GeometryCollection) 

enum class EHoudiniOutputType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>();

#define FOREACH_ENUM_EHOUDINICURVETYPE(op) \
	op(EHoudiniCurveType::Invalid) \
	op(EHoudiniCurveType::Polygon) \
	op(EHoudiniCurveType::Nurbs) \
	op(EHoudiniCurveType::Bezier) \
	op(EHoudiniCurveType::Points) 

enum class EHoudiniCurveType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>();

#define FOREACH_ENUM_EHOUDINICURVEMETHOD(op) \
	op(EHoudiniCurveMethod::Invalid) \
	op(EHoudiniCurveMethod::CVs) \
	op(EHoudiniCurveMethod::Breakpoints) \
	op(EHoudiniCurveMethod::Freehand) 

enum class EHoudiniCurveMethod : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>();

#define FOREACH_ENUM_EHOUDINICURVEBREAKPOINTPARAMETERIZATION(op) \
	op(EHoudiniCurveBreakpointParameterization::Invalid) \
	op(EHoudiniCurveBreakpointParameterization::Uniform) \
	op(EHoudiniCurveBreakpointParameterization::Chord) \
	op(EHoudiniCurveBreakpointParameterization::Centripetal) 

enum class EHoudiniCurveBreakpointParameterization : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>();

#define FOREACH_ENUM_EHOUDINILANDSCAPEEXPORTTYPE(op) \
	op(EHoudiniLandscapeExportType::Heightfield) \
	op(EHoudiniLandscapeExportType::Mesh) \
	op(EHoudiniLandscapeExportType::Points) 

enum class EHoudiniLandscapeExportType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>();

#define FOREACH_ENUM_EPDGBAKESELECTIONOPTION(op) \
	op(EPDGBakeSelectionOption::All) \
	op(EPDGBakeSelectionOption::SelectedNetwork) \
	op(EPDGBakeSelectionOption::SelectedNode) 

enum class EPDGBakeSelectionOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>();

#define FOREACH_ENUM_EPDGBAKEPACKAGEREPLACEMODEOPTION(op) \
	op(EPDGBakePackageReplaceModeOption::CreateNewAssets) \
	op(EPDGBakePackageReplaceModeOption::ReplaceExistingAssets) 

enum class EPDGBakePackageReplaceModeOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>();

#define FOREACH_ENUM_EHOUDINIPROXYREFINERESULT(op) \
	op(EHoudiniProxyRefineResult::Invalid) \
	op(EHoudiniProxyRefineResult::Failed) \
	op(EHoudiniProxyRefineResult::Success) \
	op(EHoudiniProxyRefineResult::Skipped) 

enum class EHoudiniProxyRefineResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>();

#define FOREACH_ENUM_EHOUDINIPROXYREFINEREQUESTRESULT(op) \
	op(EHoudiniProxyRefineRequestResult::Invalid) \
	op(EHoudiniProxyRefineRequestResult::None) \
	op(EHoudiniProxyRefineRequestResult::PendingCooks) \
	op(EHoudiniProxyRefineRequestResult::Refined) 

enum class EHoudiniProxyRefineRequestResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
