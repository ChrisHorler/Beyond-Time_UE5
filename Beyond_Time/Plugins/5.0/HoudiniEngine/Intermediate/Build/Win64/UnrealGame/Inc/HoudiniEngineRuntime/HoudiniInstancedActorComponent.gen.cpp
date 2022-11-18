// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInstancedActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstancedActorComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UHoudiniInstancedActorComponent::StaticRegisterNativesUHoudiniInstancedActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInstancedActorComponent);
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister()
	{
		return UHoudiniInstancedActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniInstancedActorComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject = { "InstancedObject", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_Inner = { "InstancedActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniInstancedActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors = { "InstancedActors", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::NewProp_InstancedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInstancedActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::ClassParams = {
		&UHoudiniInstancedActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInstancedActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInstancedActorComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInstancedActorComponent>()
	{
		return UHoudiniInstancedActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInstancedActorComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniInstancedActorComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInstancedActorComponent, UHoudiniInstancedActorComponent::StaticClass, TEXT("UHoudiniInstancedActorComponent"), &Z_Registration_Info_UClass_UHoudiniInstancedActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInstancedActorComponent), 1204874577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_491956576(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInstancedActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
