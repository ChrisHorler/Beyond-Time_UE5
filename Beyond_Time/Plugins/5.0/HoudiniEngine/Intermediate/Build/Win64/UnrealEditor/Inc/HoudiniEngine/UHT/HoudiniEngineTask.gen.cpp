// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngineTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineTask() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineTaskType;
	static UEnum* EHoudiniEngineTaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniEngineTaskType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskType>()
	{
		return EHoudiniEngineTaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enumerators[] = {
		{ "EHoudiniEngineTaskType::None", (int64)EHoudiniEngineTaskType::None },
		{ "EHoudiniEngineTaskType::AssetInstantiation", (int64)EHoudiniEngineTaskType::AssetInstantiation },
		{ "EHoudiniEngineTaskType::AssetCooking", (int64)EHoudiniEngineTaskType::AssetCooking },
		{ "EHoudiniEngineTaskType::AssetDeletion", (int64)EHoudiniEngineTaskType::AssetDeletion },
		{ "EHoudiniEngineTaskType::AssetProcess", (int64)EHoudiniEngineTaskType::AssetProcess },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enum_MetaDataParams[] = {
		{ "AssetCooking.Comment", "// This type corresponds to Houdini asset cooking request.\n" },
		{ "AssetCooking.Name", "EHoudiniEngineTaskType::AssetCooking" },
		{ "AssetCooking.ToolTip", "This type corresponds to Houdini asset cooking request." },
		{ "AssetDeletion.Comment", "// This type is used for asynchronous asset deletion.\n" },
		{ "AssetDeletion.Name", "EHoudiniEngineTaskType::AssetDeletion" },
		{ "AssetDeletion.ToolTip", "This type is used for asynchronous asset deletion." },
		{ "AssetInstantiation.Comment", "// This type corresponds to Houdini asset instantiation (without cooking).\n" },
		{ "AssetInstantiation.Name", "EHoudiniEngineTaskType::AssetInstantiation" },
		{ "AssetInstantiation.ToolTip", "This type corresponds to Houdini asset instantiation (without cooking)." },
		{ "AssetProcess.Comment", "// This type is used when processing the results of a sucessful cook\n" },
		{ "AssetProcess.Name", "EHoudiniEngineTaskType::AssetProcess" },
		{ "AssetProcess.ToolTip", "This type is used when processing the results of a sucessful cook" },
		{ "Comment", "/*\nnamespace EHoudiniEngineTaskType\n{\n\x09""enum Type\n\x09{\n\x09\x09None,\n\n\x09\x09// This type corresponds to Houdini asset instantiation (without cooking).\n\x09\x09""AssetInstantiation,\n\n\x09\x09// This type corresponds to Houdini asset cooking request.\n\x09\x09""AssetCooking,\n\n\x09\x09// This type is used for asynchronous asset deletion.\n\x09\x09""AssetDeletion\n\x09};\n}\n*/" },
		{ "ModuleRelativePath", "Private/HoudiniEngineTask.h" },
		{ "None.Name", "EHoudiniEngineTaskType::None" },
		{ "ToolTip", "namespace EHoudiniEngineTaskType\n{\n       enum Type\n       {\n               None,\n\n               // This type corresponds to Houdini asset instantiation (without cooking).\n               AssetInstantiation,\n\n               // This type corresponds to Houdini asset cooking request.\n               AssetCooking,\n\n               // This type is used for asynchronous asset deletion.\n               AssetDeletion\n       };\n}" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniEngineTaskType",
		"EHoudiniEngineTaskType",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics::EnumInfo[] = {
		{ EHoudiniEngineTaskType_StaticEnum, TEXT("EHoudiniEngineTaskType"), &Z_Registration_Info_UEnum_EHoudiniEngineTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4253778591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_851835808(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
