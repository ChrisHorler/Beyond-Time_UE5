// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttribute() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribStorageType;
	static UEnum* EAttribStorageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribStorageType"));
		}
		return Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>()
	{
		return EAttribStorageType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators[] = {
		{ "EAttribStorageType::Invalid", (int64)EAttribStorageType::Invalid },
		{ "EAttribStorageType::INT", (int64)EAttribStorageType::INT },
		{ "EAttribStorageType::INT64", (int64)EAttribStorageType::INT64 },
		{ "EAttribStorageType::FLOAT", (int64)EAttribStorageType::FLOAT },
		{ "EAttribStorageType::FLOAT64", (int64)EAttribStorageType::FLOAT64 },
		{ "EAttribStorageType::STRING", (int64)EAttribStorageType::STRING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams[] = {
		{ "FLOAT.Name", "EAttribStorageType::FLOAT" },
		{ "FLOAT64.Name", "EAttribStorageType::FLOAT64" },
		{ "INT.Name", "EAttribStorageType::INT" },
		{ "INT64.Name", "EAttribStorageType::INT64" },
		{ "Invalid.Name", "EAttribStorageType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "STRING.Name", "EAttribStorageType::STRING" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EAttribStorageType",
		"EAttribStorageType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType()
	{
		if (!Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribOwner;
	static UEnum* EAttribOwner_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribOwner"));
		}
		return Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>()
	{
		return EAttribOwner_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators[] = {
		{ "EAttribOwner::Invalid", (int64)EAttribOwner::Invalid },
		{ "EAttribOwner::Vertex", (int64)EAttribOwner::Vertex },
		{ "EAttribOwner::Point", (int64)EAttribOwner::Point },
		{ "EAttribOwner::Prim", (int64)EAttribOwner::Prim },
		{ "EAttribOwner::Detail", (int64)EAttribOwner::Detail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams[] = {
		{ "Detail.Name", "EAttribOwner::Detail" },
		{ "Invalid.Name", "EAttribOwner::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "Point.Name", "EAttribOwner::Point" },
		{ "Prim.Name", "EAttribOwner::Prim" },
		{ "Vertex.Name", "EAttribOwner::Vertex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EAttribOwner",
		"EAttribOwner",
		Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner()
	{
		if (!Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty;
class UScriptStruct* FHoudiniGenericAttributeChangedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttributeChangedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttributeChangedProperty>()
{
	return FHoudiniGenericAttributeChangedProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributeChangedProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData[] = {
		{ "Comment", "/** The object from where to follow the PropertyChain to the changed property. */" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "ToolTip", "The object from where to follow the PropertyChain to the changed property." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttributeChangedProperty, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributeChangedProperty",
		sizeof(FHoudiniGenericAttributeChangedProperty),
		alignof(FHoudiniGenericAttributeChangedProperty),
		Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute;
class UScriptStruct* FHoudiniGenericAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttribute, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttribute>()
{
	return FHoudiniGenericAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeOwner_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeOwner_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTupleSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeTupleSize;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleValues;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_IntValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntValues;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeType), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_MetaData)) }; // 2776710525
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeOwner), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_MetaData)) }; // 326795812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount = { "AttributeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize = { "AttributeTupleSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeTupleSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner = { "DoubleValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues = { "DoubleValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, DoubleValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner = { "IntValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues = { "IntValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, IntValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttribute",
		sizeof(FHoudiniGenericAttribute),
		alignof(FHoudiniGenericAttribute),
		Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::EnumInfo[] = {
		{ EAttribStorageType_StaticEnum, TEXT("EAttribStorageType"), &Z_Registration_Info_UEnum_EAttribStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2776710525U) },
		{ EAttribOwner_StaticEnum, TEXT("EAttribOwner"), &Z_Registration_Info_UEnum_EAttribOwner, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 326795812U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniGenericAttributeChangedProperty::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps, TEXT("HoudiniGenericAttributeChangedProperty"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributeChangedProperty), 1479464339U) },
		{ FHoudiniGenericAttribute::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewStructOps, TEXT("HoudiniGenericAttribute"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttribute), 2310243921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_1648852730(TEXT("/Script/HoudiniEngineRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
