// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
	void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoudiniAssetActor);
	UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AHoudiniAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "HoudiniAssetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData[] = {
		{ "Category", "HoudiniAssetActor" },
		{ "Comment", "/*, AllowPrivateAccess = \"true\"*/" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|HoudiniEngine" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
		{ "ToolTip", ", AllowPrivateAccess = \"true\"" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent = { "HoudiniAssetComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoudiniAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniAssetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams = {
		&AHoudiniAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoudiniAssetActor()
	{
		if (!Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton, Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<AHoudiniAssetActor>()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHoudiniAssetActor, AHoudiniAssetActor::StaticClass, TEXT("AHoudiniAssetActor"), &Z_Registration_Info_UClass_AHoudiniAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoudiniAssetActor), 3280934891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_417939512(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
