// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputTypes() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniXformType;
	static UEnum* EHoudiniXformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniXformType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>()
	{
		return EHoudiniXformType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators[] = {
		{ "EHoudiniXformType::None", (int64)EHoudiniXformType::None },
		{ "EHoudiniXformType::IntoThisObject", (int64)EHoudiniXformType::IntoThisObject },
		{ "EHoudiniXformType::Auto", (int64)EHoudiniXformType::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EHoudiniXformType::Auto" },
		{ "IntoThisObject.Name", "EHoudiniXformType::IntoThisObject" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "None.Name", "EHoudiniXformType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniXformType",
		"EHoudiniXformType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo[] = {
		{ EHoudiniXformType_StaticEnum, TEXT("EHoudiniXformType"), &Z_Registration_Info_UEnum_EHoudiniXformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 526419163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_2597992716(TEXT("/Script/HoudiniEngineRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
