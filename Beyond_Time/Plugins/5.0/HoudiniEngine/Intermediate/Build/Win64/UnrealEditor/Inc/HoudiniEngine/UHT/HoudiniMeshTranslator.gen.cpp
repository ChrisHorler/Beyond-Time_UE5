// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniMeshTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshTranslator() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniSplitType;
	static UEnum* EHoudiniSplitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSplitType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSplitType>()
	{
		return EHoudiniSplitType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enumerators[] = {
		{ "EHoudiniSplitType::Invalid", (int64)EHoudiniSplitType::Invalid },
		{ "EHoudiniSplitType::Normal", (int64)EHoudiniSplitType::Normal },
		{ "EHoudiniSplitType::LOD", (int64)EHoudiniSplitType::LOD },
		{ "EHoudiniSplitType::RenderedComplexCollider", (int64)EHoudiniSplitType::RenderedComplexCollider },
		{ "EHoudiniSplitType::InvisibleComplexCollider", (int64)EHoudiniSplitType::InvisibleComplexCollider },
		{ "EHoudiniSplitType::RenderedUCXCollider", (int64)EHoudiniSplitType::RenderedUCXCollider },
		{ "EHoudiniSplitType::InvisibleUCXCollider", (int64)EHoudiniSplitType::InvisibleUCXCollider },
		{ "EHoudiniSplitType::RenderedSimpleCollider", (int64)EHoudiniSplitType::RenderedSimpleCollider },
		{ "EHoudiniSplitType::InvisibleSimpleCollider", (int64)EHoudiniSplitType::InvisibleSimpleCollider },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EHoudiniSplitType::Invalid" },
		{ "InvisibleComplexCollider.Name", "EHoudiniSplitType::InvisibleComplexCollider" },
		{ "InvisibleSimpleCollider.Name", "EHoudiniSplitType::InvisibleSimpleCollider" },
		{ "InvisibleUCXCollider.Name", "EHoudiniSplitType::InvisibleUCXCollider" },
		{ "LOD.Name", "EHoudiniSplitType::LOD" },
		{ "ModuleRelativePath", "Private/HoudiniMeshTranslator.h" },
		{ "Normal.Name", "EHoudiniSplitType::Normal" },
		{ "RenderedComplexCollider.Name", "EHoudiniSplitType::RenderedComplexCollider" },
		{ "RenderedSimpleCollider.Name", "EHoudiniSplitType::RenderedSimpleCollider" },
		{ "RenderedUCXCollider.Name", "EHoudiniSplitType::RenderedUCXCollider" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniSplitType",
		"EHoudiniSplitType",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics::EnumInfo[] = {
		{ EHoudiniSplitType_StaticEnum, TEXT("EHoudiniSplitType"), &Z_Registration_Info_UEnum_EHoudiniSplitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3102128603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_2858818938(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
