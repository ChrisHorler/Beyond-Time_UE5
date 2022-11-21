// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniParameterDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterDetails() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniColorRampCurve();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniColorRampCurve_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniFloatRampCurve();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniFloatRampCurve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniFloatRampCurve::StaticRegisterNativesUHoudiniFloatRampCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniFloatRampCurve);
	UClass* Z_Construct_UClass_UHoudiniFloatRampCurve_NoRegister()
	{
		return UHoudiniFloatRampCurve::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniFloatRampCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterDetails.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniFloatRampCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::ClassParams = {
		&UHoudiniFloatRampCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniFloatRampCurve()
	{
		if (!Z_Registration_Info_UClass_UHoudiniFloatRampCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniFloatRampCurve.OuterSingleton, Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniFloatRampCurve.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniFloatRampCurve>()
	{
		return UHoudiniFloatRampCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniFloatRampCurve);
	UHoudiniFloatRampCurve::~UHoudiniFloatRampCurve() {}
	void UHoudiniColorRampCurve::StaticRegisterNativesUHoudiniColorRampCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniColorRampCurve);
	UClass* Z_Construct_UClass_UHoudiniColorRampCurve_NoRegister()
	{
		return UHoudiniColorRampCurve::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniColorRampCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniColorRampCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveLinearColor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "FilePath" },
		{ "IncludePath", "HoudiniParameterDetails.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniColorRampCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniColorRampCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniColorRampCurve_Statics::ClassParams = {
		&UHoudiniColorRampCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniColorRampCurve()
	{
		if (!Z_Registration_Info_UClass_UHoudiniColorRampCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniColorRampCurve.OuterSingleton, Z_Construct_UClass_UHoudiniColorRampCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniColorRampCurve.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniColorRampCurve>()
	{
		return UHoudiniColorRampCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniColorRampCurve);
	UHoudiniColorRampCurve::~UHoudiniColorRampCurve() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniParameterDetails_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniParameterDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniFloatRampCurve, UHoudiniFloatRampCurve::StaticClass, TEXT("UHoudiniFloatRampCurve"), &Z_Registration_Info_UClass_UHoudiniFloatRampCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniFloatRampCurve), 502428685U) },
		{ Z_Construct_UClass_UHoudiniColorRampCurve, UHoudiniColorRampCurve::StaticClass, TEXT("UHoudiniColorRampCurve"), &Z_Registration_Info_UClass_UHoudiniColorRampCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniColorRampCurve), 1018641695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniParameterDetails_h_1797704024(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniParameterDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniParameterDetails_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
