// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniGeoImportCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImportCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHoudiniGeoImportCommandlet::StaticRegisterNativesUHoudiniGeoImportCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniGeoImportCommandlet);
	UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister()
	{
		return UHoudiniGeoImportCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImportCommandlet.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImportCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImportCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams = {
		&UHoudiniGeoImportCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet()
	{
		if (!Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton, Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniGeoImportCommandlet>()
	{
		return UHoudiniGeoImportCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImportCommandlet);
	UHoudiniGeoImportCommandlet::~UHoudiniGeoImportCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniGeoImportCommandlet, UHoudiniGeoImportCommandlet::StaticClass, TEXT("UHoudiniGeoImportCommandlet"), &Z_Registration_Info_UClass_UHoudiniGeoImportCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniGeoImportCommandlet), 1284993161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h_1067746028(TEXT("/Script/HoudiniEngine"),
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImportCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
