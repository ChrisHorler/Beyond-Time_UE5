// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniAssetActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActorFactory() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniAssetActorFactory::StaticRegisterNativesUHoudiniAssetActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetActorFactory);
	UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister()
	{
		return UHoudiniAssetActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniAssetActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams = {
		&UHoudiniAssetActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetActorFactory()
	{
		if (!Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton, Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniAssetActorFactory>()
	{
		return UHoudiniAssetActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetActorFactory);
	UHoudiniAssetActorFactory::~UHoudiniAssetActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetActorFactory, UHoudiniAssetActorFactory::StaticClass, TEXT("UHoudiniAssetActorFactory"), &Z_Registration_Info_UClass_UHoudiniAssetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetActorFactory), 1193624830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_2439001577(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
