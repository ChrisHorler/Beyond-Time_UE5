// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInput() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
// End Cross Module References
	void UHoudiniInput::StaticRegisterNativesUHoudiniInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInput);
	UClass* Z_Construct_UClass_UHoudiniInput_NoRegister()
	{
		return UHoudiniInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUIAdvancedIsExpanded_MetaData[];
#endif
		static void NewProp_bLandscapeUIAdvancedIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUIAdvancedIsExpanded;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParmId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParmId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectPathParameter_MetaData[];
#endif
		static void NewProp_bIsObjectPathParameter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectPathParameter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatedDataNodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDataNodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedDataNodeIds;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepWorldTransform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[];
#endif
		static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceBboxEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceMaterialEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[];
#endif
		static void NewProp_bExportLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[];
#endif
		static void NewProp_bExportSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[];
#endif
		static void NewProp_bExportColliders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshChanged_MetaData[];
#endif
		static void NewProp_bStaticMeshChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshChanged;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TransformUIExpanded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformUIExpanded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformUIExpanded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputAssetConnectedInHoudini_MetaData[];
#endif
		static void NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputAssetConnectedInHoudini;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCurveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCurveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeHasExportTypeChanged_MetaData[];
#endif
		static void NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeHasExportTypeChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[];
#endif
		static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[];
#endif
		static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalInputObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryCollectionInputObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSelectedComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSelectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LandscapeSelectedComponents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodesPendingDelete_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodesPendingDelete_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InputNodesPendingDelete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInsertedInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastInsertedInputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastUndoDeletedInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUndoDeletedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastUndoDeletedInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInputLandscape_MetaData[];
#endif
		static void NewProp_bUpdateInputLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInputLandscape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[];
#endif
		static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[];
#endif
		static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[];
#endif
		static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInput.h" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeUIAdvancedIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded = { "bLandscapeUIAdvancedIsExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// Name of the input / Object path parameter\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Name of the input / Object path parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, Name), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData[] = {
		{ "Comment", "// Label of the SOP input or of the object path parameter\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Label of the SOP input or of the object path parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, Label), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// Input type\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Input type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData)) }; // 370716784
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData[] = {
		{ "Comment", "// Previous type, used to detect input type changes\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Previous type, used to detect input type changes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType = { "PreviousType", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, PreviousType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData)) }; // 370716784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData[] = {
		{ "Comment", "// NodeId of the asset / object merge we are associated with\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "NodeId of the asset / object merge we are associated with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId = { "AssetNodeId", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, AssetNodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData[] = {
		{ "Comment", "// NodeId of the created input node \n// when there is multiple inputs objects, this will be the merge node.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "NodeId of the created input node\nwhen there is multiple inputs objects, this will be the merge node." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, InputNodeId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData[] = {
		{ "Comment", "// SOP input index (-1 if we're an object path input)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "SOP input index (-1 if we're an object path input)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, InputIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData[] = {
		{ "Comment", "// Parameter Id of the associated object path parameter (-1 if we're a SOP input)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Parameter Id of the associated object path parameter (-1 if we're a SOP input)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId = { "ParmId", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, ParmId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData[] = {
		{ "Comment", "// Indicates if we're an object path parameter input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates if we're an object path parameter input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bIsObjectPathParameter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter = { "bIsObjectPathParameter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData[] = {
		{ "Comment", "// Array containing all the node Ids created by this input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Array containing all the node Ids created by this input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, CreatedDataNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData[] = {
		{ "Comment", "// Indicates data connected to this input should be uploaded\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates data connected to this input should be uploaded" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bHasChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
		{ "Comment", "// Indicates this input should trigger an HDA update/cook\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates this input should trigger an HDA update/cook" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData[] = {
		{ "Comment", "// Help for this parameter/input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Help for this parameter/input" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, Help), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_MetaData[] = {
		{ "Comment", "// Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform = { "KeepWorldTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, KeepWorldTransform), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_MetaData)) }; // 526419163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData[] = {
		{ "Comment", "// Indicates that the geometry must be packed before merging it into the input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that the geometry must be packed before merging it into the input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bPackBeforeMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Comment", "// Indicates that all the input objects are imported to Houdini as references instead of actual geo\n// (for Geo/World/Asset input types only)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World/Asset input types only)" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bImportAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "Comment", "// Indicates that whether or not to add the rot / scale attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that whether or not to add the rot / scale attributes for reference imports" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
		{ "Comment", "// Indicates whether or not to add bbox attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates whether or not to add bbox attributes for reference imports" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bImportAsReferenceBboxEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
		{ "Comment", "// Indicates whether or not to add material attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates whether or not to add material attributes for reference imports" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bImportAsReferenceMaterialEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_MetaData[] = {
		{ "Comment", "// Indicates that all LODs in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bExportLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_MetaData[] = {
		{ "Comment", "// Indicates that all sockets in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bExportSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_MetaData[] = {
		{ "Comment", "// Indicates that all colliders in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bExportColliders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "Comment", "// Indicates that if trigger cook automatically on curve Input spline modified\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that if trigger cook automatically on curve Input spline modified" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCookOnCurveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Geometry objects\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Geometry objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, GeometryInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData[] = {
		{ "Comment", "// Is set to true when static mesh used for geometry input has changed.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when static mesh used for geometry input has changed." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bStaticMeshChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged = { "bStaticMeshChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_Inner = { "TransformUIExpanded", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData[] = {
		{ "Comment", "// Are the transform UI expanded ?\n// Values default to false and are actually added to the array in OnTransformUIExpand()\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Are the transform UI expanded ?\nValues default to false and are actually added to the array in OnTransformUIExpand()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded = { "TransformUIExpanded", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, TransformUIExpanded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_Inner = { "AssetInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Asset inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Asset inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects = { "AssetInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, AssetInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData[] = {
		{ "Comment", "// Is set to true if the asset input is actually connected inside Houdini.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true if the asset input is actually connected inside Houdini." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bInputAssetConnectedInHoudini = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini = { "bInputAssetConnectedInHoudini", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Curve/Spline inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Curve/Spline inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, CurveInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData[] = {
		{ "Comment", "// Offset used when using muiltiple curves\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Offset used when using muiltiple curves" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset = { "DefaultCurveOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, DefaultCurveOffset), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Comment", "// Set this to true to add rot and scale attributes on curve inputs.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Comment", "// Set this to true to use legacy (curve::1.0) input curves\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Set this to true to use legacy (curve::1.0) input curves" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_Inner = { "LandscapeInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Landscape inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Landscape inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects = { "LandscapeInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeHasExportTypeChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged = { "bLandscapeHasExportTypeChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// World inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "World inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
		{ "Comment", "// Objects used for automatic bound selection\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Objects used for automatic bound selection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData[] = {
		{ "Comment", "// Indicates that this world input is in \"BoundSelector\" mode\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that this world input is in \"BoundSelector\" mode" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bIsWorldInputBoundSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
		{ "Comment", "// Indicates that selected actors by the bound selectors should update automatically\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that selected actors by the bound selectors should update automatically" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution_MetaData[] = {
		{ "Comment", "// Resolution used when converting unreal splines to houdini curves\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, UnrealSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_Inner = { "SkeletalInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_MetaData[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Skeletal Inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Skeletal Inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects = { "SkeletalInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, SkeletalInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_Inner = { "GeometryCollectionInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_MetaData[] = {
		{ "Comment", "// GeometryCollection inputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "GeometryCollection inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects = { "GeometryCollectionInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, GeometryCollectionInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData[] = {
		{ "Comment", "// A cache of the selected landscape components so that it is saved across levels\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "A cache of the selected landscape components so that it is saved across levels" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeSelectedComponents), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData[] = {
		{ "Comment", "// The node ids of InputNodeIds previously used by this input that are pending delete\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "The node ids of InputNodeIds previously used by this input that are pending delete" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, InputNodesPendingDelete), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData[] = {
		{ "Comment", "// This array is to record the last insert action, for undo input insertion actions.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "This array is to record the last insert action, for undo input insertion actions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, LastInsertedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData[] = {
		{ "Comment", "// This array is to cache the action of last undo delete action, and redo that action.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "This array is to cache the action of last undo delete action, and redo that action." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0010000400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, LastUndoDeletedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_MetaData[] = {
		{ "Comment", "// Indicates that the landscape input's source landscape should be updated instead of creating a new component\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates that the landscape input's source landscape should be updated instead of creating a new component" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bUpdateInputLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape = { "bUpdateInputLandscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_MetaData[] = {
		{ "Comment", "// Indicates if the landscape should be exported as heightfield, mesh or points\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Indicates if the landscape should be exported as heightfield, mesh or points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_MetaData)) }; // 969116104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "Comment", "// Is set to true when landscape input is set to selection only.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when landscape input is set to selection only." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeExportSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "Comment", "// Is set to true when the automatic selection of landscape component is active\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when the automatic selection of landscape component is active" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeAutoSelectComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "Comment", "// Is set to true when materials are to be exported.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when materials are to be exported." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeExportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "Comment", "// Is set to true when lightmap information export is desired.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when lightmap information export is desired." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeExportLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "Comment", "// Is set to true when uvs should be exported in [0,1] space.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when uvs should be exported in [0,1] space." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeExportNormalizedUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "Comment", "// Is set to true when uvs should be exported for each tile separately.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
		{ "ToolTip", "Is set to true when uvs should be exported for each tile separately." },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeExportTileUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInput_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_KeepWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceBboxEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bImportAsReferenceMaterialEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportColliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUseLegacyInputCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_UnrealSplineResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_SkeletalInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryCollectionInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bUpdateInputLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeAutoSelectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportNormalizedUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeExportTileUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInput_Statics::ClassParams = {
		&UHoudiniInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton, Z_Construct_UClass_UHoudiniInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInput>()
	{
		return UHoudiniInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInput);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInput, UHoudiniInput::StaticClass, TEXT("UHoudiniInput"), &Z_Registration_Info_UClass_UHoudiniInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInput), 2539243124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_2405830418(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
