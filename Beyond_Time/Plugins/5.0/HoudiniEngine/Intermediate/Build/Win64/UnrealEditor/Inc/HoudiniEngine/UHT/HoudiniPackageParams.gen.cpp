// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPackageParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPackageParams() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode();
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackageMode;
	static UEnum* EPackageMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPackageMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPackageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageMode, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageMode"));
		}
		return Z_Registration_Info_UEnum_EPackageMode.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageMode>()
	{
		return EPackageMode_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enumerators[] = {
		{ "EPackageMode::CookToLevel_Invalid", (int64)EPackageMode::CookToLevel_Invalid },
		{ "EPackageMode::CookToTemp", (int64)EPackageMode::CookToTemp },
		{ "EPackageMode::Bake", (int64)EPackageMode::Bake },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enum_MetaDataParams[] = {
		{ "Bake.Name", "EPackageMode::Bake" },
		{ "CookToLevel_Invalid.Name", "EPackageMode::CookToLevel_Invalid" },
		{ "CookToTemp.Comment", "// V1 Behaviour, saving package to the level, now invalid\n" },
		{ "CookToTemp.Name", "EPackageMode::CookToTemp" },
		{ "CookToTemp.ToolTip", "V1 Behaviour, saving package to the level, now invalid" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EPackageMode",
		"EPackageMode",
		Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode()
	{
		if (!Z_Registration_Info_UEnum_EPackageMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackageMode.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPackageMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackageReplaceMode;
	static UEnum* EPackageReplaceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageReplaceMode"));
		}
		return Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageReplaceMode>()
	{
		return EPackageReplaceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enumerators[] = {
		{ "EPackageReplaceMode::CreateNewAssets", (int64)EPackageReplaceMode::CreateNewAssets },
		{ "EPackageReplaceMode::ReplaceExistingAssets", (int64)EPackageReplaceMode::ReplaceExistingAssets },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enum_MetaDataParams[] = {
		{ "CreateNewAssets.Name", "EPackageReplaceMode::CreateNewAssets" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ReplaceExistingAssets.Name", "EPackageReplaceMode::ReplaceExistingAssets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EPackageReplaceMode",
		"EPackageReplaceMode",
		Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode()
	{
		if (!Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPackageParams;
class UScriptStruct* FHoudiniPackageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPackageParams, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPackageParams"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPackageParams>()
{
	return FHoudiniPackageParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PackageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackageMode;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ReplaceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplaceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempCookFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TempCookFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterPackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetActorName;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitStr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNetworkName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PDGTOPNetworkName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PDGTOPNodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGWorkItemIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PDGWorkItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGWorkResultArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PDGWorkResultArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverideEnabled_MetaData[];
#endif
		static void NewProp_OverideEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverideEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPackageParams>();
	}
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData[] = {
		{ "Comment", "// The current cook/baking mode\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "The current cook/baking mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode = { "PackageMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PackageMode), Z_Construct_UEnum_HoudiniEngine_EPackageMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData)) }; // 4016610061
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData[] = {
		{ "Comment", "// How to handle existing assets? replace or rename?\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "How to handle existing assets? replace or rename?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode = { "ReplaceMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, ReplaceMode), Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData)) }; // 1151557560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// When cooking in bake mode - folder to create assets in\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "When cooking in bake mode - folder to create assets in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, BakeFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData[] = {
		{ "Comment", "// When cooking in temp mode - folder to create assets in\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "When cooking in temp mode - folder to create assets in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder = { "TempCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, TempCookFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData[] = {
		{ "Comment", "// Package to save to\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Package to save to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage = { "OuterPackage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, OuterPackage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "// Name of the package we want to create\n// If null, we'll generate one from:\n// (without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n// (with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of the package we want to create\nIf null, we'll generate one from:\n(without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n(with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData[] = {
		{ "Comment", "// Name of the HDA\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of the HDA" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName = { "HoudiniAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData[] = {
		{ "Comment", "// Name of actor that is managing an instance of the HDA\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of actor that is managing an instance of the HDA" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName = { "HoudiniAssetActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, GeoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr = { "SplitStr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, SplitStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "Comment", "// GUID used for the owner\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "GUID used for the owner" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the TOP network name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the TOP network name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName = { "PDGTOPNetworkName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNetworkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the TOP node name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the TOP node name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName = { "PDGTOPNodeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the work item index of the TOP node\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the work item index of the TOP node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex = { "PDGWorkItemIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PDGWorkItemIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the work item array index in the WorkResult array of the TOP node\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the work item array index in the WorkResult array of the TOP node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex = { "PDGWorkResultArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, PDGWorkResultArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride_MetaData[] = {
		{ "Comment", "//Session Sync Asset Editor Users need the ability explicitly set the name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Session Sync Asset Editor Users need the ability explicitly set the name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, NameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride = { "FolderOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPackageParams, FolderOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_SetBit(void* Obj)
	{
		((FHoudiniPackageParams*)Obj)->OverideEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled = { "OverideEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniPackageParams), &Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPackageParams",
		sizeof(FHoudiniPackageParams),
		alignof(FHoudiniPackageParams),
		Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::EnumInfo[] = {
		{ EPackageMode_StaticEnum, TEXT("EPackageMode"), &Z_Registration_Info_UEnum_EPackageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4016610061U) },
		{ EPackageReplaceMode_StaticEnum, TEXT("EPackageReplaceMode"), &Z_Registration_Info_UEnum_EPackageReplaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1151557560U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPackageParams::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewStructOps, TEXT("HoudiniPackageParams"), &Z_Registration_Info_UScriptStruct_HoudiniPackageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPackageParams), 2265076899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_1341444742(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
