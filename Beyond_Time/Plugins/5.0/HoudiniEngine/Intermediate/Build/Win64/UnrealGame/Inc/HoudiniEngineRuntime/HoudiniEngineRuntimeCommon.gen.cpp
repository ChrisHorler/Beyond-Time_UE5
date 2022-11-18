// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniEngineRuntimeCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineRuntimeCommon() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampInterpolationType;
	static UEnum* EHoudiniRampInterpolationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampInterpolationType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>()
	{
		return EHoudiniRampInterpolationType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators[] = {
		{ "EHoudiniRampInterpolationType::InValid", (int64)EHoudiniRampInterpolationType::InValid },
		{ "EHoudiniRampInterpolationType::CONSTANT", (int64)EHoudiniRampInterpolationType::CONSTANT },
		{ "EHoudiniRampInterpolationType::LINEAR", (int64)EHoudiniRampInterpolationType::LINEAR },
		{ "EHoudiniRampInterpolationType::CATMULL_ROM", (int64)EHoudiniRampInterpolationType::CATMULL_ROM },
		{ "EHoudiniRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniRampInterpolationType::MONOTONE_CUBIC },
		{ "EHoudiniRampInterpolationType::BEZIER", (int64)EHoudiniRampInterpolationType::BEZIER },
		{ "EHoudiniRampInterpolationType::BSPLINE", (int64)EHoudiniRampInterpolationType::BSPLINE },
		{ "EHoudiniRampInterpolationType::HERMITE", (int64)EHoudiniRampInterpolationType::HERMITE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams[] = {
		{ "BEZIER.Name", "EHoudiniRampInterpolationType::BEZIER" },
		{ "BSPLINE.Name", "EHoudiniRampInterpolationType::BSPLINE" },
		{ "CATMULL_ROM.Name", "EHoudiniRampInterpolationType::CATMULL_ROM" },
		{ "CONSTANT.Name", "EHoudiniRampInterpolationType::CONSTANT" },
		{ "HERMITE.Name", "EHoudiniRampInterpolationType::HERMITE" },
		{ "InValid.Name", "EHoudiniRampInterpolationType::InValid" },
		{ "LINEAR.Name", "EHoudiniRampInterpolationType::LINEAR" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "MONOTONE_CUBIC.Name", "EHoudiniRampInterpolationType::MONOTONE_CUBIC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniRampInterpolationType",
		"EHoudiniRampInterpolationType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton;
	}
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineBakeOption;
	static UEnum* EHoudiniEngineBakeOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineBakeOption"));
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>()
	{
		return EHoudiniEngineBakeOption_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enumerators[] = {
		{ "EHoudiniEngineBakeOption::ToActor", (int64)EHoudiniEngineBakeOption::ToActor },
		{ "EHoudiniEngineBakeOption::ToBlueprint", (int64)EHoudiniEngineBakeOption::ToBlueprint },
		{ "EHoudiniEngineBakeOption::ToFoliage", (int64)EHoudiniEngineBakeOption::ToFoliage },
		{ "EHoudiniEngineBakeOption::ToWorldOutliner", (int64)EHoudiniEngineBakeOption::ToWorldOutliner },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "ToActor.Name", "EHoudiniEngineBakeOption::ToActor" },
		{ "ToBlueprint.Name", "EHoudiniEngineBakeOption::ToBlueprint" },
		{ "ToFoliage.Name", "EHoudiniEngineBakeOption::ToFoliage" },
		{ "ToWorldOutliner.Name", "EHoudiniEngineBakeOption::ToWorldOutliner" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniEngineBakeOption",
		"EHoudiniEngineBakeOption",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType;
	static UEnum* EHoudiniLandscapeOutputBakeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeOutputBakeType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>()
	{
		return EHoudiniLandscapeOutputBakeType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators[] = {
		{ "EHoudiniLandscapeOutputBakeType::Detachment", (int64)EHoudiniLandscapeOutputBakeType::Detachment },
		{ "EHoudiniLandscapeOutputBakeType::BakeToImage", (int64)EHoudiniLandscapeOutputBakeType::BakeToImage },
		{ "EHoudiniLandscapeOutputBakeType::BakeToWorld", (int64)EHoudiniLandscapeOutputBakeType::BakeToWorld },
		{ "EHoudiniLandscapeOutputBakeType::InValid", (int64)EHoudiniLandscapeOutputBakeType::InValid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams[] = {
		{ "BakeToImage.Name", "EHoudiniLandscapeOutputBakeType::BakeToImage" },
		{ "BakeToWorld.Name", "EHoudiniLandscapeOutputBakeType::BakeToWorld" },
		{ "Detachment.Name", "EHoudiniLandscapeOutputBakeType::Detachment" },
		{ "InValid.Name", "EHoudiniLandscapeOutputBakeType::InValid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniLandscapeOutputBakeType",
		"EHoudiniLandscapeOutputBakeType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInputType;
	static UEnum* EHoudiniInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
	{
		return EHoudiniInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators[] = {
		{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
		{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
		{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
		{ "EHoudiniInputType::Asset", (int64)EHoudiniInputType::Asset },
		{ "EHoudiniInputType::Landscape", (int64)EHoudiniInputType::Landscape },
		{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
		{ "EHoudiniInputType::Skeletal", (int64)EHoudiniInputType::Skeletal },
		{ "EHoudiniInputType::GeometryCollection", (int64)EHoudiniInputType::GeometryCollection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams[] = {
		{ "Asset.Name", "EHoudiniInputType::Asset" },
		{ "Curve.Name", "EHoudiniInputType::Curve" },
		{ "Geometry.Name", "EHoudiniInputType::Geometry" },
		{ "GeometryCollection.Name", "EHoudiniInputType::GeometryCollection" },
		{ "Invalid.Name", "EHoudiniInputType::Invalid" },
		{ "Landscape.Name", "EHoudiniInputType::Landscape" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Skeletal.Name", "EHoudiniInputType::Skeletal" },
		{ "World.Name", "EHoudiniInputType::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniInputType",
		"EHoudiniInputType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniOutputType;
	static UEnum* EHoudiniOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniOutputType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>()
	{
		return EHoudiniOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators[] = {
		{ "EHoudiniOutputType::Invalid", (int64)EHoudiniOutputType::Invalid },
		{ "EHoudiniOutputType::Mesh", (int64)EHoudiniOutputType::Mesh },
		{ "EHoudiniOutputType::Instancer", (int64)EHoudiniOutputType::Instancer },
		{ "EHoudiniOutputType::Landscape", (int64)EHoudiniOutputType::Landscape },
		{ "EHoudiniOutputType::Curve", (int64)EHoudiniOutputType::Curve },
		{ "EHoudiniOutputType::Skeletal", (int64)EHoudiniOutputType::Skeletal },
		{ "EHoudiniOutputType::GeometryCollection", (int64)EHoudiniOutputType::GeometryCollection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams[] = {
		{ "Curve.Name", "EHoudiniOutputType::Curve" },
		{ "GeometryCollection.Name", "EHoudiniOutputType::GeometryCollection" },
		{ "Instancer.Name", "EHoudiniOutputType::Instancer" },
		{ "Invalid.Name", "EHoudiniOutputType::Invalid" },
		{ "Landscape.Name", "EHoudiniOutputType::Landscape" },
		{ "Mesh.Name", "EHoudiniOutputType::Mesh" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Skeletal.Name", "EHoudiniOutputType::Skeletal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniOutputType",
		"EHoudiniOutputType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveType;
	static UEnum* EHoudiniCurveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>()
	{
		return EHoudiniCurveType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators[] = {
		{ "EHoudiniCurveType::Invalid", (int64)EHoudiniCurveType::Invalid },
		{ "EHoudiniCurveType::Polygon", (int64)EHoudiniCurveType::Polygon },
		{ "EHoudiniCurveType::Nurbs", (int64)EHoudiniCurveType::Nurbs },
		{ "EHoudiniCurveType::Bezier", (int64)EHoudiniCurveType::Bezier },
		{ "EHoudiniCurveType::Points", (int64)EHoudiniCurveType::Points },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams[] = {
		{ "Bezier.Name", "EHoudiniCurveType::Bezier" },
		{ "Invalid.Name", "EHoudiniCurveType::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Nurbs.Name", "EHoudiniCurveType::Nurbs" },
		{ "Points.Name", "EHoudiniCurveType::Points" },
		{ "Polygon.Name", "EHoudiniCurveType::Polygon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniCurveType",
		"EHoudiniCurveType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveMethod;
	static UEnum* EHoudiniCurveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveMethod"));
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>()
	{
		return EHoudiniCurveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators[] = {
		{ "EHoudiniCurveMethod::Invalid", (int64)EHoudiniCurveMethod::Invalid },
		{ "EHoudiniCurveMethod::CVs", (int64)EHoudiniCurveMethod::CVs },
		{ "EHoudiniCurveMethod::Breakpoints", (int64)EHoudiniCurveMethod::Breakpoints },
		{ "EHoudiniCurveMethod::Freehand", (int64)EHoudiniCurveMethod::Freehand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams[] = {
		{ "Breakpoints.Name", "EHoudiniCurveMethod::Breakpoints" },
		{ "CVs.Name", "EHoudiniCurveMethod::CVs" },
		{ "Freehand.Name", "EHoudiniCurveMethod::Freehand" },
		{ "Invalid.Name", "EHoudiniCurveMethod::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniCurveMethod",
		"EHoudiniCurveMethod",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization;
	static UEnum* EHoudiniCurveBreakpointParameterization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveBreakpointParameterization"));
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>()
	{
		return EHoudiniCurveBreakpointParameterization_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators[] = {
		{ "EHoudiniCurveBreakpointParameterization::Invalid", (int64)EHoudiniCurveBreakpointParameterization::Invalid },
		{ "EHoudiniCurveBreakpointParameterization::Uniform", (int64)EHoudiniCurveBreakpointParameterization::Uniform },
		{ "EHoudiniCurveBreakpointParameterization::Chord", (int64)EHoudiniCurveBreakpointParameterization::Chord },
		{ "EHoudiniCurveBreakpointParameterization::Centripetal", (int64)EHoudiniCurveBreakpointParameterization::Centripetal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams[] = {
		{ "Centripetal.Name", "EHoudiniCurveBreakpointParameterization::Centripetal" },
		{ "Chord.Name", "EHoudiniCurveBreakpointParameterization::Chord" },
		{ "Invalid.Name", "EHoudiniCurveBreakpointParameterization::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Uniform.Name", "EHoudiniCurveBreakpointParameterization::Uniform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniCurveBreakpointParameterization",
		"EHoudiniCurveBreakpointParameterization",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeExportType;
	static UEnum* EHoudiniLandscapeExportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeExportType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>()
	{
		return EHoudiniLandscapeExportType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators[] = {
		{ "EHoudiniLandscapeExportType::Heightfield", (int64)EHoudiniLandscapeExportType::Heightfield },
		{ "EHoudiniLandscapeExportType::Mesh", (int64)EHoudiniLandscapeExportType::Mesh },
		{ "EHoudiniLandscapeExportType::Points", (int64)EHoudiniLandscapeExportType::Points },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams[] = {
		{ "Heightfield.Name", "EHoudiniLandscapeExportType::Heightfield" },
		{ "Mesh.Name", "EHoudiniLandscapeExportType::Mesh" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Points.Name", "EHoudiniLandscapeExportType::Points" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniLandscapeExportType",
		"EHoudiniLandscapeExportType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton;
	}
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGBakeSelectionOption;
	static UEnum* EPDGBakeSelectionOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakeSelectionOption"));
		}
		return Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>()
	{
		return EPDGBakeSelectionOption_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enumerators[] = {
		{ "EPDGBakeSelectionOption::All", (int64)EPDGBakeSelectionOption::All },
		{ "EPDGBakeSelectionOption::SelectedNetwork", (int64)EPDGBakeSelectionOption::SelectedNetwork },
		{ "EPDGBakeSelectionOption::SelectedNode", (int64)EPDGBakeSelectionOption::SelectedNode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EPDGBakeSelectionOption::All" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "SelectedNetwork.Name", "EPDGBakeSelectionOption::SelectedNetwork" },
		{ "SelectedNode.Name", "EPDGBakeSelectionOption::SelectedNode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EPDGBakeSelectionOption",
		"EPDGBakeSelectionOption",
		Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption()
	{
		if (!Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption;
	static UEnum* EPDGBakePackageReplaceModeOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakePackageReplaceModeOption"));
		}
		return Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>()
	{
		return EPDGBakePackageReplaceModeOption_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enumerators[] = {
		{ "EPDGBakePackageReplaceModeOption::CreateNewAssets", (int64)EPDGBakePackageReplaceModeOption::CreateNewAssets },
		{ "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets", (int64)EPDGBakePackageReplaceModeOption::ReplaceExistingAssets },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enum_MetaDataParams[] = {
		{ "CreateNewAssets.Name", "EPDGBakePackageReplaceModeOption::CreateNewAssets" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "ReplaceExistingAssets.Name", "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EPDGBakePackageReplaceModeOption",
		"EPDGBakePackageReplaceModeOption",
		Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption()
	{
		if (!Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineResult;
	static UEnum* EHoudiniProxyRefineResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineResult"));
		}
		return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>()
	{
		return EHoudiniProxyRefineResult_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators[] = {
		{ "EHoudiniProxyRefineResult::Invalid", (int64)EHoudiniProxyRefineResult::Invalid },
		{ "EHoudiniProxyRefineResult::Failed", (int64)EHoudiniProxyRefineResult::Failed },
		{ "EHoudiniProxyRefineResult::Success", (int64)EHoudiniProxyRefineResult::Success },
		{ "EHoudiniProxyRefineResult::Skipped", (int64)EHoudiniProxyRefineResult::Skipped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
		{ "Failed.Comment", "// Refinement (or cook if needed) failed\n" },
		{ "Failed.Name", "EHoudiniProxyRefineResult::Failed" },
		{ "Failed.ToolTip", "Refinement (or cook if needed) failed" },
		{ "Invalid.Name", "EHoudiniProxyRefineResult::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Skipped.Comment", "// Refinement was skipped, either it was not necessary or the operation was cancelled by the user\n" },
		{ "Skipped.Name", "EHoudiniProxyRefineResult::Skipped" },
		{ "Skipped.ToolTip", "Refinement was skipped, either it was not necessary or the operation was cancelled by the user" },
		{ "Success.Comment", "// Refinement completed successfully\n" },
		{ "Success.Name", "EHoudiniProxyRefineResult::Success" },
		{ "Success.ToolTip", "Refinement completed successfully" },
		{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniProxyRefineResult",
		"EHoudiniProxyRefineResult",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult;
	static UEnum* EHoudiniProxyRefineRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineRequestResult"));
		}
		return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>()
	{
		return EHoudiniProxyRefineRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators[] = {
		{ "EHoudiniProxyRefineRequestResult::Invalid", (int64)EHoudiniProxyRefineRequestResult::Invalid },
		{ "EHoudiniProxyRefineRequestResult::None", (int64)EHoudiniProxyRefineRequestResult::None },
		{ "EHoudiniProxyRefineRequestResult::PendingCooks", (int64)EHoudiniProxyRefineRequestResult::PendingCooks },
		{ "EHoudiniProxyRefineRequestResult::Refined", (int64)EHoudiniProxyRefineRequestResult::Refined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
		{ "Invalid.Name", "EHoudiniProxyRefineRequestResult::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "None.Comment", "// No refinement is needed\n" },
		{ "None.Name", "EHoudiniProxyRefineRequestResult::None" },
		{ "None.ToolTip", "No refinement is needed" },
		{ "PendingCooks.Comment", "// A cook is needed, refinement will commence automatically after the cook\n" },
		{ "PendingCooks.Name", "EHoudiniProxyRefineRequestResult::PendingCooks" },
		{ "PendingCooks.ToolTip", "A cook is needed, refinement will commence automatically after the cook" },
		{ "Refined.Comment", "// Successfully refined\n" },
		{ "Refined.Name", "EHoudiniProxyRefineRequestResult::Refined" },
		{ "Refined.ToolTip", "Successfully refined" },
		{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniProxyRefineRequestResult",
		"EHoudiniProxyRefineRequestResult",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics::EnumInfo[] = {
		{ EHoudiniRampInterpolationType_StaticEnum, TEXT("EHoudiniRampInterpolationType"), &Z_Registration_Info_UEnum_EHoudiniRampInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3255016069U) },
#if WITH_EDITORONLY_DATA
		{ EHoudiniEngineBakeOption_StaticEnum, TEXT("EHoudiniEngineBakeOption"), &Z_Registration_Info_UEnum_EHoudiniEngineBakeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3229896027U) },
#endif
		{ EHoudiniLandscapeOutputBakeType_StaticEnum, TEXT("EHoudiniLandscapeOutputBakeType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3006034418U) },
		{ EHoudiniInputType_StaticEnum, TEXT("EHoudiniInputType"), &Z_Registration_Info_UEnum_EHoudiniInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 370716784U) },
		{ EHoudiniOutputType_StaticEnum, TEXT("EHoudiniOutputType"), &Z_Registration_Info_UEnum_EHoudiniOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3136956508U) },
		{ EHoudiniCurveType_StaticEnum, TEXT("EHoudiniCurveType"), &Z_Registration_Info_UEnum_EHoudiniCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4285111500U) },
		{ EHoudiniCurveMethod_StaticEnum, TEXT("EHoudiniCurveMethod"), &Z_Registration_Info_UEnum_EHoudiniCurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1134644187U) },
		{ EHoudiniCurveBreakpointParameterization_StaticEnum, TEXT("EHoudiniCurveBreakpointParameterization"), &Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 835065955U) },
		{ EHoudiniLandscapeExportType_StaticEnum, TEXT("EHoudiniLandscapeExportType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 969116104U) },
#if WITH_EDITORONLY_DATA
		{ EPDGBakeSelectionOption_StaticEnum, TEXT("EPDGBakeSelectionOption"), &Z_Registration_Info_UEnum_EPDGBakeSelectionOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2253993420U) },
#endif
#if WITH_EDITORONLY_DATA
		{ EPDGBakePackageReplaceModeOption_StaticEnum, TEXT("EPDGBakePackageReplaceModeOption"), &Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2347698961U) },
#endif
		{ EHoudiniProxyRefineResult_StaticEnum, TEXT("EHoudiniProxyRefineResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2317393953U) },
		{ EHoudiniProxyRefineRequestResult_StaticEnum, TEXT("EHoudiniProxyRefineRequestResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1939588320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_1325939027(TEXT("/Script/HoudiniEngineRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
