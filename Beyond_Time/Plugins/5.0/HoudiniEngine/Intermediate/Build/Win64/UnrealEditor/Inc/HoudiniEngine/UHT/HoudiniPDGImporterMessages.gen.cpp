// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPDGImporterMessages.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "HoudiniEngine/Private/HoudiniInstanceTranslator.h"
#include "HoudiniEngine/Private/HoudiniPackageParams.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
#include "HoudiniEngineRuntime/Private/HoudiniOutput.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGImporterMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage;
class UScriptStruct* FHoudiniPDGImportBGEODiscoverMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEODiscoverMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEODiscoverMessage>()
{
	return FHoudiniPDGImportBGEODiscoverMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandletGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandletGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Message used to find/discover running commandlets\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Message used to find/discover running commandlets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEODiscoverMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData[] = {
		{ "Comment", "// The GUID of the commandlet we are looking for\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "The GUID of the commandlet we are looking for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid = { "CommandletGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEODiscoverMessage, CommandletGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEODiscoverMessage",
		sizeof(FHoudiniPDGImportBGEODiscoverMessage),
		alignof(FHoudiniPDGImportBGEODiscoverMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage;
class UScriptStruct* FHoudiniPDGImportBGEOMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOMessage>()
{
	return FHoudiniPDGImportBGEOMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TOPNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBuildSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData[] = {
		{ "Comment", "// BGEO file path\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "BGEO file path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// PDG work item name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "PDG work item name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData[] = {
		{ "Comment", "// TOP/PDG info\n// TOP node ID\n// HAPI_NodeId TOPNodeId;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "TOP/PDG info\nTOP node ID\nHAPI_NodeId TOPNodeId;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId = { "TOPNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, TOPNodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData[] = {
		{ "Comment", "// Work item id\n// HAPI_PDG_WorkItemId WorkItemId;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Work item id\nHAPI_PDG_WorkItemId WorkItemId;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId = { "WorkItemId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, WorkItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData[] = {
		{ "Comment", "// Package params for the asset \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Package params for the asset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams = { "PackageParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, PackageParams), Z_Construct_UScriptStruct_FHoudiniPackageParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData)) }; // 2265076899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "Comment", "// Settings used during static mesh generation\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Settings used during static mesh generation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData)) }; // 909804173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData[] = {
		{ "Comment", "// Static mesh build settings used during mesh builds\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Static mesh build settings used during mesh builds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings = { "MeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, MeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData)) }; // 3244455572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEOMessage",
		sizeof(FHoudiniPDGImportBGEOMessage),
		alignof(FHoudiniPDGImportBGEOMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult;
	static UEnum* EHoudiniPDGImportBGEOResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniPDGImportBGEOResult"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>()
	{
		return EHoudiniPDGImportBGEOResult_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators[] = {
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Failed", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Failed },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Success", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Success },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess", (int64)EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess },
		{ "EHoudiniPDGImportBGEOResult::HIBPR_MAX", (int64)EHoudiniPDGImportBGEOResult::HIBPR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams[] = {
		{ "HIBPR_MAX.Name", "EHoudiniPDGImportBGEOResult::HIBPR_MAX" },
		{ "HPIBR_Failed.Comment", "// Create uassets from the bgeo completely failed.\n" },
		{ "HPIBR_Failed.DisplayName", "Failed" },
		{ "HPIBR_Failed.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Failed" },
		{ "HPIBR_Failed.ToolTip", "Create uassets from the bgeo completely failed." },
		{ "HPIBR_PartialSuccess.Comment", "// Some uassets were created, but there were unsupported objects in the bgeo as well\n" },
		{ "HPIBR_PartialSuccess.DisplayName", "Partial Success" },
		{ "HPIBR_PartialSuccess.Name", "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess" },
		{ "HPIBR_PartialSuccess.ToolTip", "Some uassets were created, but there were unsupported objects in the bgeo as well" },
		{ "HPIBR_Success.Comment", "// Successfully created uassets for all content in the bgeo\n" },
		{ "HPIBR_Success.DisplayName", "Success" },
		{ "HPIBR_Success.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Success" },
		{ "HPIBR_Success.ToolTip", "Successfully created uassets for all content in the bgeo" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniPDGImportBGEOResult",
		"EHoudiniPDGImportBGEOResult",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes;
class UScriptStruct* FHoudiniGenericAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributes, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniGenericAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniGenericAttributes>()
{
	return FHoudiniGenericAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributes>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(nullptr, 0) }; // 1927906464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniGenericAttributes, PropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData)) }; // 1927906464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributes",
		sizeof(FHoudiniGenericAttributes),
		alignof(FHoudiniGenericAttributes),
		Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject;
class UScriptStruct* FHoudiniPDGImportNodeOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutputObject>()
{
	return FHoudiniPDGImportNodeOutputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenericAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, Identifier), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData)) }; // 3466299402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes = { "GenericAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, GenericAttributes), Z_Construct_UScriptStruct_FHoudiniGenericAttributes, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData)) }; // 1423151049
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutputObject",
		sizeof(FHoudiniPDGImportNodeOutputObject),
		alignof(FHoudiniPDGImportNodeOutputObject),
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput;
class UScriptStruct* FHoudiniPDGImportNodeOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutput>()
{
	return FHoudiniPDGImportNodeOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputPartData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputPartData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedOutputPartData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(nullptr, 0) }; // 1027854522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData)) }; // 1027854522
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, METADATA_PARAMS(nullptr, 0) }; // 2407461044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, OutputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData)) }; // 2407461044
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, METADATA_PARAMS(nullptr, 0) }; // 3101578741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, InstancedOutputPartData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData)) }; // 3101578741
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutput",
		sizeof(FHoudiniPDGImportNodeOutput),
		alignof(FHoudiniPDGImportNodeOutput),
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPDGImportBGEOResultMessage>() == std::is_polymorphic<FHoudiniPDGImportBGEOMessage>(), "USTRUCT FHoudiniPDGImportBGEOResultMessage cannot be polymorphic unless super FHoudiniPDGImportBGEOMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage;
class UScriptStruct* FHoudiniPDGImportBGEOResultMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOResultMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOResultMessage>()
{
	return FHoudiniPDGImportBGEOResultMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOResultMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData[] = {
		{ "Comment", "// Result of the bgeo import -> uassets\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Result of the bgeo import -> uassets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, ImportResult), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData)) }; // 1088139820
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, METADATA_PARAMS(nullptr, 0) }; // 1428178024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData)) }; // 1428178024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage,
		&NewStructOps,
		"HoudiniPDGImportBGEOResultMessage",
		sizeof(FHoudiniPDGImportBGEOResultMessage),
		alignof(FHoudiniPDGImportBGEOResultMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo[] = {
		{ EHoudiniPDGImportBGEOResult_StaticEnum, TEXT("EHoudiniPDGImportBGEOResult"), &Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1088139820U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPDGImportBGEODiscoverMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEODiscoverMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEODiscoverMessage), 2884072105U) },
		{ FHoudiniPDGImportBGEOMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOMessage), 1860034504U) },
		{ FHoudiniGenericAttributes::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps, TEXT("HoudiniGenericAttributes"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributes), 1423151049U) },
		{ FHoudiniPDGImportNodeOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutputObject), 2407461044U) },
		{ FHoudiniPDGImportNodeOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutput"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutput), 1428178024U) },
		{ FHoudiniPDGImportBGEOResultMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOResultMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOResultMessage), 1433553560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_1392794615(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
