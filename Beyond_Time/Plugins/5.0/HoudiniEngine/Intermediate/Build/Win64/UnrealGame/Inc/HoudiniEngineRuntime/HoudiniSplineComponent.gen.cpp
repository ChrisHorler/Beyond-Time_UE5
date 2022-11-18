// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniSplineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniSplineComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UHoudiniSplineComponent::StaticRegisterNativesUHoudiniSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniSplineComponent);
	UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister()
	{
		return UHoudiniSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPoints;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayPointIndexDivider_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPointIndexDivider_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPointIndexDivider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniSplineName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniSplineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[];
#endif
		static void NewProp_bReversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurveOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoudiniSplineVisible_MetaData[];
#endif
		static void NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoudiniSplineVisible;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveBreakpointParameterization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBreakpointParameterization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveBreakpointParameterization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOutputCurve_MetaData[];
#endif
		static void NewProp_bIsOutputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOutputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLegacyInputCurve_MetaData[];
#endif
		static void NewProp_bIsLegacyInputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLegacyInputCurve;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditedControlPointsIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditedControlPointsIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditedControlPointsIndexes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostUndo_MetaData[];
#endif
		static void NewProp_bPostUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostUndo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[];
#endif
		static void NewProp_bHasChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[];
#endif
		static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInputCurve_MetaData[];
#endif
		static void NewProp_bIsInputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableOutputCurve_MetaData[];
#endif
		static void NewProp_bIsEditableOutputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableOutputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName = { "HoudiniSplineName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, HoudiniSplineName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bReversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder = { "CurveOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveOrder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsHoudiniSplineVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible = { "bIsHoudiniSplineVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData)) }; // 4285111500
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData)) }; // 1134644187
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData[] = {
		{ "Category", "Houdini Spline Properties" },
		{ "Comment", "// Only used for new HAPI curve / breakpoints\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Only used for new HAPI curve / breakpoints" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization = { "CurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, CurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_MetaData)) }; // 835065955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsOutputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve = { "bIsOutputCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bCookOnCurveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsLegacyInputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve = { "bIsLegacyInputCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_Inner = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, EditedControlPointsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bPostUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo = { "bPostUndo", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bHasChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData[] = {
		{ "Comment", "// Whether this is a Houdini curve input\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Whether this is a Houdini curve input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsInputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve = { "bIsInputCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_SetBit(void* Obj)
	{
		((UHoudiniSplineComponent*)Obj)->bIsEditableOutputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve = { "bIsEditableOutputCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData[] = {
		{ "Comment", "// Corresponds to the Curve NodeId in Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Corresponds to the Curve NodeId in Houdini" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, NodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniSplineComponent, PartName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurvePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_DisplayPointIndexDivider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_HoudiniSplineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bReversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsHoudiniSplineVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_CurveBreakpointParameterization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsOutputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bCookOnCurveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsLegacyInputCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_EditedControlPointsIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bPostUndo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsInputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_bIsEditableOutputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniSplineComponent_Statics::NewProp_PartName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister, (int32)VTABLE_OFFSET(UHoudiniSplineComponent, IHoudiniEngineCopyPropertiesInterface), false },  // 685038596
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniSplineComponent_Statics::ClassParams = {
		&UHoudiniSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniSplineComponent.OuterSingleton, Z_Construct_UClass_UHoudiniSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniSplineComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniSplineComponent>()
	{
		return UHoudiniSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniSplineComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniSplineComponent)

static_assert(std::is_polymorphic<FHoudiniSplineComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniSplineComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData;
class UScriptStruct* FHoudiniSplineComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniSplineComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniSplineComponentInstanceData>()
{
	return FHoudiniSplineComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPoints;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayPointIndexDivider_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPointIndexDivider_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayPointIndexDivider;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditedControlPointsIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditedControlPointsIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditedControlPointsIndexes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Used to store HoudiniAssetComponent data during BP reconstruction\n" },
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
		{ "ToolTip", "Used to store HoudiniAssetComponent data during BP reconstruction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSplineComponentInstanceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner = { "DisplayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints = { "DisplayPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider = { "DisplayPointIndexDivider", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, DisplayPointIndexDivider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_Inner = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes = { "EditedControlPointsIndexes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniSplineComponentInstanceData, EditedControlPointsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_CurvePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_DisplayPointIndexDivider,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewProp_EditedControlPointsIndexes,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"HoudiniSplineComponentInstanceData",
		sizeof(FHoudiniSplineComponentInstanceData),
		alignof(FHoudiniSplineComponentInstanceData),
		Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniSplineComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics::NewStructOps, TEXT("HoudiniSplineComponentInstanceData"), &Z_Registration_Info_UScriptStruct_HoudiniSplineComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniSplineComponentInstanceData), 1970574884U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniSplineComponent, UHoudiniSplineComponent::StaticClass, TEXT("UHoudiniSplineComponent"), &Z_Registration_Info_UClass_UHoudiniSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniSplineComponent), 148007821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_2649149888(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
