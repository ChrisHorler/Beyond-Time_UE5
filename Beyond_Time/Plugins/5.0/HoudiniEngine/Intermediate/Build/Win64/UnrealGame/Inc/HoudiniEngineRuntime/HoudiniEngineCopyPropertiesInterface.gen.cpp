// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniEngineCopyPropertiesInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineCopyPropertiesInterface() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniEngineCopyPropertiesInterface::StaticRegisterNativesUHoudiniEngineCopyPropertiesInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEngineCopyPropertiesInterface);
	UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister()
	{
		return UHoudiniEngineCopyPropertiesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/HoudiniEngineCopyPropertiesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHoudiniEngineCopyPropertiesInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams = {
		&UHoudiniEngineCopyPropertiesInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface()
	{
		if (!Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton, Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniEngineCopyPropertiesInterface>()
	{
		return UHoudiniEngineCopyPropertiesInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEngineCopyPropertiesInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface, UHoudiniEngineCopyPropertiesInterface::StaticClass, TEXT("UHoudiniEngineCopyPropertiesInterface"), &Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEngineCopyPropertiesInterface), 685038596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_3099927403(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
