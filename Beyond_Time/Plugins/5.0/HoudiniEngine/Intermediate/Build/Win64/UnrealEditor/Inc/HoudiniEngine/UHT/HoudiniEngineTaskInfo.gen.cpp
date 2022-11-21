// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngineTaskInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineTaskInfo() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineTaskState;
	static UEnum* EHoudiniEngineTaskState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniEngineTaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniEngineTaskState"));
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineTaskState.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskState>()
	{
		return EHoudiniEngineTaskState_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enumerators[] = {
		{ "EHoudiniEngineTaskState::None", (int64)EHoudiniEngineTaskState::None },
		{ "EHoudiniEngineTaskState::Working", (int64)EHoudiniEngineTaskState::Working },
		{ "EHoudiniEngineTaskState::Success", (int64)EHoudiniEngineTaskState::Success },
		{ "EHoudiniEngineTaskState::FinishedWithError", (int64)EHoudiniEngineTaskState::FinishedWithError },
		{ "EHoudiniEngineTaskState::FinishedWithFatalError", (int64)EHoudiniEngineTaskState::FinishedWithFatalError },
		{ "EHoudiniEngineTaskState::Aborted", (int64)EHoudiniEngineTaskState::Aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "// Indicates the task has been aborted (unused)\n" },
		{ "Aborted.Name", "EHoudiniEngineTaskState::Aborted" },
		{ "Aborted.ToolTip", "Indicates the task has been aborted (unused)" },
		{ "FinishedWithError.Comment", "// Indicates the task has finished with non fatal errors\n" },
		{ "FinishedWithError.Name", "EHoudiniEngineTaskState::FinishedWithError" },
		{ "FinishedWithError.ToolTip", "Indicates the task has finished with non fatal errors" },
		{ "FinishedWithFatalError.Comment", "// Indicates the task has finished with fatal errors and should be terminated\n" },
		{ "FinishedWithFatalError.Name", "EHoudiniEngineTaskState::FinishedWithFatalError" },
		{ "FinishedWithFatalError.ToolTip", "Indicates the task has finished with fatal errors and should be terminated" },
		{ "ModuleRelativePath", "Private/HoudiniEngineTaskInfo.h" },
		{ "None.Name", "EHoudiniEngineTaskState::None" },
		{ "Success.Comment", "// Indicates the task has successfully finished\n" },
		{ "Success.Name", "EHoudiniEngineTaskState::Success" },
		{ "Success.ToolTip", "Indicates the task has successfully finished" },
		{ "Working.Comment", "// Indicates the current task is still running\n" },
		{ "Working.Name", "EHoudiniEngineTaskState::Working" },
		{ "Working.ToolTip", "Indicates the current task is still running" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniEngineTaskState",
		"EHoudiniEngineTaskState",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineTaskState.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineTaskState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h_Statics::EnumInfo[] = {
		{ EHoudiniEngineTaskState_StaticEnum, TEXT("EHoudiniEngineTaskState"), &Z_Registration_Info_UEnum_EHoudiniEngineTaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3818305443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h_3470827457(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
