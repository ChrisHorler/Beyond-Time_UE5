// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFolder() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniFolderParameterType;
	static UEnum* EHoudiniFolderParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniFolderParameterType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniFolderParameterType>()
	{
		return EHoudiniFolderParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enumerators[] = {
		{ "EHoudiniFolderParameterType::Invalid", (int64)EHoudiniFolderParameterType::Invalid },
		{ "EHoudiniFolderParameterType::Collapsible", (int64)EHoudiniFolderParameterType::Collapsible },
		{ "EHoudiniFolderParameterType::Simple", (int64)EHoudiniFolderParameterType::Simple },
		{ "EHoudiniFolderParameterType::Tabs", (int64)EHoudiniFolderParameterType::Tabs },
		{ "EHoudiniFolderParameterType::Radio", (int64)EHoudiniFolderParameterType::Radio },
		{ "EHoudiniFolderParameterType::Other", (int64)EHoudiniFolderParameterType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enum_MetaDataParams[] = {
		{ "Collapsible.Name", "EHoudiniFolderParameterType::Collapsible" },
		{ "Invalid.Name", "EHoudiniFolderParameterType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
		{ "Other.Name", "EHoudiniFolderParameterType::Other" },
		{ "Radio.Name", "EHoudiniFolderParameterType::Radio" },
		{ "Simple.Name", "EHoudiniFolderParameterType::Simple" },
		{ "Tabs.Name", "EHoudiniFolderParameterType::Tabs" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniFolderParameterType",
		"EHoudiniFolderParameterType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton;
	}
	void UHoudiniParameterFolder::StaticRegisterNativesUHoudiniParameterFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterFolder);
	UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister()
	{
		return UHoudiniParameterFolder::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FolderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FolderType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChosen_MetaData[];
#endif
		static void NewProp_bChosen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChosen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsContentShown_MetaData[];
#endif
		static void NewProp_bIsContentShown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsContentShown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFolder.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType = { "FolderType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterFolder, FolderType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_MetaData)) }; // 1134947516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bChosen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen = { "bChosen", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter = { "ChildCounter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterFolder, ChildCounter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolder.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit(void* Obj)
	{
		((UHoudiniParameterFolder*)Obj)->bIsContentShown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown = { "bIsContentShown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolder), &Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_FolderType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bChosen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_ChildCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolder_Statics::NewProp_bIsContentShown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams = {
		&UHoudiniParameterFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterFolder()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton, Z_Construct_UClass_UHoudiniParameterFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterFolder.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFolder>()
	{
		return UHoudiniParameterFolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFolder);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::EnumInfo[] = {
		{ EHoudiniFolderParameterType_StaticEnum, TEXT("EHoudiniFolderParameterType"), &Z_Registration_Info_UEnum_EHoudiniFolderParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1134947516U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterFolder, UHoudiniParameterFolder::StaticClass, TEXT("UHoudiniParameterFolder"), &Z_Registration_Info_UClass_UHoudiniParameterFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterFolder), 1766310431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_2188208552(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
