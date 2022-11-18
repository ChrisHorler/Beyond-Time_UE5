// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngine() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniSessionStatus;
	static UEnum* EHoudiniSessionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSessionStatus"));
		}
		return Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionStatus>()
	{
		return EHoudiniSessionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enumerators[] = {
		{ "EHoudiniSessionStatus::Invalid", (int64)EHoudiniSessionStatus::Invalid },
		{ "EHoudiniSessionStatus::NotStarted", (int64)EHoudiniSessionStatus::NotStarted },
		{ "EHoudiniSessionStatus::Connected", (int64)EHoudiniSessionStatus::Connected },
		{ "EHoudiniSessionStatus::None", (int64)EHoudiniSessionStatus::None },
		{ "EHoudiniSessionStatus::Stopped", (int64)EHoudiniSessionStatus::Stopped },
		{ "EHoudiniSessionStatus::Failed", (int64)EHoudiniSessionStatus::Failed },
		{ "EHoudiniSessionStatus::Lost", (int64)EHoudiniSessionStatus::Lost },
		{ "EHoudiniSessionStatus::NoLicense", (int64)EHoudiniSessionStatus::NoLicense },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enum_MetaDataParams[] = {
		{ "Connected.Comment", "// Session not initialized yet\n" },
		{ "Connected.Name", "EHoudiniSessionStatus::Connected" },
		{ "Connected.ToolTip", "Session not initialized yet" },
		{ "Failed.Comment", "// Session stopped\n" },
		{ "Failed.Name", "EHoudiniSessionStatus::Failed" },
		{ "Failed.ToolTip", "Session stopped" },
		{ "Invalid.Name", "EHoudiniSessionStatus::Invalid" },
		{ "Lost.Comment", "// Session failed to connect\n" },
		{ "Lost.Name", "EHoudiniSessionStatus::Lost" },
		{ "Lost.ToolTip", "Session failed to connect" },
		{ "ModuleRelativePath", "Private/HoudiniEngine.h" },
		{ "NoLicense.Comment", "// Session Lost (HARS/Houdini Crash?)\n" },
		{ "NoLicense.Name", "EHoudiniSessionStatus::NoLicense" },
		{ "NoLicense.ToolTip", "Session Lost (HARS/Houdini Crash?)" },
		{ "None.Comment", "// Session successfully started\n" },
		{ "None.Name", "EHoudiniSessionStatus::None" },
		{ "None.ToolTip", "Session successfully started" },
		{ "NotStarted.Name", "EHoudiniSessionStatus::NotStarted" },
		{ "Stopped.Comment", "// Session type set to None\n" },
		{ "Stopped.Name", "EHoudiniSessionStatus::Stopped" },
		{ "Stopped.ToolTip", "Session type set to None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniSessionStatus",
		"EHoudiniSessionStatus",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics::EnumInfo[] = {
		{ EHoudiniSessionStatus_StaticEnum, TEXT("EHoudiniSessionStatus"), &Z_Registration_Info_UEnum_EHoudiniSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1775370207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_1045546241(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
