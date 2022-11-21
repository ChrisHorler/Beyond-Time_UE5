// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniGeoImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHoudiniGeoImporter::StaticRegisterNativesUHoudiniGeoImporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniGeoImporter);
	UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister()
	{
		return UHoudiniGeoImporter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniGeoImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniGeoImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImporter.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniGeoImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams = {
		&UHoudiniGeoImporter::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniGeoImporter()
	{
		if (!Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton, Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniGeoImporter>()
	{
		return UHoudiniGeoImporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImporter);
	UHoudiniGeoImporter::~UHoudiniGeoImporter() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniGeoImporter, UHoudiniGeoImporter::StaticClass, TEXT("UHoudiniGeoImporter"), &Z_Registration_Info_UClass_UHoudiniGeoImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniGeoImporter), 3667077983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_2826622857(TEXT("/Script/HoudiniEngine"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
