// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniTool() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolType;
	static UEnum* EHoudiniToolType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolType>()
	{
		return EHoudiniToolType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enumerators[] = {
		{ "EHoudiniToolType::HTOOLTYPE_GENERATOR", (int64)EHoudiniToolType::HTOOLTYPE_GENERATOR },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enum_MetaDataParams[] = {
		{ "HTOOLTYPE_GENERATOR.Comment", "// For tools that generates geometry, and do not need input\n" },
		{ "HTOOLTYPE_GENERATOR.DisplayName", "Generator" },
		{ "HTOOLTYPE_GENERATOR.Name", "EHoudiniToolType::HTOOLTYPE_GENERATOR" },
		{ "HTOOLTYPE_GENERATOR.ToolTip", "For tools that generates geometry, and do not need input" },
		{ "HTOOLTYPE_OPERATOR_BATCH.Comment", "// For tools that needs to be applied each time for each single selected\n" },
		{ "HTOOLTYPE_OPERATOR_BATCH.DisplayName", "Batch Operator" },
		{ "HTOOLTYPE_OPERATOR_BATCH.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH" },
		{ "HTOOLTYPE_OPERATOR_BATCH.ToolTip", "For tools that needs to be applied each time for each single selected" },
		{ "HTOOLTYPE_OPERATOR_MULTI.Comment", "// For Tools that have multiple input, a single selected asset will be applied to each input\n" },
		{ "HTOOLTYPE_OPERATOR_MULTI.DisplayName", "Operator (multiple)" },
		{ "HTOOLTYPE_OPERATOR_MULTI.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI" },
		{ "HTOOLTYPE_OPERATOR_MULTI.ToolTip", "For Tools that have multiple input, a single selected asset will be applied to each input" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.Comment", "// For tools that have a single input, the selection will be merged in that single input\n" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.DisplayName", "Operator (single)" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.ToolTip", "For tools that have a single input, the selection will be merged in that single input" },
		{ "ModuleRelativePath", "Private/HoudiniTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniToolType",
		"EHoudiniToolType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolSelectionType;
	static UEnum* EHoudiniToolSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolSelectionType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolSelectionType>()
	{
		return EHoudiniToolSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enumerators[] = {
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_ALL },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "HTOOL_SELECTION_ALL.Comment", "// For tools that can be applied both to Content Browser and World selection\n" },
		{ "HTOOL_SELECTION_ALL.DisplayName", "Content Browser AND World" },
		{ "HTOOL_SELECTION_ALL.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL" },
		{ "HTOOL_SELECTION_ALL.ToolTip", "For tools that can be applied both to Content Browser and World selection" },
		{ "HTOOL_SELECTION_CB_ONLY.Comment", "// For tools that can be applied only to Content Browser selection\n" },
		{ "HTOOL_SELECTION_CB_ONLY.DisplayName", "Content browser selection only" },
		{ "HTOOL_SELECTION_CB_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY" },
		{ "HTOOL_SELECTION_CB_ONLY.ToolTip", "For tools that can be applied only to Content Browser selection" },
		{ "HTOOL_SELECTION_WORLD_ONLY.Comment", "// For tools that can be applied only to World selection\n" },
		{ "HTOOL_SELECTION_WORLD_ONLY.DisplayName", "World selection only" },
		{ "HTOOL_SELECTION_WORLD_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY" },
		{ "HTOOL_SELECTION_WORLD_ONLY.ToolTip", "For tools that can be applied only to World selection" },
		{ "ModuleRelativePath", "Private/HoudiniTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniToolSelectionType",
		"EHoudiniToolSelectionType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h_Statics::EnumInfo[] = {
		{ EHoudiniToolType_StaticEnum, TEXT("EHoudiniToolType"), &Z_Registration_Info_UEnum_EHoudiniToolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3993249802U) },
		{ EHoudiniToolSelectionType_StaticEnum, TEXT("EHoudiniToolSelectionType"), &Z_Registration_Info_UEnum_EHoudiniToolSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4245709104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h_527118883(TEXT("/Script/HoudiniEngineEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
