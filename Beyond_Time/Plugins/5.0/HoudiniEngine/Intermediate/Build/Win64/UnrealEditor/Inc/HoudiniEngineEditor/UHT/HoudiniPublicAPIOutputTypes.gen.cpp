// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIOutputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIOutputTypes() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier;
class UScriptStruct* FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIOutputObjectIdentifier>()
{
	return FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/**\n * This class represents an output object identifier for an output object of a wrapped Houdini asset in the\n * public API.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "This class represents an output object identifier for an output object of a wrapped Houdini asset in the\npublic API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIOutputObjectIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/** String identifier for the split that created the output object identified by this identifier. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "String identifier for the split that created the output object identified by this identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/** Name of the part used to generate the output object identified by this identifier. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "Name of the part used to generate the output object identified by this identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding Houdini Object.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "NodeId of corresponding Houdini Object." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding Houdini Geo.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "NodeId of corresponding Houdini Geo." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, GeoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "// PartId\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "PartId" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData[] = {
		{ "Comment", "// First valid primitive index for this output\n// (used to read generic attributes)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "First valid primitive index for this output\n(used to read generic attributes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PrimitiveIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData[] = {
		{ "Comment", "// First valid point index for this output\n// (used to read generic attributes)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "First valid point index for this output\n(used to read generic attributes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPublicAPIOutputObjectIdentifier",
		sizeof(FHoudiniPublicAPIOutputObjectIdentifier),
		alignof(FHoudiniPublicAPIOutputObjectIdentifier),
		Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniPublicAPIOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPublicAPIOutputObjectIdentifier), 581329292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_3569468369(TEXT("/Script/HoudiniEngineEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
