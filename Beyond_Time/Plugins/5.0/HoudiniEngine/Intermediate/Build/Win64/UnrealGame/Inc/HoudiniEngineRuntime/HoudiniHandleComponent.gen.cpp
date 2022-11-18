// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniHandleComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXformParameter;
	static UEnum* EXformParameter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EXformParameter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EXformParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EXformParameter"));
		}
		return Z_Registration_Info_UEnum_EXformParameter.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>()
	{
		return EXformParameter_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators[] = {
		{ "EXformParameter::TX", (int64)EXformParameter::TX },
		{ "EXformParameter::TY", (int64)EXformParameter::TY },
		{ "EXformParameter::TZ", (int64)EXformParameter::TZ },
		{ "EXformParameter::RX", (int64)EXformParameter::RX },
		{ "EXformParameter::RY", (int64)EXformParameter::RY },
		{ "EXformParameter::RZ", (int64)EXformParameter::RZ },
		{ "EXformParameter::SX", (int64)EXformParameter::SX },
		{ "EXformParameter::SY", (int64)EXformParameter::SY },
		{ "EXformParameter::SZ", (int64)EXformParameter::SZ },
		{ "EXformParameter::COUNT", (int64)EXformParameter::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams[] = {
		{ "COUNT.Name", "EXformParameter::COUNT" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
		{ "RX.Name", "EXformParameter::RX" },
		{ "RY.Name", "EXformParameter::RY" },
		{ "RZ.Name", "EXformParameter::RZ" },
		{ "SX.Name", "EXformParameter::SX" },
		{ "SY.Name", "EXformParameter::SY" },
		{ "SZ.Name", "EXformParameter::SZ" },
		{ "TX.Name", "EXformParameter::TX" },
		{ "TY.Name", "EXformParameter::TY" },
		{ "TZ.Name", "EXformParameter::TZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EXformParameter",
		"EXformParameter",
		Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter()
	{
		if (!Z_Registration_Info_UEnum_EXformParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXformParameter.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EXformParameter.InnerSingleton;
	}
	void UHoudiniHandleParameter::StaticRegisterNativesUHoudiniHandleParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleParameter);
	UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetParameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TupleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TupleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter = { "AssetParameter", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, AssetParameter), Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex = { "TupleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, TupleIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams = {
		&UHoudiniHandleParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleParameter()
	{
		if (!Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton, Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleParameter>()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleParameter);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniHandleType;
	static UEnum* EHoudiniHandleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniHandleType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>()
	{
		return EHoudiniHandleType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators[] = {
		{ "EHoudiniHandleType::Xform", (int64)EHoudiniHandleType::Xform },
		{ "EHoudiniHandleType::Bounder", (int64)EHoudiniHandleType::Bounder },
		{ "EHoudiniHandleType::Unsupported", (int64)EHoudiniHandleType::Unsupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams[] = {
		{ "Bounder.Name", "EHoudiniHandleType::Bounder" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
		{ "Unsupported.Name", "EHoudiniHandleType::Unsupported" },
		{ "Xform.Name", "EHoudiniHandleType::Xform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniHandleType",
		"EHoudiniHandleType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton;
	}
	void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleComponent);
	UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XformParms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XformParms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_XformParms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RSTParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RSTParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotOrderParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotOrderParm;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HandleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner = { "XformParms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms = { "XformParms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, XformParms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm = { "RSTParm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RSTParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm = { "RotOrderParm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RotOrderParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData)) }; // 4056453095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName = { "HandleName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams = {
		&UHoudiniHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton, Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleComponent>()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniHandleComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::EnumInfo[] = {
		{ EXformParameter_StaticEnum, TEXT("EXformParameter"), &Z_Registration_Info_UEnum_EXformParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3326896911U) },
		{ EHoudiniHandleType_StaticEnum, TEXT("EHoudiniHandleType"), &Z_Registration_Info_UEnum_EHoudiniHandleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4056453095U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniHandleParameter, UHoudiniHandleParameter::StaticClass, TEXT("UHoudiniHandleParameter"), &Z_Registration_Info_UClass_UHoudiniHandleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleParameter), 4278693268U) },
		{ Z_Construct_UClass_UHoudiniHandleComponent, UHoudiniHandleComponent::StaticClass, TEXT("UHoudiniHandleComponent"), &Z_Registration_Info_UClass_UHoudiniHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleComponent), 10218854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_2416087891(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
