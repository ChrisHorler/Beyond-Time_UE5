// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIAssetWrapper.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIOutputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIAssetWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniParameterTuple();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint;
class UScriptStruct* FHoudiniPublicAPIRampPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIRampPoint"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIRampPoint>()
{
	return FHoudiniPublicAPIRampPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/**\n * The base class of a struct for Houdini Ramp points.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The base class of a struct for Houdini Ramp points." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIRampPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** The position of the point on the Ramp's x-axis [0,1]. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The position of the point on the Ramp's x-axis [0,1]." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIRampPoint, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** The interpolation type of the point. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The interpolation type of the point." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIRampPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation_MetaData)) }; // 2663827118
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewProp_Interpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPublicAPIRampPoint",
		sizeof(FHoudiniPublicAPIRampPoint),
		alignof(FHoudiniPublicAPIRampPoint),
		Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPublicAPIFloatRampPoint>() == std::is_polymorphic<FHoudiniPublicAPIRampPoint>(), "USTRUCT FHoudiniPublicAPIFloatRampPoint cannot be polymorphic unless super FHoudiniPublicAPIRampPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint;
class UScriptStruct* FHoudiniPublicAPIFloatRampPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIFloatRampPoint"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIFloatRampPoint>()
{
	return FHoudiniPublicAPIFloatRampPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/**\n * A struct for Houdini float ramp points.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "A struct for Houdini float ramp points." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIFloatRampPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** The value of the point. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The value of the point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIFloatRampPoint, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint,
		&NewStructOps,
		"HoudiniPublicAPIFloatRampPoint",
		sizeof(FHoudiniPublicAPIFloatRampPoint),
		alignof(FHoudiniPublicAPIFloatRampPoint),
		Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPublicAPIColorRampPoint>() == std::is_polymorphic<FHoudiniPublicAPIRampPoint>(), "USTRUCT FHoudiniPublicAPIColorRampPoint cannot be polymorphic unless super FHoudiniPublicAPIRampPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint;
class UScriptStruct* FHoudiniPublicAPIColorRampPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIColorRampPoint"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIColorRampPoint>()
{
	return FHoudiniPublicAPIColorRampPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/**\n * A struct for Houdini color ramp points.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "A struct for Houdini color ramp points." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIColorRampPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** The value of the point. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The value of the point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniPublicAPIColorRampPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint,
		&NewStructOps,
		"HoudiniPublicAPIColorRampPoint",
		sizeof(FHoudiniPublicAPIColorRampPoint),
		alignof(FHoudiniPublicAPIColorRampPoint),
		Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniParameterTuple;
class UScriptStruct* FHoudiniParameterTuple::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniParameterTuple, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniParameterTuple"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniParameterTuple>()
{
	return FHoudiniParameterTuple::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Values;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatValues;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatRampPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatRampPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatRampPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorRampPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorRampPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorRampPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/**\n * A struct for storing the values of a Houdini parameter tuple.\n * Currently supports bool, int32, float and FString storage.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "A struct for storing the values of a Houdini parameter tuple.\nCurrently supports bool, int32, float and FString storage." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniParameterTuple>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues_Inner = { "BoolValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For bool compatible parameters, the bool parameter tuple values. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For bool compatible parameters, the bool parameter tuple values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues = { "BoolValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, BoolValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values_Inner = { "Int32Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For int32 compatible parameters, the int32 parameter tuple values. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For int32 compatible parameters, the int32 parameter tuple values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values = { "Int32Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, Int32Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues_Inner = { "FloatValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For float compatible parameters, the float parameter tuple values. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For float compatible parameters, the float parameter tuple values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues = { "FloatValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, FloatValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For string compatible parameters, the string parameter tuple values. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For string compatible parameters, the string parameter tuple values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints_Inner = { "FloatRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint, METADATA_PARAMS(nullptr, 0) }; // 1232449735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For float ramp parameters, the ramp points. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For float ramp parameters, the ramp points." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints = { "FloatRampPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, FloatRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints_MetaData)) }; // 1232449735
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints_Inner = { "ColorRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint, METADATA_PARAMS(nullptr, 0) }; // 823807857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints_MetaData[] = {
		{ "Category", "Houdini Engine | Public API" },
		{ "Comment", "/** For color ramp parameters, the ramp points. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "For color ramp parameters, the ramp points." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints = { "ColorRampPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniParameterTuple, ColorRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints_MetaData)) }; // 823807857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_BoolValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_Int32Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_StringValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_FloatRampPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewProp_ColorRampPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniParameterTuple",
		sizeof(FHoudiniParameterTuple),
		alignof(FHoudiniParameterTuple),
		Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniParameterTuple()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniParameterTuple.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetStateChange_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetStateChange_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate types\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate types" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "OnHoudiniAssetStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetStateChange_Parms), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
			bool bInCookSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCookSuccess_MetaData[];
#endif
		static void NewProp_bInCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCookSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms*)Obj)->bInCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess = { "bInCookSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms), &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_InAssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::NewProp_bInCookSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "OnHoudiniAssetPostCook__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
			bool bInBakeSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBakeSuccess_MetaData[];
#endif
		static void NewProp_bInBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBakeSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms*)Obj)->bInBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess = { "bInBakeSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms), &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_InAssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::NewProp_bInBakeSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "OnHoudiniAssetPostBake__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms
		{
			const UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
			EHoudiniProxyRefineResult InResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InAssetWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InAssetWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InAssetWrapper_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult = { "InResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms, InResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult_MetaData)) }; // 2317393953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InAssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::NewProp_InResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniProxyMeshesRefinedGlobal)
	{
		P_GET_OBJECT(UHoudiniAssetComponent,Z_Param_InHAC);
		P_GET_ENUM(EHoudiniProxyRefineResult,Z_Param_InResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniProxyMeshesRefinedGlobal(Z_Param_InHAC,EHoudiniProxyRefineResult(Z_Param_InResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniPDGAssetLinkPostBake)
	{
		P_GET_OBJECT(UHoudiniPDGAssetLink,Z_Param_InPDGAssetLink);
		P_GET_UBOOL(Z_Param_bInBakeSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniPDGAssetLinkPostBake(Z_Param_InPDGAssetLink,Z_Param_bInBakeSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniPDGAssetLinkTOPNetPostCook)
	{
		P_GET_OBJECT(UHoudiniPDGAssetLink,Z_Param_InPDGAssetLink);
		P_GET_OBJECT(UTOPNetwork,Z_Param_InTOPNet);
		P_GET_UBOOL(Z_Param_bInAnyWorkItemsFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniPDGAssetLinkTOPNetPostCook(Z_Param_InPDGAssetLink,Z_Param_InTOPNet,Z_Param_bInAnyWorkItemsFailed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentPostBake)
	{
		P_GET_OBJECT(UHoudiniAssetComponent,Z_Param_InHAC);
		P_GET_UBOOL(Z_Param_bInBakeSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniAssetComponentPostBake(Z_Param_InHAC,Z_Param_bInBakeSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentPostCook)
	{
		P_GET_OBJECT(UHoudiniAssetComponent,Z_Param_InHAC);
		P_GET_UBOOL(Z_Param_bInCookSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniAssetComponentPostCook(Z_Param_InHAC,Z_Param_bInCookSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentStateChange)
	{
		P_GET_OBJECT(UHoudiniAssetComponent,Z_Param_InHAC);
		P_GET_ENUM(EHoudiniAssetState,Z_Param_InFromState);
		P_GET_ENUM(EHoudiniAssetState,Z_Param_InToState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnHoudiniAssetComponentStateChange(Z_Param_InHAC,EHoudiniAssetState(Z_Param_InFromState),EHoudiniAssetState(Z_Param_InToState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execBindToPDGAssetLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindToPDGAssetLink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execClearHoudiniAssetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHoudiniAssetObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGBakingReplacementMode)
	{
		P_GET_ENUM_REF(EPDGBakePackageReplaceModeOption,Z_Param_Out_OutBakingReplacementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGBakingReplacementMode_Implementation((EPDGBakePackageReplaceModeOption&)(Z_Param_Out_OutBakingReplacementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetPDGBakingReplacementMode)
	{
		P_GET_ENUM(EPDGBakePackageReplaceModeOption,Z_Param_InBakingReplacementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPDGBakingReplacementMode_Implementation(EPDGBakePackageReplaceModeOption(Z_Param_InBakingReplacementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGRecenterBakedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGRecenterBakedActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetPDGRecenterBakedActors)
	{
		P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPDGRecenterBakedActors_Implementation(Z_Param_bInRecenterBakedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGBakeSelection)
	{
		P_GET_ENUM_REF(EPDGBakeSelectionOption,Z_Param_Out_OutBakeSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGBakeSelection_Implementation((EPDGBakeSelectionOption&)(Z_Param_Out_OutBakeSelection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetPDGBakeSelection)
	{
		P_GET_ENUM(EPDGBakeSelectionOption,Z_Param_InBakeSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPDGBakeSelection_Implementation(EPDGBakeSelectionOption(Z_Param_InBakeSelection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGBakeMethod)
	{
		P_GET_ENUM_REF(EHoudiniEngineBakeOption,Z_Param_Out_OutBakeMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGBakeMethod_Implementation((EHoudiniEngineBakeOption&)(Z_Param_Out_OutBakeMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetPDGBakeMethod)
	{
		P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPDGBakeMethod_Implementation(EHoudiniEngineBakeOption(Z_Param_InBakeMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execIsPDGAutoBakeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPDGAutoBakeEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetPDGAutoBakeEnabled)
	{
		P_GET_UBOOL(Z_Param_bInAutoBakeEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPDGAutoBakeEnabled_Implementation(Z_Param_bInAutoBakeEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGBakeAllOutputsWithSettings)
	{
		P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeOption);
		P_GET_ENUM(EPDGBakeSelectionOption,Z_Param_InBakeSelection);
		P_GET_ENUM(EPDGBakePackageReplaceModeOption,Z_Param_InBakeReplacementMode);
		P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGBakeAllOutputsWithSettings_Implementation(EHoudiniEngineBakeOption(Z_Param_InBakeOption),EPDGBakeSelectionOption(Z_Param_InBakeSelection),EPDGBakePackageReplaceModeOption(Z_Param_InBakeReplacementMode),Z_Param_bInRecenterBakedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGBakeAllOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGBakeAllOutputs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGCookNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNetworkRelativePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNodeRelativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGCookNode_Implementation(Z_Param_InNetworkRelativePath,Z_Param_InNodeRelativePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGCookOutputsForNetwork)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNetworkRelativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGCookOutputsForNetwork_Implementation(Z_Param_InNetworkRelativePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGDirtyNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNetworkRelativePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNodeRelativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGDirtyNode_Implementation(Z_Param_InNetworkRelativePath,Z_Param_InNodeRelativePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGDirtyNetwork)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNetworkRelativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGDirtyNetwork_Implementation(Z_Param_InNetworkRelativePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execPDGDirtyAllNetworks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PDGDirtyAllNetworks_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGTOPNodePaths)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNetworkRelativePath);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutTOPNodePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGTOPNodePaths_Implementation(Z_Param_InNetworkRelativePath,Z_Param_Out_OutTOPNodePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetPDGTOPNetworkPaths)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutTOPNetworkPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPDGTOPNetworkPaths_Implementation(Z_Param_Out_OutTOPNetworkPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHasPDGAssetLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPDGAssetLink_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execRefineAllCurrentProxyOutputs)
	{
		P_GET_UBOOL(Z_Param_bInSilent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniProxyRefineRequestResult*)Z_Param__Result=P_THIS->RefineAllCurrentProxyOutputs_Implementation(Z_Param_bInSilent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execIsOutputCurrentProxyAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOutputCurrentProxyAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHasAnyCurrentProxyOutputAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyCurrentProxyOutputAt_Implementation(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execHasAnyCurrentProxyOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyCurrentProxyOutput_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execBakeOutputObjectAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBakeName);
		P_GET_ENUM(EHoudiniLandscapeOutputBakeType,Z_Param_InLandscapeBakeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BakeOutputObjectAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier,Z_Param_InBakeName,EHoudiniLandscapeOutputBakeType(Z_Param_InLandscapeBakeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetOutputBakeNameFallbackAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBakeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutputBakeNameFallbackAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier,Z_Param_InBakeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetOutputBakeNameFallbackAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBakeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutputBakeNameFallbackAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier,Z_Param_Out_OutBakeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetOutputComponentAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOutputComponentAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetOutputObjectAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOutputObjectAt_Implementation(Z_Param_InIndex,Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetOutputIdentifiersAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_TARRAY_REF(FHoudiniPublicAPIOutputObjectIdentifier,Z_Param_Out_OutIdentifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutputIdentifiersAt_Implementation(Z_Param_InIndex,Z_Param_Out_OutIdentifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetOutputTypeAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniOutputType*)Z_Param__Result=P_THIS->GetOutputTypeAt_Implementation(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetNumOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumOutputs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetInputParameters)
	{
		P_GET_TMAP_REF(FName,UHoudiniPublicAPIInput*,Z_Param_Out_OutInputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputParameters_Implementation(Z_Param_Out_OutInputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetInputParameters)
	{
		P_GET_TMAP_REF(FName,UHoudiniPublicAPIInput*,Z_Param_Out_InInputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputParameters_Implementation(Z_Param_Out_InInputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetInputParameter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_OBJECT_REF(UHoudiniPublicAPIInput,Z_Param_Out_OutInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputParameter_Implementation(Z_Param_Out_InParameterName,Z_Param_Out_OutInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetInputParameter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_OBJECT(UHoudiniPublicAPIInput,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputParameter_Implementation(Z_Param_Out_InParameterName,Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetInputsAtIndices)
	{
		P_GET_TMAP_REF(int32,UHoudiniPublicAPIInput*,Z_Param_Out_OutInputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputsAtIndices_Implementation(Z_Param_Out_OutInputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetInputsAtIndices)
	{
		P_GET_TMAP_REF(int32,UHoudiniPublicAPIInput*,Z_Param_Out_InInputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputsAtIndices_Implementation(Z_Param_Out_InInputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetInputAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNodeInputIndex);
		P_GET_OBJECT_REF(UHoudiniPublicAPIInput,Z_Param_Out_OutInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputAtIndex_Implementation(Z_Param_InNodeInputIndex,Z_Param_Out_OutInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetInputAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNodeInputIndex);
		P_GET_OBJECT(UHoudiniPublicAPIInput,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputAtIndex_Implementation(Z_Param_InNodeInputIndex,Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetNumNodeInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumNodeInputs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execCreateEmptyInput)
	{
		P_GET_OBJECT(UClass,Z_Param_InInputClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPIInput**)Z_Param__Result=P_THIS->CreateEmptyInput_Implementation(Z_Param_InInputClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetParameterTuples)
	{
		P_GET_TMAP_REF(FName,FHoudiniParameterTuple,Z_Param_Out_InParameterTuples);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParameterTuples_Implementation(Z_Param_Out_InParameterTuples);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetParameterTuples)
	{
		P_GET_TMAP_REF(FName,FHoudiniParameterTuple,Z_Param_Out_OutParameterTuples);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetParameterTuples_Implementation(Z_Param_Out_OutParameterTuples);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execTriggerButtonParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InButtonParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TriggerButtonParameter_Implementation(Z_Param_InButtonParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetColorRampParameterPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_TARRAY_REF(FHoudiniPublicAPIColorRampPoint,Z_Param_Out_OutRampPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorRampParameterPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutRampPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetColorRampParameterPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_TARRAY_REF(FHoudiniPublicAPIColorRampPoint,Z_Param_Out_InRampPoints);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetColorRampParameterPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_InRampPoints,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetColorRampParameterPointValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPointPosition);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutPointValue);
		P_GET_ENUM_REF(EHoudiniPublicAPIRampInterpolationType,Z_Param_Out_OutInterpolationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorRampParameterPointValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InPointIndex,Z_Param_Out_OutPointPosition,Z_Param_Out_OutPointValue,(EHoudiniPublicAPIRampInterpolationType&)(Z_Param_Out_OutInterpolationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetColorRampParameterPointValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPointPosition);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InPointValue);
		P_GET_ENUM(EHoudiniPublicAPIRampInterpolationType,Z_Param_InInterpolationType);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetColorRampParameterPointValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InPointIndex,Z_Param_InPointPosition,Z_Param_Out_InPointValue,EHoudiniPublicAPIRampInterpolationType(Z_Param_InInterpolationType),Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetFloatRampParameterPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_TARRAY_REF(FHoudiniPublicAPIFloatRampPoint,Z_Param_Out_OutRampPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatRampParameterPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutRampPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetFloatRampParameterPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_TARRAY_REF(FHoudiniPublicAPIFloatRampPoint,Z_Param_Out_InRampPoints);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatRampParameterPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_InRampPoints,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetFloatRampParameterPointValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPointPosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPointValue);
		P_GET_ENUM_REF(EHoudiniPublicAPIRampInterpolationType,Z_Param_Out_OutInterpolationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatRampParameterPointValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InPointIndex,Z_Param_Out_OutPointPosition,Z_Param_Out_OutPointValue,(EHoudiniPublicAPIRampInterpolationType&)(Z_Param_Out_OutInterpolationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetFloatRampParameterPointValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPointIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPointPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPointValue);
		P_GET_ENUM(EHoudiniPublicAPIRampInterpolationType,Z_Param_InInterpolationType);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatRampParameterPointValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InPointIndex,Z_Param_InPointPosition,Z_Param_InPointValue,EHoudiniPublicAPIRampInterpolationType(Z_Param_InInterpolationType),Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetRampParameterNumPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRampParameterNumPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutNumPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetRampParameterNumPoints)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRampParameterNumPoints_Implementation(Z_Param_InParameterTupleName,Z_Param_InNumPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetAssetRefParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAssetRefParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue,Z_Param_InAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetAssetRefParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_OBJECT(UObject,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAssetRefParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InValue,Z_Param_InAtIndex,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetStringParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue,Z_Param_InAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetStringParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStringParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InValue,Z_Param_InAtIndex,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetBoolParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_UBOOL_REF(Z_Param_Out_OutValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue,Z_Param_InAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetBoolParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_UBOOL(Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoolParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InValue,Z_Param_InAtIndex,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetIntParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIntParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue,Z_Param_InAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetIntParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIntParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InValue,Z_Param_InAtIndex,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetColorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetColorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetColorParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_InValue,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetFloatParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_Out_OutValue,Z_Param_InAtIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetFloatParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterTupleName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAtIndex);
		P_GET_UBOOL(Z_Param_bInMarkChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatParameterValue_Implementation(Z_Param_InParameterTupleName,Z_Param_InValue,Z_Param_InAtIndex,Z_Param_bInMarkChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetReplacePreviousBake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReplacePreviousBake_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetReplacePreviousBake)
	{
		P_GET_UBOOL(Z_Param_bInReplacePreviousBake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReplacePreviousBake_Implementation(Z_Param_bInReplacePreviousBake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetRecenterBakedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRecenterBakedActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetRecenterBakedActors)
	{
		P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRecenterBakedActors_Implementation(Z_Param_bInRecenterBakedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetRemoveOutputAfterBake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRemoveOutputAfterBake_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetRemoveOutputAfterBake)
	{
		P_GET_UBOOL(Z_Param_bInRemoveOutputAfterBake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRemoveOutputAfterBake_Implementation(Z_Param_bInRemoveOutputAfterBake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetBakeMethod)
	{
		P_GET_ENUM_REF(EHoudiniEngineBakeOption,Z_Param_Out_OutBakeMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBakeMethod_Implementation((EHoudiniEngineBakeOption&)(Z_Param_Out_OutBakeMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetBakeMethod)
	{
		P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBakeMethod_Implementation(EHoudiniEngineBakeOption(Z_Param_InBakeMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execIsAutoBakeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAutoBakeEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetAutoBakeEnabled)
	{
		P_GET_UBOOL(Z_Param_bInAutoBakeEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAutoBakeEnabled_Implementation(Z_Param_bInAutoBakeEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execBakeAllOutputsWithSettings)
	{
		P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeOption);
		P_GET_UBOOL(Z_Param_bInReplacePreviousBake);
		P_GET_UBOOL(Z_Param_bInRemoveTempOutputsOnSuccess);
		P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BakeAllOutputsWithSettings_Implementation(EHoudiniEngineBakeOption(Z_Param_InBakeOption),Z_Param_bInReplacePreviousBake,Z_Param_bInRemoveTempOutputsOnSuccess,Z_Param_bInRecenterBakedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execBakeAllOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BakeAllOutputs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execIsAutoCookingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAutoCookingEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetAutoCookingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInSetEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAutoCookingEnabled_Implementation(Z_Param_bInSetEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execRecook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Recook_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execRebuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Rebuild_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execDeleteInstantiatedAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteInstantiatedAsset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetBakeFolder)
	{
		P_GET_STRUCT_REF(FDirectoryPath,Z_Param_Out_InDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBakeFolder_Implementation(Z_Param_Out_InDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetBakeFolder)
	{
		P_GET_STRUCT_REF(FDirectoryPath,Z_Param_Out_OutDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBakeFolder_Implementation(Z_Param_Out_OutDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execSetTemporaryCookFolder)
	{
		P_GET_STRUCT_REF(FDirectoryPath,Z_Param_Out_InDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTemporaryCookFolder_Implementation(Z_Param_Out_InDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetTemporaryCookFolder)
	{
		P_GET_STRUCT_REF(FDirectoryPath,Z_Param_Out_OutDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTemporaryCookFolder_Implementation(Z_Param_Out_OutDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniAssetComponent**)Z_Param__Result=P_THIS->GetHoudiniAssetComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHoudiniAssetActor**)Z_Param__Result=P_THIS->GetHoudiniAssetActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetHoudiniAssetObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execWrapHoudiniAssetObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InHoudiniAssetObjectToWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WrapHoudiniAssetObject_Implementation(Z_Param_InHoudiniAssetObjectToWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execCanWrapHoudiniObject)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHoudiniPublicAPIAssetWrapper::CanWrapHoudiniObject(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execCreateEmptyWrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPIAssetWrapper**)Z_Param__Result=UHoudiniPublicAPIAssetWrapper::CreateEmptyWrapper(Z_Param_InOuter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIAssetWrapper::execCreateWrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_GET_OBJECT(UObject,Z_Param_InHoudiniAssetActorOrComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPIAssetWrapper**)Z_Param__Result=UHoudiniPublicAPIAssetWrapper::CreateWrapper(Z_Param_InOuter,Z_Param_InHoudiniAssetActorOrComponent);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms
	{
		EHoudiniEngineBakeOption InBakeOption;
		bool bInReplacePreviousBake;
		bool bInRemoveTempOutputsOnSuccess;
		bool bInRecenterBakedActors;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		FName InBakeName;
		EHoudiniLandscapeOutputBakeType InLandscapeBakeType;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms
	{
		TSubclassOf<UHoudiniPublicAPIInput>  InInputClass;
		UHoudiniPublicAPIInput* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms
	{
		FName InParameterTupleName;
		UObject* OutValue;
		int32 InAtIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms
	{
		FDirectoryPath OutDirectoryPath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms
	{
		EHoudiniEngineBakeOption OutBakeMethod;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms
	{
		FName InParameterTupleName;
		bool OutValue;
		int32 InAtIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms
	{
		FName InParameterTupleName;
		FLinearColor OutValue;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms
	{
		FName InParameterTupleName;
		TArray<FHoudiniPublicAPIColorRampPoint> OutRampPoints;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms
	{
		FName InParameterTupleName;
		int32 InPointIndex;
		float OutPointPosition;
		FLinearColor OutPointValue;
		EHoudiniPublicAPIRampInterpolationType OutInterpolationType;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms
	{
		FName InParameterTupleName;
		float OutValue;
		int32 InAtIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms
	{
		FName InParameterTupleName;
		TArray<FHoudiniPublicAPIFloatRampPoint> OutRampPoints;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms
	{
		FName InParameterTupleName;
		int32 InPointIndex;
		float OutPointPosition;
		float OutPointValue;
		EHoudiniPublicAPIRampInterpolationType OutInterpolationType;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms
	{
		AHoudiniAssetActor* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms
	{
		UHoudiniAssetComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms
	{
		UObject* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms
	{
		int32 InNodeInputIndex;
		UHoudiniPublicAPIInput* OutInput;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms
	{
		FName InParameterName;
		UHoudiniPublicAPIInput* OutInput;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms
	{
		TMap<FName,UHoudiniPublicAPIInput*> OutInputs;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms
	{
		TMap<int32,UHoudiniPublicAPIInput*> OutInputs;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms
	{
		FName InParameterTupleName;
		int32 OutValue;
		int32 InAtIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		FString OutBakeName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		UObject* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms
	{
		int32 InIndex;
		TArray<FHoudiniPublicAPIOutputObjectIdentifier> OutIdentifiers;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		UObject* ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms
	{
		int32 InIndex;
		EHoudiniOutputType ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms()
			: ReturnValue((EHoudiniOutputType)0)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms
	{
		TMap<FName,FHoudiniParameterTuple> OutParameterTuples;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms
	{
		EHoudiniEngineBakeOption OutBakeMethod;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms
	{
		EPDGBakeSelectionOption OutBakeSelection;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms
	{
		EPDGBakePackageReplaceModeOption OutBakingReplacementMode;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms
	{
		TArray<FString> OutTOPNetworkPaths;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms
	{
		FString InNetworkRelativePath;
		TArray<FString> OutTOPNodePaths;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms
	{
		FName InParameterTupleName;
		int32 OutNumPoints;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms
	{
		FName InParameterTupleName;
		FString OutValue;
		int32 InAtIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms
	{
		FDirectoryPath OutDirectoryPath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms
	{
		int32 InIndex;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms
	{
		EHoudiniEngineBakeOption InBakeOption;
		EPDGBakeSelectionOption InBakeSelection;
		EPDGBakePackageReplaceModeOption InBakeReplacementMode;
		bool bInRecenterBakedActors;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms
	{
		FString InNetworkRelativePath;
		FString InNodeRelativePath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms
	{
		FString InNetworkRelativePath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms
	{
		FString InNetworkRelativePath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms
	{
		FString InNetworkRelativePath;
		FString InNodeRelativePath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventRebuild_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventRebuild_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventRecook_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventRecook_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms
	{
		bool bInSilent;
		EHoudiniProxyRefineRequestResult ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms()
			: ReturnValue((EHoudiniProxyRefineRequestResult)0)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms
	{
		FName InParameterTupleName;
		UObject* InValue;
		int32 InAtIndex;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms
	{
		bool bInAutoBakeEnabled;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms
	{
		bool bInSetEnabled;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms
	{
		FDirectoryPath InDirectoryPath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms
	{
		EHoudiniEngineBakeOption InBakeMethod;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms
	{
		FName InParameterTupleName;
		bool InValue;
		int32 InAtIndex;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms
	{
		FName InParameterTupleName;
		FLinearColor InValue;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms
	{
		FName InParameterTupleName;
		TArray<FHoudiniPublicAPIColorRampPoint> InRampPoints;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms
	{
		FName InParameterTupleName;
		int32 InPointIndex;
		float InPointPosition;
		FLinearColor InPointValue;
		EHoudiniPublicAPIRampInterpolationType InInterpolationType;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms
	{
		FName InParameterTupleName;
		float InValue;
		int32 InAtIndex;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms
	{
		FName InParameterTupleName;
		TArray<FHoudiniPublicAPIFloatRampPoint> InRampPoints;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms
	{
		FName InParameterTupleName;
		int32 InPointIndex;
		float InPointPosition;
		float InPointValue;
		EHoudiniPublicAPIRampInterpolationType InInterpolationType;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms
	{
		int32 InNodeInputIndex;
		const UHoudiniPublicAPIInput* InInput;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms
	{
		FName InParameterName;
		const UHoudiniPublicAPIInput* InInput;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms
	{
		TMap<FName,UHoudiniPublicAPIInput*> InInputs;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms
	{
		TMap<int32,UHoudiniPublicAPIInput*> InInputs;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms
	{
		FName InParameterTupleName;
		int32 InValue;
		int32 InAtIndex;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms
	{
		int32 InIndex;
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier;
		FString InBakeName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms
	{
		TMap<FName,FHoudiniParameterTuple> InParameterTuples;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms
	{
		bool bInAutoBakeEnabled;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms
	{
		EHoudiniEngineBakeOption InBakeMethod;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms
	{
		EPDGBakeSelectionOption InBakeSelection;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms
	{
		EPDGBakePackageReplaceModeOption InBakingReplacementMode;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms
	{
		bool bInRecenterBakedActors;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms
	{
		FName InParameterTupleName;
		int32 InNumPoints;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms
	{
		bool bInRecenterBakedActors;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms
	{
		bool bInRemoveOutputAfterBake;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms
	{
		bool bInReplacePreviousBake;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms
	{
		FName InParameterTupleName;
		FString InValue;
		int32 InAtIndex;
		bool bInMarkChanged;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms
	{
		FDirectoryPath InDirectoryPath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms
	{
		FName InButtonParameterName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms
	{
		UObject* InHoudiniAssetObjectToWrap;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs = FName(TEXT("BakeAllOutputs"));
	bool UHoudiniPublicAPIAssetWrapper::BakeAllOutputs()
	{
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings = FName(TEXT("BakeAllOutputsWithSettings"));
	bool UHoudiniPublicAPIAssetWrapper::BakeAllOutputsWithSettings(EHoudiniEngineBakeOption InBakeOption, bool bInReplacePreviousBake, bool bInRemoveTempOutputsOnSuccess, bool bInRecenterBakedActors)
	{
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms Parms;
		Parms.InBakeOption=InBakeOption;
		Parms.bInReplacePreviousBake=bInReplacePreviousBake ? true : false;
		Parms.bInRemoveTempOutputsOnSuccess=bInRemoveTempOutputsOnSuccess ? true : false;
		Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt = FName(TEXT("BakeOutputObjectAt"));
	bool UHoudiniPublicAPIAssetWrapper::BakeOutputObjectAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FName InBakeName, const EHoudiniLandscapeOutputBakeType InLandscapeBakeType)
	{
		HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		Parms.InBakeName=InBakeName;
		Parms.InLandscapeBakeType=InLandscapeBakeType;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject = FName(TEXT("ClearHoudiniAssetObject"));
	void UHoudiniPublicAPIAssetWrapper::ClearHoudiniAssetObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject),NULL);
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput = FName(TEXT("CreateEmptyInput"));
	UHoudiniPublicAPIInput* UHoudiniPublicAPIAssetWrapper::CreateEmptyInput(TSubclassOf<UHoudiniPublicAPIInput>  InInputClass)
	{
		HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms Parms;
		Parms.InInputClass=InInputClass;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset = FName(TEXT("DeleteInstantiatedAsset"));
	bool UHoudiniPublicAPIAssetWrapper::DeleteInstantiatedAsset()
	{
		HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue = FName(TEXT("GetAssetRefParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetAssetRefParameterValue(FName InParameterTupleName, UObject*& OutValue, int32 InAtIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue;
		Parms.InAtIndex=InAtIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetBakeFolder = FName(TEXT("GetBakeFolder"));
	bool UHoudiniPublicAPIAssetWrapper::GetBakeFolder(FDirectoryPath& OutDirectoryPath) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms Parms;
		Parms.OutDirectoryPath=OutDirectoryPath;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetBakeFolder),&Parms);
		OutDirectoryPath=Parms.OutDirectoryPath;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetBakeMethod = FName(TEXT("GetBakeMethod"));
	bool UHoudiniPublicAPIAssetWrapper::GetBakeMethod(EHoudiniEngineBakeOption& OutBakeMethod)
	{
		HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms Parms;
		Parms.OutBakeMethod=OutBakeMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetBakeMethod),&Parms);
		OutBakeMethod=Parms.OutBakeMethod;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue = FName(TEXT("GetBoolParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetBoolParameterValue(FName InParameterTupleName, bool& OutValue, int32 InAtIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue ? true : false;
		Parms.InAtIndex=InAtIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue = FName(TEXT("GetColorParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetColorParameterValue(FName InParameterTupleName, FLinearColor& OutValue) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints = FName(TEXT("GetColorRampParameterPoints"));
	bool UHoudiniPublicAPIAssetWrapper::GetColorRampParameterPoints(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint>& OutRampPoints) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutRampPoints=OutRampPoints;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints),&Parms);
		OutRampPoints=Parms.OutRampPoints;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue = FName(TEXT("GetColorRampParameterPointValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetColorRampParameterPointValue(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, FLinearColor& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InPointIndex=InPointIndex;
		Parms.OutPointPosition=OutPointPosition;
		Parms.OutPointValue=OutPointValue;
		Parms.OutInterpolationType=OutInterpolationType;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue),&Parms);
		OutPointPosition=Parms.OutPointPosition;
		OutPointValue=Parms.OutPointValue;
		OutInterpolationType=Parms.OutInterpolationType;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue = FName(TEXT("GetFloatParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetFloatParameterValue(FName InParameterTupleName, float& OutValue, int32 InAtIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue;
		Parms.InAtIndex=InAtIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints = FName(TEXT("GetFloatRampParameterPoints"));
	bool UHoudiniPublicAPIAssetWrapper::GetFloatRampParameterPoints(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint>& OutRampPoints) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutRampPoints=OutRampPoints;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints),&Parms);
		OutRampPoints=Parms.OutRampPoints;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue = FName(TEXT("GetFloatRampParameterPointValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetFloatRampParameterPointValue(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, float& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InPointIndex=InPointIndex;
		Parms.OutPointPosition=OutPointPosition;
		Parms.OutPointValue=OutPointValue;
		Parms.OutInterpolationType=OutInterpolationType;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue),&Parms);
		OutPointPosition=Parms.OutPointPosition;
		OutPointValue=Parms.OutPointValue;
		OutInterpolationType=Parms.OutInterpolationType;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor = FName(TEXT("GetHoudiniAssetActor"));
	AHoudiniAssetActor* UHoudiniPublicAPIAssetWrapper::GetHoudiniAssetActor() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent = FName(TEXT("GetHoudiniAssetComponent"));
	UHoudiniAssetComponent* UHoudiniPublicAPIAssetWrapper::GetHoudiniAssetComponent() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject = FName(TEXT("GetHoudiniAssetObject"));
	UObject* UHoudiniPublicAPIAssetWrapper::GetHoudiniAssetObject() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex = FName(TEXT("GetInputAtIndex"));
	bool UHoudiniPublicAPIAssetWrapper::GetInputAtIndex(const int32 InNodeInputIndex, UHoudiniPublicAPIInput*& OutInput)
	{
		HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms Parms;
		Parms.InNodeInputIndex=InNodeInputIndex;
		Parms.OutInput=OutInput;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex),&Parms);
		OutInput=Parms.OutInput;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetInputParameter = FName(TEXT("GetInputParameter"));
	bool UHoudiniPublicAPIAssetWrapper::GetInputParameter(FName const& InParameterName, UHoudiniPublicAPIInput*& OutInput)
	{
		HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms Parms;
		Parms.InParameterName=InParameterName;
		Parms.OutInput=OutInput;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetInputParameter),&Parms);
		OutInput=Parms.OutInput;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetInputParameters = FName(TEXT("GetInputParameters"));
	bool UHoudiniPublicAPIAssetWrapper::GetInputParameters(TMap<FName,UHoudiniPublicAPIInput*>& OutInputs)
	{
		HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms Parms;
		Parms.OutInputs=OutInputs;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetInputParameters),&Parms);
		OutInputs=Parms.OutInputs;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices = FName(TEXT("GetInputsAtIndices"));
	bool UHoudiniPublicAPIAssetWrapper::GetInputsAtIndices(TMap<int32,UHoudiniPublicAPIInput*>& OutInputs)
	{
		HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms Parms;
		Parms.OutInputs=OutInputs;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices),&Parms);
		OutInputs=Parms.OutInputs;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue = FName(TEXT("GetIntParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetIntParameterValue(FName InParameterTupleName, int32& OutValue, int32 InAtIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue;
		Parms.InAtIndex=InAtIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs = FName(TEXT("GetNumNodeInputs"));
	int32 UHoudiniPublicAPIAssetWrapper::GetNumNodeInputs() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetNumOutputs = FName(TEXT("GetNumOutputs"));
	int32 UHoudiniPublicAPIAssetWrapper::GetNumOutputs() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetNumOutputs),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt = FName(TEXT("GetOutputBakeNameFallbackAt"));
	bool UHoudiniPublicAPIAssetWrapper::GetOutputBakeNameFallbackAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, FString& OutBakeName) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		Parms.OutBakeName=OutBakeName;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt),&Parms);
		OutBakeName=Parms.OutBakeName;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt = FName(TEXT("GetOutputComponentAt"));
	UObject* UHoudiniPublicAPIAssetWrapper::GetOutputComponentAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt = FName(TEXT("GetOutputIdentifiersAt"));
	bool UHoudiniPublicAPIAssetWrapper::GetOutputIdentifiersAt(const int32 InIndex, TArray<FHoudiniPublicAPIOutputObjectIdentifier>& OutIdentifiers) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.OutIdentifiers=OutIdentifiers;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt),&Parms);
		OutIdentifiers=Parms.OutIdentifiers;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt = FName(TEXT("GetOutputObjectAt"));
	UObject* UHoudiniPublicAPIAssetWrapper::GetOutputObjectAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt = FName(TEXT("GetOutputTypeAt"));
	EHoudiniOutputType UHoudiniPublicAPIAssetWrapper::GetOutputTypeAt(const int32 InIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms Parms;
		Parms.InIndex=InIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetParameterTuples = FName(TEXT("GetParameterTuples"));
	bool UHoudiniPublicAPIAssetWrapper::GetParameterTuples(TMap<FName,FHoudiniParameterTuple>& OutParameterTuples) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms Parms;
		Parms.OutParameterTuples=OutParameterTuples;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetParameterTuples),&Parms);
		OutParameterTuples=Parms.OutParameterTuples;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod = FName(TEXT("GetPDGBakeMethod"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGBakeMethod(EHoudiniEngineBakeOption& OutBakeMethod)
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms Parms;
		Parms.OutBakeMethod=OutBakeMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod),&Parms);
		OutBakeMethod=Parms.OutBakeMethod;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection = FName(TEXT("GetPDGBakeSelection"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGBakeSelection(EPDGBakeSelectionOption& OutBakeSelection)
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms Parms;
		Parms.OutBakeSelection=OutBakeSelection;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection),&Parms);
		OutBakeSelection=Parms.OutBakeSelection;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode = FName(TEXT("GetPDGBakingReplacementMode"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGBakingReplacementMode(EPDGBakePackageReplaceModeOption& OutBakingReplacementMode) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms Parms;
		Parms.OutBakingReplacementMode=OutBakingReplacementMode;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode),&Parms);
		OutBakingReplacementMode=Parms.OutBakingReplacementMode;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors = FName(TEXT("GetPDGRecenterBakedActors"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGRecenterBakedActors() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths = FName(TEXT("GetPDGTOPNetworkPaths"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGTOPNetworkPaths(TArray<FString>& OutTOPNetworkPaths) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms Parms;
		Parms.OutTOPNetworkPaths=OutTOPNetworkPaths;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths),&Parms);
		OutTOPNetworkPaths=Parms.OutTOPNetworkPaths;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths = FName(TEXT("GetPDGTOPNodePaths"));
	bool UHoudiniPublicAPIAssetWrapper::GetPDGTOPNodePaths(const FString& InNetworkRelativePath, TArray<FString>& OutTOPNodePaths) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms Parms;
		Parms.InNetworkRelativePath=InNetworkRelativePath;
		Parms.OutTOPNodePaths=OutTOPNodePaths;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths),&Parms);
		OutTOPNodePaths=Parms.OutTOPNodePaths;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints = FName(TEXT("GetRampParameterNumPoints"));
	bool UHoudiniPublicAPIAssetWrapper::GetRampParameterNumPoints(FName InParameterTupleName, int32& OutNumPoints) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutNumPoints=OutNumPoints;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints),&Parms);
		OutNumPoints=Parms.OutNumPoints;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors = FName(TEXT("GetRecenterBakedActors"));
	bool UHoudiniPublicAPIAssetWrapper::GetRecenterBakedActors() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake = FName(TEXT("GetRemoveOutputAfterBake"));
	bool UHoudiniPublicAPIAssetWrapper::GetRemoveOutputAfterBake() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake = FName(TEXT("GetReplacePreviousBake"));
	bool UHoudiniPublicAPIAssetWrapper::GetReplacePreviousBake() const
	{
		HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue = FName(TEXT("GetStringParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::GetStringParameterValue(FName InParameterTupleName, FString& OutValue, int32 InAtIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.OutValue=OutValue;
		Parms.InAtIndex=InAtIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue),&Parms);
		OutValue=Parms.OutValue;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder = FName(TEXT("GetTemporaryCookFolder"));
	bool UHoudiniPublicAPIAssetWrapper::GetTemporaryCookFolder(FDirectoryPath& OutDirectoryPath) const
	{
		HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms Parms;
		Parms.OutDirectoryPath=OutDirectoryPath;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder),&Parms);
		OutDirectoryPath=Parms.OutDirectoryPath;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput = FName(TEXT("HasAnyCurrentProxyOutput"));
	bool UHoudiniPublicAPIAssetWrapper::HasAnyCurrentProxyOutput() const
	{
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt = FName(TEXT("HasAnyCurrentProxyOutputAt"));
	bool UHoudiniPublicAPIAssetWrapper::HasAnyCurrentProxyOutputAt(const int32 InIndex) const
	{
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms Parms;
		Parms.InIndex=InIndex;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink = FName(TEXT("HasPDGAssetLink"));
	bool UHoudiniPublicAPIAssetWrapper::HasPDGAssetLink() const
	{
		HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled = FName(TEXT("IsAutoBakeEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::IsAutoBakeEnabled() const
	{
		HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled = FName(TEXT("IsAutoCookingEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::IsAutoCookingEnabled() const
	{
		HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt = FName(TEXT("IsOutputCurrentProxyAt"));
	bool UHoudiniPublicAPIAssetWrapper::IsOutputCurrentProxyAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const
	{
		HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled = FName(TEXT("IsPDGAutoBakeEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::IsPDGAutoBakeEnabled() const
	{
		HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms Parms;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs = FName(TEXT("PDGBakeAllOutputs"));
	bool UHoudiniPublicAPIAssetWrapper::PDGBakeAllOutputs()
	{
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings = FName(TEXT("PDGBakeAllOutputsWithSettings"));
	bool UHoudiniPublicAPIAssetWrapper::PDGBakeAllOutputsWithSettings(const EHoudiniEngineBakeOption InBakeOption, const EPDGBakeSelectionOption InBakeSelection, const EPDGBakePackageReplaceModeOption InBakeReplacementMode, bool bInRecenterBakedActors)
	{
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms Parms;
		Parms.InBakeOption=InBakeOption;
		Parms.InBakeSelection=InBakeSelection;
		Parms.InBakeReplacementMode=InBakeReplacementMode;
		Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGCookNode = FName(TEXT("PDGCookNode"));
	bool UHoudiniPublicAPIAssetWrapper::PDGCookNode(const FString& InNetworkRelativePath, const FString& InNodeRelativePath)
	{
		HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms Parms;
		Parms.InNetworkRelativePath=InNetworkRelativePath;
		Parms.InNodeRelativePath=InNodeRelativePath;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGCookNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork = FName(TEXT("PDGCookOutputsForNetwork"));
	bool UHoudiniPublicAPIAssetWrapper::PDGCookOutputsForNetwork(const FString& InNetworkRelativePath)
	{
		HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms Parms;
		Parms.InNetworkRelativePath=InNetworkRelativePath;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks = FName(TEXT("PDGDirtyAllNetworks"));
	bool UHoudiniPublicAPIAssetWrapper::PDGDirtyAllNetworks()
	{
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork = FName(TEXT("PDGDirtyNetwork"));
	bool UHoudiniPublicAPIAssetWrapper::PDGDirtyNetwork(const FString& InNetworkRelativePath)
	{
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms Parms;
		Parms.InNetworkRelativePath=InNetworkRelativePath;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode = FName(TEXT("PDGDirtyNode"));
	bool UHoudiniPublicAPIAssetWrapper::PDGDirtyNode(const FString& InNetworkRelativePath, const FString& InNodeRelativePath)
	{
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms Parms;
		Parms.InNetworkRelativePath=InNetworkRelativePath;
		Parms.InNodeRelativePath=InNodeRelativePath;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_Rebuild = FName(TEXT("Rebuild"));
	bool UHoudiniPublicAPIAssetWrapper::Rebuild()
	{
		HoudiniPublicAPIAssetWrapper_eventRebuild_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_Rebuild),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_Recook = FName(TEXT("Recook"));
	bool UHoudiniPublicAPIAssetWrapper::Recook()
	{
		HoudiniPublicAPIAssetWrapper_eventRecook_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_Recook),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs = FName(TEXT("RefineAllCurrentProxyOutputs"));
	EHoudiniProxyRefineRequestResult UHoudiniPublicAPIAssetWrapper::RefineAllCurrentProxyOutputs(bool bInSilent)
	{
		HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms Parms;
		Parms.bInSilent=bInSilent ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue = FName(TEXT("SetAssetRefParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetAssetRefParameterValue(FName InParameterTupleName, UObject* InValue, int32 InAtIndex, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue;
		Parms.InAtIndex=InAtIndex;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled = FName(TEXT("SetAutoBakeEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::SetAutoBakeEnabled(bool bInAutoBakeEnabled)
	{
		HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms Parms;
		Parms.bInAutoBakeEnabled=bInAutoBakeEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled = FName(TEXT("SetAutoCookingEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::SetAutoCookingEnabled(bool bInSetEnabled)
	{
		HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms Parms;
		Parms.bInSetEnabled=bInSetEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetBakeFolder = FName(TEXT("SetBakeFolder"));
	bool UHoudiniPublicAPIAssetWrapper::SetBakeFolder(FDirectoryPath const& InDirectoryPath) const
	{
		HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms Parms;
		Parms.InDirectoryPath=InDirectoryPath;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetBakeFolder),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetBakeMethod = FName(TEXT("SetBakeMethod"));
	bool UHoudiniPublicAPIAssetWrapper::SetBakeMethod(const EHoudiniEngineBakeOption InBakeMethod)
	{
		HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms Parms;
		Parms.InBakeMethod=InBakeMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetBakeMethod),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue = FName(TEXT("SetBoolParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetBoolParameterValue(FName InParameterTupleName, bool InValue, int32 InAtIndex, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue ? true : false;
		Parms.InAtIndex=InAtIndex;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue = FName(TEXT("SetColorParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetColorParameterValue(FName InParameterTupleName, FLinearColor const& InValue, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints = FName(TEXT("SetColorRampParameterPoints"));
	bool UHoudiniPublicAPIAssetWrapper::SetColorRampParameterPoints(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint> const& InRampPoints, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InRampPoints=InRampPoints;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue = FName(TEXT("SetColorRampParameterPointValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetColorRampParameterPointValue(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, FLinearColor const& InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InPointIndex=InPointIndex;
		Parms.InPointPosition=InPointPosition;
		Parms.InPointValue=InPointValue;
		Parms.InInterpolationType=InInterpolationType;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue = FName(TEXT("SetFloatParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetFloatParameterValue(FName InParameterTupleName, float InValue, int32 InAtIndex, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue;
		Parms.InAtIndex=InAtIndex;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints = FName(TEXT("SetFloatRampParameterPoints"));
	bool UHoudiniPublicAPIAssetWrapper::SetFloatRampParameterPoints(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint> const& InRampPoints, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InRampPoints=InRampPoints;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue = FName(TEXT("SetFloatRampParameterPointValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetFloatRampParameterPointValue(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, const float InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InPointIndex=InPointIndex;
		Parms.InPointPosition=InPointPosition;
		Parms.InPointValue=InPointValue;
		Parms.InInterpolationType=InInterpolationType;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex = FName(TEXT("SetInputAtIndex"));
	bool UHoudiniPublicAPIAssetWrapper::SetInputAtIndex(const int32 InNodeInputIndex, const UHoudiniPublicAPIInput* InInput)
	{
		HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms Parms;
		Parms.InNodeInputIndex=InNodeInputIndex;
		Parms.InInput=InInput;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetInputParameter = FName(TEXT("SetInputParameter"));
	bool UHoudiniPublicAPIAssetWrapper::SetInputParameter(FName const& InParameterName, const UHoudiniPublicAPIInput* InInput)
	{
		HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms Parms;
		Parms.InParameterName=InParameterName;
		Parms.InInput=InInput;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetInputParameter),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetInputParameters = FName(TEXT("SetInputParameters"));
	bool UHoudiniPublicAPIAssetWrapper::SetInputParameters(TMap<FName,UHoudiniPublicAPIInput*> const& InInputs)
	{
		HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms Parms;
		Parms.InInputs=InInputs;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetInputParameters),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices = FName(TEXT("SetInputsAtIndices"));
	bool UHoudiniPublicAPIAssetWrapper::SetInputsAtIndices(TMap<int32,UHoudiniPublicAPIInput*> const& InInputs)
	{
		HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms Parms;
		Parms.InInputs=InInputs;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue = FName(TEXT("SetIntParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetIntParameterValue(FName InParameterTupleName, int32 InValue, int32 InAtIndex, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue;
		Parms.InAtIndex=InAtIndex;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt = FName(TEXT("SetOutputBakeNameFallbackAt"));
	bool UHoudiniPublicAPIAssetWrapper::SetOutputBakeNameFallbackAt(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FString& InBakeName)
	{
		HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InIdentifier=InIdentifier;
		Parms.InBakeName=InBakeName;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetParameterTuples = FName(TEXT("SetParameterTuples"));
	bool UHoudiniPublicAPIAssetWrapper::SetParameterTuples(TMap<FName,FHoudiniParameterTuple> const& InParameterTuples)
	{
		HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms Parms;
		Parms.InParameterTuples=InParameterTuples;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetParameterTuples),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled = FName(TEXT("SetPDGAutoBakeEnabled"));
	bool UHoudiniPublicAPIAssetWrapper::SetPDGAutoBakeEnabled(bool bInAutoBakeEnabled)
	{
		HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms Parms;
		Parms.bInAutoBakeEnabled=bInAutoBakeEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod = FName(TEXT("SetPDGBakeMethod"));
	bool UHoudiniPublicAPIAssetWrapper::SetPDGBakeMethod(const EHoudiniEngineBakeOption InBakeMethod)
	{
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms Parms;
		Parms.InBakeMethod=InBakeMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection = FName(TEXT("SetPDGBakeSelection"));
	bool UHoudiniPublicAPIAssetWrapper::SetPDGBakeSelection(const EPDGBakeSelectionOption InBakeSelection)
	{
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms Parms;
		Parms.InBakeSelection=InBakeSelection;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode = FName(TEXT("SetPDGBakingReplacementMode"));
	bool UHoudiniPublicAPIAssetWrapper::SetPDGBakingReplacementMode(const EPDGBakePackageReplaceModeOption InBakingReplacementMode)
	{
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms Parms;
		Parms.InBakingReplacementMode=InBakingReplacementMode;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors = FName(TEXT("SetPDGRecenterBakedActors"));
	bool UHoudiniPublicAPIAssetWrapper::SetPDGRecenterBakedActors(bool bInRecenterBakedActors)
	{
		HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms Parms;
		Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints = FName(TEXT("SetRampParameterNumPoints"));
	bool UHoudiniPublicAPIAssetWrapper::SetRampParameterNumPoints(FName InParameterTupleName, const int32 InNumPoints) const
	{
		HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InNumPoints=InNumPoints;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors = FName(TEXT("SetRecenterBakedActors"));
	bool UHoudiniPublicAPIAssetWrapper::SetRecenterBakedActors(bool bInRecenterBakedActors)
	{
		HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms Parms;
		Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake = FName(TEXT("SetRemoveOutputAfterBake"));
	bool UHoudiniPublicAPIAssetWrapper::SetRemoveOutputAfterBake(bool bInRemoveOutputAfterBake)
	{
		HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms Parms;
		Parms.bInRemoveOutputAfterBake=bInRemoveOutputAfterBake ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake = FName(TEXT("SetReplacePreviousBake"));
	bool UHoudiniPublicAPIAssetWrapper::SetReplacePreviousBake(bool bInReplacePreviousBake)
	{
		HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms Parms;
		Parms.bInReplacePreviousBake=bInReplacePreviousBake ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue = FName(TEXT("SetStringParameterValue"));
	bool UHoudiniPublicAPIAssetWrapper::SetStringParameterValue(FName InParameterTupleName, const FString& InValue, int32 InAtIndex, bool bInMarkChanged)
	{
		HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms Parms;
		Parms.InParameterTupleName=InParameterTupleName;
		Parms.InValue=InValue;
		Parms.InAtIndex=InAtIndex;
		Parms.bInMarkChanged=bInMarkChanged ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder = FName(TEXT("SetTemporaryCookFolder"));
	bool UHoudiniPublicAPIAssetWrapper::SetTemporaryCookFolder(FDirectoryPath const& InDirectoryPath) const
	{
		HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms Parms;
		Parms.InDirectoryPath=InDirectoryPath;
		const_cast<UHoudiniPublicAPIAssetWrapper*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter = FName(TEXT("TriggerButtonParameter"));
	bool UHoudiniPublicAPIAssetWrapper::TriggerButtonParameter(FName InButtonParameterName)
	{
		HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms Parms;
		Parms.InButtonParameterName=InButtonParameterName;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject = FName(TEXT("WrapHoudiniAssetObject"));
	bool UHoudiniPublicAPIAssetWrapper::WrapHoudiniAssetObject(UObject* InHoudiniAssetObjectToWrap)
	{
		HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms Parms;
		Parms.InHoudiniAssetObjectToWrap=InHoudiniAssetObjectToWrap;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIAssetWrapper::StaticRegisterNativesUHoudiniPublicAPIAssetWrapper()
	{
		UClass* Class = UHoudiniPublicAPIAssetWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeAllOutputs", &UHoudiniPublicAPIAssetWrapper::execBakeAllOutputs },
			{ "BakeAllOutputsWithSettings", &UHoudiniPublicAPIAssetWrapper::execBakeAllOutputsWithSettings },
			{ "BakeOutputObjectAt", &UHoudiniPublicAPIAssetWrapper::execBakeOutputObjectAt },
			{ "BindToPDGAssetLink", &UHoudiniPublicAPIAssetWrapper::execBindToPDGAssetLink },
			{ "CanWrapHoudiniObject", &UHoudiniPublicAPIAssetWrapper::execCanWrapHoudiniObject },
			{ "ClearHoudiniAssetObject", &UHoudiniPublicAPIAssetWrapper::execClearHoudiniAssetObject },
			{ "CreateEmptyInput", &UHoudiniPublicAPIAssetWrapper::execCreateEmptyInput },
			{ "CreateEmptyWrapper", &UHoudiniPublicAPIAssetWrapper::execCreateEmptyWrapper },
			{ "CreateWrapper", &UHoudiniPublicAPIAssetWrapper::execCreateWrapper },
			{ "DeleteInstantiatedAsset", &UHoudiniPublicAPIAssetWrapper::execDeleteInstantiatedAsset },
			{ "GetAssetRefParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetAssetRefParameterValue },
			{ "GetBakeFolder", &UHoudiniPublicAPIAssetWrapper::execGetBakeFolder },
			{ "GetBakeMethod", &UHoudiniPublicAPIAssetWrapper::execGetBakeMethod },
			{ "GetBoolParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetBoolParameterValue },
			{ "GetColorParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetColorParameterValue },
			{ "GetColorRampParameterPoints", &UHoudiniPublicAPIAssetWrapper::execGetColorRampParameterPoints },
			{ "GetColorRampParameterPointValue", &UHoudiniPublicAPIAssetWrapper::execGetColorRampParameterPointValue },
			{ "GetFloatParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetFloatParameterValue },
			{ "GetFloatRampParameterPoints", &UHoudiniPublicAPIAssetWrapper::execGetFloatRampParameterPoints },
			{ "GetFloatRampParameterPointValue", &UHoudiniPublicAPIAssetWrapper::execGetFloatRampParameterPointValue },
			{ "GetHoudiniAssetActor", &UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetActor },
			{ "GetHoudiniAssetComponent", &UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetComponent },
			{ "GetHoudiniAssetObject", &UHoudiniPublicAPIAssetWrapper::execGetHoudiniAssetObject },
			{ "GetInputAtIndex", &UHoudiniPublicAPIAssetWrapper::execGetInputAtIndex },
			{ "GetInputParameter", &UHoudiniPublicAPIAssetWrapper::execGetInputParameter },
			{ "GetInputParameters", &UHoudiniPublicAPIAssetWrapper::execGetInputParameters },
			{ "GetInputsAtIndices", &UHoudiniPublicAPIAssetWrapper::execGetInputsAtIndices },
			{ "GetIntParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetIntParameterValue },
			{ "GetNumNodeInputs", &UHoudiniPublicAPIAssetWrapper::execGetNumNodeInputs },
			{ "GetNumOutputs", &UHoudiniPublicAPIAssetWrapper::execGetNumOutputs },
			{ "GetOutputBakeNameFallbackAt", &UHoudiniPublicAPIAssetWrapper::execGetOutputBakeNameFallbackAt },
			{ "GetOutputComponentAt", &UHoudiniPublicAPIAssetWrapper::execGetOutputComponentAt },
			{ "GetOutputIdentifiersAt", &UHoudiniPublicAPIAssetWrapper::execGetOutputIdentifiersAt },
			{ "GetOutputObjectAt", &UHoudiniPublicAPIAssetWrapper::execGetOutputObjectAt },
			{ "GetOutputTypeAt", &UHoudiniPublicAPIAssetWrapper::execGetOutputTypeAt },
			{ "GetParameterTuples", &UHoudiniPublicAPIAssetWrapper::execGetParameterTuples },
			{ "GetPDGBakeMethod", &UHoudiniPublicAPIAssetWrapper::execGetPDGBakeMethod },
			{ "GetPDGBakeSelection", &UHoudiniPublicAPIAssetWrapper::execGetPDGBakeSelection },
			{ "GetPDGBakingReplacementMode", &UHoudiniPublicAPIAssetWrapper::execGetPDGBakingReplacementMode },
			{ "GetPDGRecenterBakedActors", &UHoudiniPublicAPIAssetWrapper::execGetPDGRecenterBakedActors },
			{ "GetPDGTOPNetworkPaths", &UHoudiniPublicAPIAssetWrapper::execGetPDGTOPNetworkPaths },
			{ "GetPDGTOPNodePaths", &UHoudiniPublicAPIAssetWrapper::execGetPDGTOPNodePaths },
			{ "GetRampParameterNumPoints", &UHoudiniPublicAPIAssetWrapper::execGetRampParameterNumPoints },
			{ "GetRecenterBakedActors", &UHoudiniPublicAPIAssetWrapper::execGetRecenterBakedActors },
			{ "GetRemoveOutputAfterBake", &UHoudiniPublicAPIAssetWrapper::execGetRemoveOutputAfterBake },
			{ "GetReplacePreviousBake", &UHoudiniPublicAPIAssetWrapper::execGetReplacePreviousBake },
			{ "GetStringParameterValue", &UHoudiniPublicAPIAssetWrapper::execGetStringParameterValue },
			{ "GetTemporaryCookFolder", &UHoudiniPublicAPIAssetWrapper::execGetTemporaryCookFolder },
			{ "HandleOnHoudiniAssetComponentPostBake", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentPostBake },
			{ "HandleOnHoudiniAssetComponentPostCook", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentPostCook },
			{ "HandleOnHoudiniAssetComponentStateChange", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniAssetComponentStateChange },
			{ "HandleOnHoudiniPDGAssetLinkPostBake", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniPDGAssetLinkPostBake },
			{ "HandleOnHoudiniPDGAssetLinkTOPNetPostCook", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniPDGAssetLinkTOPNetPostCook },
			{ "HandleOnHoudiniProxyMeshesRefinedGlobal", &UHoudiniPublicAPIAssetWrapper::execHandleOnHoudiniProxyMeshesRefinedGlobal },
			{ "HasAnyCurrentProxyOutput", &UHoudiniPublicAPIAssetWrapper::execHasAnyCurrentProxyOutput },
			{ "HasAnyCurrentProxyOutputAt", &UHoudiniPublicAPIAssetWrapper::execHasAnyCurrentProxyOutputAt },
			{ "HasPDGAssetLink", &UHoudiniPublicAPIAssetWrapper::execHasPDGAssetLink },
			{ "IsAutoBakeEnabled", &UHoudiniPublicAPIAssetWrapper::execIsAutoBakeEnabled },
			{ "IsAutoCookingEnabled", &UHoudiniPublicAPIAssetWrapper::execIsAutoCookingEnabled },
			{ "IsOutputCurrentProxyAt", &UHoudiniPublicAPIAssetWrapper::execIsOutputCurrentProxyAt },
			{ "IsPDGAutoBakeEnabled", &UHoudiniPublicAPIAssetWrapper::execIsPDGAutoBakeEnabled },
			{ "PDGBakeAllOutputs", &UHoudiniPublicAPIAssetWrapper::execPDGBakeAllOutputs },
			{ "PDGBakeAllOutputsWithSettings", &UHoudiniPublicAPIAssetWrapper::execPDGBakeAllOutputsWithSettings },
			{ "PDGCookNode", &UHoudiniPublicAPIAssetWrapper::execPDGCookNode },
			{ "PDGCookOutputsForNetwork", &UHoudiniPublicAPIAssetWrapper::execPDGCookOutputsForNetwork },
			{ "PDGDirtyAllNetworks", &UHoudiniPublicAPIAssetWrapper::execPDGDirtyAllNetworks },
			{ "PDGDirtyNetwork", &UHoudiniPublicAPIAssetWrapper::execPDGDirtyNetwork },
			{ "PDGDirtyNode", &UHoudiniPublicAPIAssetWrapper::execPDGDirtyNode },
			{ "Rebuild", &UHoudiniPublicAPIAssetWrapper::execRebuild },
			{ "Recook", &UHoudiniPublicAPIAssetWrapper::execRecook },
			{ "RefineAllCurrentProxyOutputs", &UHoudiniPublicAPIAssetWrapper::execRefineAllCurrentProxyOutputs },
			{ "SetAssetRefParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetAssetRefParameterValue },
			{ "SetAutoBakeEnabled", &UHoudiniPublicAPIAssetWrapper::execSetAutoBakeEnabled },
			{ "SetAutoCookingEnabled", &UHoudiniPublicAPIAssetWrapper::execSetAutoCookingEnabled },
			{ "SetBakeFolder", &UHoudiniPublicAPIAssetWrapper::execSetBakeFolder },
			{ "SetBakeMethod", &UHoudiniPublicAPIAssetWrapper::execSetBakeMethod },
			{ "SetBoolParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetBoolParameterValue },
			{ "SetColorParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetColorParameterValue },
			{ "SetColorRampParameterPoints", &UHoudiniPublicAPIAssetWrapper::execSetColorRampParameterPoints },
			{ "SetColorRampParameterPointValue", &UHoudiniPublicAPIAssetWrapper::execSetColorRampParameterPointValue },
			{ "SetFloatParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetFloatParameterValue },
			{ "SetFloatRampParameterPoints", &UHoudiniPublicAPIAssetWrapper::execSetFloatRampParameterPoints },
			{ "SetFloatRampParameterPointValue", &UHoudiniPublicAPIAssetWrapper::execSetFloatRampParameterPointValue },
			{ "SetInputAtIndex", &UHoudiniPublicAPIAssetWrapper::execSetInputAtIndex },
			{ "SetInputParameter", &UHoudiniPublicAPIAssetWrapper::execSetInputParameter },
			{ "SetInputParameters", &UHoudiniPublicAPIAssetWrapper::execSetInputParameters },
			{ "SetInputsAtIndices", &UHoudiniPublicAPIAssetWrapper::execSetInputsAtIndices },
			{ "SetIntParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetIntParameterValue },
			{ "SetOutputBakeNameFallbackAt", &UHoudiniPublicAPIAssetWrapper::execSetOutputBakeNameFallbackAt },
			{ "SetParameterTuples", &UHoudiniPublicAPIAssetWrapper::execSetParameterTuples },
			{ "SetPDGAutoBakeEnabled", &UHoudiniPublicAPIAssetWrapper::execSetPDGAutoBakeEnabled },
			{ "SetPDGBakeMethod", &UHoudiniPublicAPIAssetWrapper::execSetPDGBakeMethod },
			{ "SetPDGBakeSelection", &UHoudiniPublicAPIAssetWrapper::execSetPDGBakeSelection },
			{ "SetPDGBakingReplacementMode", &UHoudiniPublicAPIAssetWrapper::execSetPDGBakingReplacementMode },
			{ "SetPDGRecenterBakedActors", &UHoudiniPublicAPIAssetWrapper::execSetPDGRecenterBakedActors },
			{ "SetRampParameterNumPoints", &UHoudiniPublicAPIAssetWrapper::execSetRampParameterNumPoints },
			{ "SetRecenterBakedActors", &UHoudiniPublicAPIAssetWrapper::execSetRecenterBakedActors },
			{ "SetRemoveOutputAfterBake", &UHoudiniPublicAPIAssetWrapper::execSetRemoveOutputAfterBake },
			{ "SetReplacePreviousBake", &UHoudiniPublicAPIAssetWrapper::execSetReplacePreviousBake },
			{ "SetStringParameterValue", &UHoudiniPublicAPIAssetWrapper::execSetStringParameterValue },
			{ "SetTemporaryCookFolder", &UHoudiniPublicAPIAssetWrapper::execSetTemporaryCookFolder },
			{ "TriggerButtonParameter", &UHoudiniPublicAPIAssetWrapper::execTriggerButtonParameter },
			{ "WrapHoudiniAssetObject", &UHoudiniPublicAPIAssetWrapper::execWrapHoudiniAssetObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Bake all outputs of the instantiated asset using the settings configured on the asset.\n\x09 * @return true if the wrapper is valid and the baking process was started.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Bake all outputs of the instantiated asset using the settings configured on the asset.\n@return true if the wrapper is valid and the baking process was started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "BakeAllOutputs", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeOption_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeOption;
		static void NewProp_bInReplacePreviousBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplacePreviousBake;
		static void NewProp_bInRemoveTempOutputsOnSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRemoveTempOutputsOnSuccess;
		static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_InBakeOption = { "InBakeOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms, InBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(nullptr, 0) }; // 3229896027
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInReplacePreviousBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms*)Obj)->bInReplacePreviousBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInReplacePreviousBake = { "bInReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInReplacePreviousBake_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRemoveTempOutputsOnSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms*)Obj)->bInRemoveTempOutputsOnSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRemoveTempOutputsOnSuccess = { "bInRemoveTempOutputsOnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRemoveTempOutputsOnSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms*)Obj)->bInRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_InBakeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInReplacePreviousBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRemoveTempOutputsOnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Bake all outputs of the instantiated asset using the specified settings.\n\x09 * @param InBakeOption The bake method/target, (to actor vs blueprint, for example).\n\x09 * @param bInReplacePreviousBake If true, replace the previous bake output (assets + actor) with the\n\x09 * new results.\n\x09 * @param bInRemoveTempOutputsOnSuccess If true, the temporary outputs of the wrapper asset are removed\n\x09 * after a successful bake.\n\x09 * @param bInRecenterBakedActors If true, recenter the baked actors to their bounding box center after the bake.\n\x09 * @return true if the wrapper is valid and the baking process was started.\n\x09 */" },
		{ "CPP_Default_bInRecenterBakedActors", "false" },
		{ "CPP_Default_bInRemoveTempOutputsOnSuccess", "false" },
		{ "CPP_Default_bInReplacePreviousBake", "false" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Bake all outputs of the instantiated asset using the specified settings.\n@param InBakeOption The bake method/target, (to actor vs blueprint, for example).\n@param bInReplacePreviousBake If true, replace the previous bake output (assets + actor) with the\nnew results.\n@param bInRemoveTempOutputsOnSuccess If true, the temporary outputs of the wrapper asset are removed\nafter a successful bake.\n@param bInRecenterBakedActors If true, recenter the baked actors to their bounding box center after the bake.\n@return true if the wrapper is valid and the baking process was started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "BakeAllOutputsWithSettings", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBakeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InLandscapeBakeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeBakeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InLandscapeBakeType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InBakeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InBakeName = { "InBakeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms, InBakeName), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InBakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InBakeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType = { "InLandscapeBakeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms, InLandscapeBakeType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType_MetaData)) }; // 3006034418
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InBakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_InLandscapeBakeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Bake the specified output object to the content browser.\n\x09 * @param InIndex The output index of the output object to bake.\n\x09 * @param InIdentifier The output identifier of the output object to bake.\n\x09 * @param InBakeName The bake name to bake with.\n\x09 * @param InLandscapeBakeType For landscape assets, the output bake type.\n\x09 * @return true if the output was baked successfully, false if the wrapper/asset is invalid, or the output index\n\x09 * and output identifier combination is invalid, or if baking failed.\n\x09 */" },
		{ "CPP_Default_InBakeName", "None" },
		{ "CPP_Default_InLandscapeBakeType", "InValid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Bake the specified output object to the content browser.\n@param InIndex The output index of the output object to bake.\n@param InIdentifier The output identifier of the output object to bake.\n@param InBakeName The bake name to bake with.\n@param InLandscapeBakeType For landscape assets, the output bake type.\n@return true if the output was baked successfully, false if the wrapper/asset is invalid, or the output index\nand output identifier combination is invalid, or if baking failed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "BakeOutputObjectAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventBindToPDGAssetLink_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventBindToPDGAssetLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventBindToPDGAssetLink_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Attempt to bind to the asset's PDG asset link, if it has one, and if the wrapper is not already bound to its\n\x09 * events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Attempt to bind to the asset's PDG asset link, if it has one, and if the wrapper is not already bound to its\nevents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "BindToPDGAssetLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::HoudiniPublicAPIAssetWrapper_eventBindToPDGAssetLink_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventCanWrapHoudiniObject_Parms
		{
			UObject* InObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCanWrapHoudiniObject_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventCanWrapHoudiniObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventCanWrapHoudiniObject_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Checks if InObject can be wrapped by instances of UHoudiniPublicAPIAssetWrapper.\n\x09 * @param InObject The object to check for compatiblity.\n\x09 * @return true if InObject can be wrapped by instances of UHoudiniPublicAPIAssetWrapper.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Checks if InObject can be wrapped by instances of UHoudiniPublicAPIAssetWrapper.\n@param InObject The object to check for compatiblity.\n@return true if InObject can be wrapped by instances of UHoudiniPublicAPIAssetWrapper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "CanWrapHoudiniObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::HoudiniPublicAPIAssetWrapper_eventCanWrapHoudiniObject_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** This will unwrap/unbind the currently wrapped instantiated asset. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "This will unwrap/unbind the currently wrapped instantiated asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "ClearHoudiniAssetObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_InInputClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::NewProp_InInputClass = { "InInputClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms, InInputClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::NewProp_InInputClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Creates an empty input wrapper.\n\x09 * @param InInputClass the class of the input to create. See the UHoudiniPublicAPIInput class hierarchy.\n\x09 * @return The newly created input wrapper, or null if the input wrapper could not be created.\n\x09 */" },
		{ "DeterminesOutputType", "InInputClass" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Creates an empty input wrapper.\n@param InInputClass the class of the input to create. See the UHoudiniPublicAPIInput class hierarchy.\n@return The newly created input wrapper, or null if the input wrapper could not be created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "CreateEmptyInput", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventCreateEmptyWrapper_Parms
		{
			UObject* InOuter;
			UHoudiniPublicAPIAssetWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateEmptyWrapper_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateEmptyWrapper_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Factory function for creating a new empty wrapper instance.\n\x09 * An instantiated actor can be wrapped using SetHoudiniAssetActor.\n\x09 * @param InOuter the outer for the new wrapper instance.\n\x09 * @return The newly instantiated wrapper.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Factory function for creating a new empty wrapper instance.\nAn instantiated actor can be wrapped using SetHoudiniAssetActor.\n@param InOuter the outer for the new wrapper instance.\n@return The newly instantiated wrapper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "CreateEmptyWrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::HoudiniPublicAPIAssetWrapper_eventCreateEmptyWrapper_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventCreateWrapper_Parms
		{
			UObject* InOuter;
			UObject* InHoudiniAssetActorOrComponent;
			UHoudiniPublicAPIAssetWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHoudiniAssetActorOrComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateWrapper_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_InHoudiniAssetActorOrComponent = { "InHoudiniAssetActorOrComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateWrapper_Parms, InHoudiniAssetActorOrComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventCreateWrapper_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_InHoudiniAssetActorOrComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Factory function for creating new wrapper instances around instantiated assets.\n\x09 * @param InOuter The outer for the new wrapper instance.\n\x09 * @param InHoudiniAssetActorOrComponent The AHoudiniAssetActor or UHoudiniAssetComponent to wrap.\n\x09 * @return The newly instantiated wrapper that wraps InHoudiniAssetActor, or nullptr if the wrapper could not\n\x09 * be created, or if InHoudiniAssetActorOrComponent is invalid or not of a supported type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Factory function for creating new wrapper instances around instantiated assets.\n@param InOuter The outer for the new wrapper instance.\n@param InHoudiniAssetActorOrComponent The AHoudiniAssetActor or UHoudiniAssetComponent to wrap.\n@return The newly instantiated wrapper that wraps InHoudiniAssetActor, or nullptr if the wrapper could not\nbe created, or if InHoudiniAssetActorOrComponent is invalid or not of a supported type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "CreateWrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::HoudiniPublicAPIAssetWrapper_eventCreateWrapper_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Delete the instantiated asset from its level and mark the wrapper for destruction. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delete the instantiated asset from its level and mark the wrapper for destruction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "DeleteInstantiatedAsset", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of an AssetRef parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- StringAssetRef\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n\x09 * @return True if the parameter was found and the value set in OutValue.\n\x09 */" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of an AssetRef parameter.\nSupported parameter types:\n     - StringAssetRef\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched.\n@param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n@return True if the parameter was found and the value set in OutValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetAssetRefParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_OutDirectoryPath = { "OutDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms, OutDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_OutDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the Bake Folder fallback as configured on asset details panel.\n\x09 * @param OutDirectoryPath The current bake folder fallback.\n\x09 * @return true if the wrapper is valid and the value was fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the Bake Folder fallback as configured on asset details panel.\n@param OutDirectoryPath The current bake folder fallback.\n@return true if the wrapper is valid and the value was fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetBakeFolder", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutBakeMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBakeMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_OutBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_OutBakeMethod = { "OutBakeMethod", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms, OutBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(nullptr, 0) }; // 3229896027
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_OutBakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_OutBakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the currently set bake method to use (to actor, blueprint, foliage).\n\x09 * @param OutBakeMethod The current bake method.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the currently set bake method to use (to actor, blueprint, foliage).\n@param OutBakeMethod The current bake method.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetBakeMethod", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static void NewProp_OutValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_OutValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms*)Obj)->OutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of a bool parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Toggle\n\x09 *\x09- Folder (get if the folder is currently shown)\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n\x09 * @return true if the parameter and index was found and the value set in OutValue.\n\x09 */" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of a bool parameter.\nSupported parameter types:\n     - Toggle\n     - Folder (get if the folder is currently shown)\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched.\n@param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n@return true if the parameter and index was found and the value set in OutValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetBoolParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms, OutValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of a color parameter. Returns true if the parameter was found and the value set in OutValue.\n\x09 * Supported parameter types:\n\x09 *\x09- Color\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of a color parameter. Returns true if the parameter was found and the value set in OutValue.\nSupported parameter types:\n     - Color\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetColorParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRampPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRampPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_OutRampPoints_Inner = { "OutRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint, METADATA_PARAMS(nullptr, 0) }; // 823807857
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_OutRampPoints = { "OutRampPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms, OutRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 823807857
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_OutRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_OutRampPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the all of the points (position, value and interpolation) of a ColorRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- ColorRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutRampPoints The array to populate with the ramp's points.\n\x09 * @return True if the parameter was found and output values set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the all of the points (position, value and interpolation) of a ColorRamp parameter.\nSupported parameter types:\n     - ColorRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param OutRampPoints The array to populate with the ramp's points.\n@return True if the parameter was found and output values set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetColorRampParameterPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPointPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPointValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutInterpolationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutInterpolationType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms, InPointIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutPointPosition = { "OutPointPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms, OutPointPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutPointValue = { "OutPointValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms, OutPointValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutInterpolationType = { "OutInterpolationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms, OutInterpolationType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, METADATA_PARAMS(nullptr, 0) }; // 2663827118
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_InPointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutPointPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutPointValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_OutInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the position, value and interpolation of a point of a ColorRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- ColorRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InPointIndex The index of the ramp point to get.\n\x09 * @param OutPointPosition The point position [0, 1].\n\x09 * @param OutPointValue The value at the point.\n\x09 * @param OutInterpolationType The interpolation of the point.\n\x09 * @return True if the parameter was found and output values set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the position, value and interpolation of a point of a ColorRamp parameter.\nSupported parameter types:\n     - ColorRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InPointIndex The index of the ramp point to get.\n@param OutPointPosition The point position [0, 1].\n@param OutPointValue The value at the point.\n@param OutInterpolationType The interpolation of the point.\n@return True if the parameter was found and output values set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetColorRampParameterPointValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of a float parameter. Returns true if the parameter and index was found and the value set in OutValue.\n\x09 * Supported parameter types:\n\x09 *\x09- Float\n\x09 *\x09- Color\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n\x09 * @return true if the wrapper is valid and the parameter was found.\n\x09 */" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of a float parameter. Returns true if the parameter and index was found and the value set in OutValue.\nSupported parameter types:\n     - Float\n     - Color\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched.\n@param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n@return true if the wrapper is valid and the parameter was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetFloatParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRampPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRampPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_OutRampPoints_Inner = { "OutRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint, METADATA_PARAMS(nullptr, 0) }; // 1232449735
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_OutRampPoints = { "OutRampPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms, OutRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1232449735
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_OutRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_OutRampPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the all of the points (position, value and interpolation) of a FloatRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- FloatRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutRampPoints The array to populate with the ramp's points.\n\x09 * @return True if the parameter was found and output values set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the all of the points (position, value and interpolation) of a FloatRamp parameter.\nSupported parameter types:\n     - FloatRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param OutRampPoints The array to populate with the ramp's points.\n@return True if the parameter was found and output values set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetFloatRampParameterPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPointPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPointValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutInterpolationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutInterpolationType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms, InPointIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutPointPosition = { "OutPointPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms, OutPointPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutPointValue = { "OutPointValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms, OutPointValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutInterpolationType = { "OutInterpolationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms, OutInterpolationType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, METADATA_PARAMS(nullptr, 0) }; // 2663827118
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_InPointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutPointPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutPointValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_OutInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the position, value and interpolation of a point of a FloatRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- FloatRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InPointIndex The index of the ramp point to get.\n\x09 * @param OutPointPosition The point position [0, 1].\n\x09 * @param OutPointValue The value at the point.\n\x09 * @param OutInterpolationType The interpolation of the point.\n\x09 * @return True if the parameter was found and output values set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the position, value and interpolation of a point of a FloatRamp parameter.\nSupported parameter types:\n     - FloatRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InPointIndex The index of the ramp point to get.\n@param OutPointPosition The point position [0, 1].\n@param OutPointValue The value at the point.\n@param OutInterpolationType The interpolation of the point.\n@return True if the parameter was found and output values set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetFloatRampParameterPointValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms, ReturnValue), Z_Construct_UClass_AHoudiniAssetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Helper function for getting the instantiated HDA asset actor, if HoudiniAssetObject is an AHoudiniAssetActor or\n\x09 * a UHoudiniAssetComponent owned by a AHoudiniAssetActor.\n\x09 * @return The instantiated AHoudiniAssetActor, if HoudiniAssetObject is an AHoudiniAssetActor or\n\x09 * a UHoudiniAssetComponent owned by a AHoudiniAssetActor, otherwise nullptr. \n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Helper function for getting the instantiated HDA asset actor, if HoudiniAssetObject is an AHoudiniAssetActor or\na UHoudiniAssetComponent owned by a AHoudiniAssetActor.\n@return The instantiated AHoudiniAssetActor, if HoudiniAssetObject is an AHoudiniAssetActor or\na UHoudiniAssetComponent owned by a AHoudiniAssetActor, otherwise nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetHoudiniAssetActor", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms, ReturnValue), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Helper function for getting the UHoudiniAssetComponent of the HDA, if HoudiniAssetObject is a\n\x09 * UHoudiniAssetComponent or an AHoudiniAssetActor.\n\x09 * @return The instantiated AHoudiniAssetActor, if HoudiniAssetObject is a\n\x09 * UHoudiniAssetComponent or an AHoudiniAssetActor, otherwise nullptr. \n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Helper function for getting the UHoudiniAssetComponent of the HDA, if HoudiniAssetObject is a\nUHoudiniAssetComponent or an AHoudiniAssetActor.\n@return The instantiated AHoudiniAssetActor, if HoudiniAssetObject is a\nUHoudiniAssetComponent or an AHoudiniAssetActor, otherwise nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetHoudiniAssetComponent", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the wrapped instantiated houdini asset object.\n\x09 * @return The wrapped instantiated houdini asset object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the wrapped instantiated houdini asset object.\n@return The wrapped instantiated houdini asset object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetHoudiniAssetObject", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeInputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNodeInputIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_InNodeInputIndex = { "InNodeInputIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms, InNodeInputIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_OutInput = { "OutInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms, OutInput), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_InNodeInputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_OutInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the node input at the specific index and sets OutInput. This is a copy of the input structure. Changes to\n\x09 * properties in OutInput won't affect the instantiated HDA until a subsequent call to SetInputAtIndex.\n\x09 * @param InNodeInputIndex The index of the node input to get.\n\x09 * @param OutInput Copy of the input configuration and data for node input index InNodeInputIndex.\n\x09 * @return false if the input could be fetched, for example if the wrapper is invalid or the input index is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the node input at the specific index and sets OutInput. This is a copy of the input structure. Changes to\nproperties in OutInput won't affect the instantiated HDA until a subsequent call to SetInputAtIndex.\n@param InNodeInputIndex The index of the node input to get.\n@param OutInput Copy of the input configuration and data for node input index InNodeInputIndex.\n@return false if the input could be fetched, for example if the wrapper is invalid or the input index is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetInputAtIndex", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_OutInput = { "OutInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms, OutInput), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_OutInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InParameterName" },
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get a parameter-based input via parameter name. This is a copy of the input structure. Changes to properties in\n\x09 * OutInput won't affect the instantiated HDA until a subsequent call to SetInputParameter.\n\x09 * @param InParameterName The name of the input parameter.\n\x09 * @param OutInput A copy of the input configuration for InParameterName.\n\x09 * @return false if the wrapper is invalid, InParameterName is not a valid input parameter, or the current input\n\x09 * configuration could not be successfully copied to a new UHoudiniPublicAPIInput wrapper.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get a parameter-based input via parameter name. This is a copy of the input structure. Changes to properties in\nOutInput won't affect the instantiated HDA until a subsequent call to SetInputParameter.\n@param InParameterName The name of the input parameter.\n@param OutInput A copy of the input configuration for InParameterName.\n@return false if the wrapper is invalid, InParameterName is not a valid input parameter, or the current input\nconfiguration could not be successfully copied to a new UHoudiniPublicAPIInput wrapper." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetInputParameter", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInputs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutInputs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutInputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs_ValueProp = { "OutInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs_Key_KeyProp = { "OutInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs = { "OutInputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms, OutInputs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_OutInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InParameterName" },
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get a parameter-based inputs as a map\n\x09 * @param OutInputs All parameter inputs as a map, with the input parameter name as key. The input configuration is\n\x09 * copied from the instantiated asset, and changing an input property from the entry in this map will not affect the\n\x09 * instantiated asset until a subsequent SetInputParameters() call or SetInputParameter() call.\n\x09 * @return false if the wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get a parameter-based inputs as a map\n@param OutInputs All parameter inputs as a map, with the input parameter name as key. The input configuration is\ncopied from the instantiated asset, and changing an input property from the entry in this map will not affect the\ninstantiated asset until a subsequent SetInputParameters() call or SetInputParameter() call.\n@return false if the wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetInputParameters", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInputs_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutInputs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutInputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs_ValueProp = { "OutInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs_Key_KeyProp = { "OutInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs = { "OutInputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms, OutInputs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_OutInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get all node inputs.\n\x09 * @param OutInputs All node inputs as a map, with the node input index as key. The input configuration is copied\n\x09 * from the instantiated asset, and changing an input property from the entry in this map will not affect the\n\x09 * instantiated asset until a subsequent SetInputsAtIndices() call or SetInputAtIndex() call.\n\x09 * @return false if the wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get all node inputs.\n@param OutInputs All node inputs as a map, with the node input index as key. The input configuration is copied\nfrom the instantiated asset, and changing an input property from the entry in this map will not affect the\ninstantiated asset until a subsequent SetInputsAtIndices() call or SetInputAtIndex() call.\n@return false if the wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetInputsAtIndices", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of a int32 parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Int\n\x09 *\x09- IntChoice\n\x09 *\x09- MultiParm\n\x09 *\x09- Toggle\n\x09 *\x09- Folder (get if the folder is currently shown)\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n\x09 * @return true if the parameter and index was found and the value set in OutValue. \n\x09 */" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of a int32 parameter.\nSupported parameter types:\n     - Int\n     - IntChoice\n     - MultiParm\n     - Toggle\n     - Folder (get if the folder is currently shown)\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched.\n@param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n@return true if the parameter and index was found and the value set in OutValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetIntParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "OutNumNodeInputs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the number of node inputs supported by the asset.\n\x09 * @return The number of node inputs (inputs on the HDA node, excluding parameter-based inputs). Returns -1 if the\n\x09 * asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the number of node inputs supported by the asset.\n@return The number of node inputs (inputs on the HDA node, excluding parameter-based inputs). Returns -1 if the\nasset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetNumNodeInputs", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the number of outputs of the instantiated asset.\n\x09 * @return the number of outputs of the instantiated asset. -1 if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the number of outputs of the instantiated asset.\n@return the number of outputs of the instantiated asset. -1 if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetNumOutputs", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutBakeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_OutBakeName = { "OutBakeName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms, OutBakeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_OutBakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the output's fallback BakeName (as configured on the output details panel) for the output at InIndex\n\x09 * identified by InIdentifier.\n\x09 * @param InIndex The output index of the output object to get fallback BakeName for.\n\x09 * @param InIdentifier The output identifier of the output object to get fallback BakeName for.\n\x09 * @param OutBakeName The fallback BakeName configured for the output object identified by InIndex and InIdentifier. \n\x09 * @return false if the index/identifier is invalid or if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the output's fallback BakeName (as configured on the output details panel) for the output at InIndex\nidentified by InIdentifier.\n@param InIndex The output index of the output object to get fallback BakeName for.\n@param InIdentifier The output identifier of the output object to get fallback BakeName for.\n@param OutBakeName The fallback BakeName configured for the output object identified by InIndex and InIdentifier.\n@return false if the index/identifier is invalid or if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetOutputBakeNameFallbackAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the output component at InIndex identified by InIdentifier.\n\x09 * @param InIndex The output index to get output component from.\n\x09 * @param InIdentifier The output identifier of the output component to get from output index InIndex.\n\x09 * @return nullptr if the index/identifier is invalid or if the asset/wrapper is invalid, otherwise the output\n\x09 * component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the output component at InIndex identified by InIdentifier.\n@param InIndex The output index to get output component from.\n@param InIdentifier The output identifier of the output component to get from output index InIndex.\n@return nullptr if the index/identifier is invalid or if the asset/wrapper is invalid, otherwise the output\ncomponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetOutputComponentAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIdentifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIdentifiers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_InIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_OutIdentifiers_Inner = { "OutIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 581329292
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_OutIdentifiers = { "OutIdentifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms, OutIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 581329292
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_OutIdentifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_OutIdentifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Populates OutIdentifiers with the output object identifiers of all the output objects of the output at InIndex.\n\x09 * @param InIndex The output index to get output identifiers for.\n\x09 * @param OutIdentifiers The output identifiers of the output objects at output index InIndex.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Populates OutIdentifiers with the output object identifiers of all the output objects of the output at InIndex.\n@param InIndex The output index to get output identifiers for.\n@param OutIdentifiers The output identifiers of the output objects at output index InIndex.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetOutputIdentifiersAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the output object at InIndex identified by InIdentifier.\n\x09 * @param InIndex The output index to get output object from.\n\x09 * @param InIdentifier The output identifier of the output object to get from output index InIndex.\n\x09 * @return nullptr if the index/identifier is invalid or if the asset/wrapper is invalid, otherwise the output\n\x09 * object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the output object at InIndex identified by InIdentifier.\n@param InIndex The output index to get output object from.\n@param InIdentifier The output identifier of the output object to get from output index InIndex.\n@return nullptr if the index/identifier is invalid or if the asset/wrapper is invalid, otherwise the output\nobject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetOutputObjectAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_InIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, METADATA_PARAMS(nullptr, 0) }; // 3136956508
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the output type of the output at index InIndex.\n\x09 * @param InIndex The output index to get the type for.\n\x09 * @return the output type of the output at index InIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the output type of the output at index InIndex.\n@param InIndex The output index to get the type for.\n@return the output type of the output at index InIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetOutputTypeAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutParameterTuples_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutParameterTuples_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutParameterTuples;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples_ValueProp = { "OutParameterTuples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniParameterTuple, METADATA_PARAMS(nullptr, 0) }; // 2197323035
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples_Key_KeyProp = { "OutParameterTuples_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples = { "OutParameterTuples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms, OutParameterTuples), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2197323035
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_OutParameterTuples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets all parameter tuples (with their values) from this asset and outputs it to OutParameterTuples.\n\x09 * @param OutParameterTuples Populated with all parameter tuples and their values.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets all parameter tuples (with their values) from this asset and outputs it to OutParameterTuples.\n@param OutParameterTuples Populated with all parameter tuples and their values.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetParameterTuples", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutBakeMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBakeMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_OutBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_OutBakeMethod = { "OutBakeMethod", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms, OutBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(nullptr, 0) }; // 3229896027
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_OutBakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_OutBakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the currently set bake method to use for PDG baking (to actor, blueprint, foliage).\n\x09 * @param OutBakeMethod The current bake method.\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the currently set bake method to use for PDG baking (to actor, blueprint, foliage).\n@param OutBakeMethod The current bake method.\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGBakeMethod", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutBakeSelection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBakeSelection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_OutBakeSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_OutBakeSelection = { "OutBakeSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms, OutBakeSelection), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(nullptr, 0) }; // 2253993420
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_OutBakeSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_OutBakeSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get which outputs to bake for PDG, for example, all, selected network, selected node\n\x09 * @param OutBakeSelection The current bake selection setting.\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get which outputs to bake for PDG, for example, all, selected network, selected node\n@param OutBakeSelection The current bake selection setting.\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGBakeSelection", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutBakingReplacementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBakingReplacementMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_OutBakingReplacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_OutBakingReplacementMode = { "OutBakingReplacementMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms, OutBakingReplacementMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(nullptr, 0) }; // 2347698961
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_OutBakingReplacementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_OutBakingReplacementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the replacement mode to use for PDG baking (replace previous bake output vs increment)\n\x09 * @param OutBakingReplacementMode The current replacement mode.\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the replacement mode to use for PDG baking (replace previous bake output vs increment)\n@param OutBakingReplacementMode The current replacement mode.\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGBakingReplacementMode", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Getter for the bRecenterBakedActors property, that determines if baked actors are recentered to their bounding\n\x09 * box center after a PDG bake, on the PDG asset link.\n\x09 * @return true if baked actors should be recentered to their bounding box center after bake (PDG)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Getter for the bRecenterBakedActors property, that determines if baked actors are recentered to their bounding\nbox center after a PDG bake, on the PDG asset link.\n@return true if baked actors should be recentered to their bounding box center after bake (PDG)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGRecenterBakedActors", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutTOPNetworkPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTOPNetworkPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_OutTOPNetworkPaths_Inner = { "OutTOPNetworkPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_OutTOPNetworkPaths = { "OutTOPNetworkPaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms, OutTOPNetworkPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_OutTOPNetworkPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_OutTOPNetworkPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the paths (relative to the instantiated asset) of all TOP networks in the HDA.\n\x09 * @param OutTOPNetworkPaths The relative paths of the TOP networks in the HDA.\n\x09 * @return false if the asset/wrapper is invalid, or does not contain any TOP networks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the paths (relative to the instantiated asset) of all TOP networks in the HDA.\n@param OutTOPNetworkPaths The relative paths of the TOP networks in the HDA.\n@return false if the asset/wrapper is invalid, or does not contain any TOP networks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGTOPNetworkPaths", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNetworkRelativePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutTOPNodePaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTOPNodePaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_InNetworkRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_InNetworkRelativePath = { "InNetworkRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms, InNetworkRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_InNetworkRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_InNetworkRelativePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_OutTOPNodePaths_Inner = { "OutTOPNodePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_OutTOPNodePaths = { "OutTOPNodePaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms, OutTOPNodePaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_InNetworkRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_OutTOPNodePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_OutTOPNodePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the paths (relative to the specified TOP network) of all TOP nodes in the network.\n\x09 * @param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\n\x09 * GetPDGTOPNetworkPaths(), to fetch TOP node paths for.\n\x09 * @return false if the asset/wrapper is invalid, or does not contain the specified TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the paths (relative to the specified TOP network) of all TOP nodes in the network.\n@param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\nGetPDGTOPNetworkPaths(), to fetch TOP node paths for.\n@return false if the asset/wrapper is invalid, or does not contain the specified TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetPDGTOPNodePaths", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_OutNumPoints = { "OutNumPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms, OutNumPoints), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_OutNumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Gets the number of points of the specified ramp parameter.\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutNumPoints The number of points the ramp has.\n\x09 * @return true if the parameter was found and the number of points fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the number of points of the specified ramp parameter.\n@param InParameterTupleName The name of the parameter tuple.\n@param OutNumPoints The number of points the ramp has.\n@return true if the parameter was found and the number of points fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetRampParameterNumPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Gets the bRecenterBakedActors property. If true, recenter baked actors to their bounding box center after bake. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Gets the bRecenterBakedActors property. If true, recenter baked actors to their bounding box center after bake." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetRecenterBakedActors", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the bRemoveOutputAfterBake property, that controls if temporary outputs are removed after a successful bake.\n\x09 * @return true if bRemoveOutputAfterBake is true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the bRemoveOutputAfterBake property, that controls if temporary outputs are removed after a successful bake.\n@return true if bRemoveOutputAfterBake is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetRemoveOutputAfterBake", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Get the bReplacePreviousBake property.\n\x09 * @return The value of bReplacePreviousBake. If true, previous bake output (if any) will be replaced by subsequent\n\x09 * bakes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the bReplacePreviousBake property.\n@return The value of bReplacePreviousBake. If true, previous bake output (if any) will be replaced by subsequent\nbakes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetReplacePreviousBake", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the value of a String parameter.\n\x09 * Supported parameter types:\n\x09 * \x09- String\n\x09 * \x09- StringChoice\n\x09 * \x09- StringAssetRef\n\x09 * \x09- File\n\x09 * \x09- FileDir\n\x09 * \x09- FileGeo\n\x09 * \x09- FileImage\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param OutValue The value of the parameter that was fetched.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n\x09 * @return true if the parameter was found and the value set in OutValue.\n\x09 */" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the value of a String parameter.\nSupported parameter types:\n     - String\n     - StringChoice\n     - StringAssetRef\n     - File\n     - FileDir\n     - FileGeo\n     - FileImage\n@param InParameterTupleName The name of the parameter tuple.\n@param OutValue The value of the parameter that was fetched.\n@param InAtIndex The index of the parameter in the parameter tuple to get. Defaults to 0.\n@return true if the parameter was found and the value set in OutValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetStringParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_OutDirectoryPath = { "OutDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms, OutDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_OutDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Get the Temp Folder fallback as configured on asset details panel\n\x09 * @param OutDirectoryPath The currently configured fallback temporary cook folder.\n\x09 * @return true if the wrapper is valid and the value was fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Get the Temp Folder fallback as configured on asset details panel\n@param OutDirectoryPath The currently configured fallback temporary cook folder.\n@return true if the wrapper is valid and the value was fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "GetTemporaryCookFolder", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostBake_Parms
		{
			UHoudiniAssetComponent* InHAC;
			bool bInBakeSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHAC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHAC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBakeSuccess_MetaData[];
#endif
		static void NewProp_bInBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBakeSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_InHAC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_InHAC = { "InHAC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostBake_Parms, InHAC), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_InHAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_InHAC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostBake_Parms*)Obj)->bInBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess = { "bInBakeSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_InHAC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::NewProp_bInBakeSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler that is bound to the wrapped HAC's PostBake delegate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to the wrapped HAC's PostBake delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniAssetComponentPostBake", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostCook_Parms
		{
			UHoudiniAssetComponent* InHAC;
			bool bInCookSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHAC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHAC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCookSuccess_MetaData[];
#endif
		static void NewProp_bInCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCookSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_InHAC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_InHAC = { "InHAC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostCook_Parms, InHAC), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_InHAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_InHAC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostCook_Parms*)Obj)->bInCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess = { "bInCookSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostCook_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_InHAC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::NewProp_bInCookSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler that is bound to the wrapped HAC's PostCook delegate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to the wrapped HAC's PostCook delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniAssetComponentPostCook", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentPostCook_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentStateChange_Parms
		{
			UHoudiniAssetComponent* InHAC;
			EHoudiniAssetState InFromState;
			EHoudiniAssetState InToState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHAC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHAC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFromState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFromState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFromState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InToState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InToState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InToState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InHAC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InHAC = { "InHAC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentStateChange_Parms, InHAC), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InHAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InHAC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState = { "InFromState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentStateChange_Parms, InFromState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState_MetaData)) }; // 3868777027
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState = { "InToState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentStateChange_Parms, InToState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState_MetaData)) }; // 3868777027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InHAC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InFromState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::NewProp_InToState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler that is bound to the wrapped HAC's state change delegate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to the wrapped HAC's state change delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniAssetComponentStateChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniAssetComponentStateChange_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkPostBake_Parms
		{
			UHoudiniPDGAssetLink* InPDGAssetLink;
			bool bInBakeSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPDGAssetLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBakeSuccess_MetaData[];
#endif
		static void NewProp_bInBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBakeSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_InPDGAssetLink = { "InPDGAssetLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkPostBake_Parms, InPDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkPostBake_Parms*)Obj)->bInBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess = { "bInBakeSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkPostBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_InPDGAssetLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::NewProp_bInBakeSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler that is bound to the wrapped PDG asset link's OnPostBake delegate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to the wrapped PDG asset link's OnPostBake delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniPDGAssetLinkPostBake", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkPostBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms
		{
			UHoudiniPDGAssetLink* InPDGAssetLink;
			UTOPNetwork* InTOPNet;
			bool bInAnyWorkItemsFailed;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPDGAssetLink;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTOPNet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAnyWorkItemsFailed_MetaData[];
#endif
		static void NewProp_bInAnyWorkItemsFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAnyWorkItemsFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_InPDGAssetLink = { "InPDGAssetLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms, InPDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_InTOPNet = { "InTOPNet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms, InTOPNet), Z_Construct_UClass_UTOPNetwork_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms*)Obj)->bInAnyWorkItemsFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed = { "bInAnyWorkItemsFailed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_InPDGAssetLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_InTOPNet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::NewProp_bInAnyWorkItemsFailed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler that is bound to the wrapped PDG asset link's OnPostTOPNetworkCookDelegate delegate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to the wrapped PDG asset link's OnPostTOPNetworkCookDelegate delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniPDGAssetLinkTOPNetPostCook", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniPDGAssetLinkTOPNetPostCook_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics
	{
		struct HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniProxyMeshesRefinedGlobal_Parms
		{
			UHoudiniAssetComponent* InHAC;
			EHoudiniProxyRefineResult InResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHAC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHAC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InHAC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InHAC = { "InHAC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniProxyMeshesRefinedGlobal_Parms, InHAC), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InHAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InHAC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult = { "InResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniProxyMeshesRefinedGlobal_Parms, InResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult_MetaData)) }; // 2317393953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InHAC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::NewProp_InResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Handler that is bound to FHoudiniEngineCommands::GetOnHoudiniProxyMeshesRefined(). It is called for any HAC\n\x09 * that has its proxy meshes refined. If relevant for this wrapped asset, then\n\x09 * #OnProxyMeshesRefinedDelegate is broadcast.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Handler that is bound to FHoudiniEngineCommands::GetOnHoudiniProxyMeshesRefined(). It is called for any HAC\nthat has its proxy meshes refined. If relevant for this wrapped asset, then\n#OnProxyMeshesRefinedDelegate is broadcast." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HandleOnHoudiniProxyMeshesRefinedGlobal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::HoudiniPublicAPIAssetWrapper_eventHandleOnHoudiniProxyMeshesRefinedGlobal_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Returns true if the wrapped asset has any proxy output on any outputs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if the wrapped asset has any proxy output on any outputs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HasAnyCurrentProxyOutput", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_InIndex_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Returns true if the wrapped asset has any proxy output at output InIndex.\n\x09 * @param InIndex The output index to check for proxies.\n\x09 * @return true if the wrapped asset has any proxy output at output InIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if the wrapped asset has any proxy output at output InIndex.\n@param InIndex The output index to check for proxies.\n@return true if the wrapped asset has any proxy output at output InIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HasAnyCurrentProxyOutputAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Returns true if the wrapped asset is valid and has a PDG asset link.\n\x09 * @return true if the wrapped asset is valid and has a PDG asset link.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if the wrapped asset is valid and has a PDG asset link.\n@return true if the wrapped asset is valid and has a PDG asset link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "HasPDGAssetLink", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Returns true if auto bake is enabled. See SetAutoBakeEnabled. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if auto bake is enabled. See SetAutoBakeEnabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "IsAutoBakeEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Returns true if auto cooking is enabled for this instantiated asset. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if auto cooking is enabled for this instantiated asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "IsAutoCookingEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Returns true if the output object at output InIndex with identifier InIdentifier is a proxy.\n\x09 * @param InIndex The output index of the output object to check.\n\x09 * @param InIdentifier The output identifier of the output object at output index InIndex to check.\n\x09 * @return true if the output object at output InIndex with identifier InIdentifier is a proxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if the output object at output InIndex with identifier InIdentifier is a proxy.\n@param InIndex The output index of the output object to check.\n@param InIdentifier The output identifier of the output object at output index InIndex to check.\n@return true if the output object at output InIndex with identifier InIdentifier is a proxy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "IsOutputCurrentProxyAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Returns true if PDG auto bake is enabled. See SetPDGAutoBakeEnabled(). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Returns true if PDG auto bake is enabled. See SetPDGAutoBakeEnabled()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "IsPDGAutoBakeEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Bake all outputs of the instantiated asset's PDG contexts using the settings configured on the asset.\n\x09 * @return true if the bake was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Bake all outputs of the instantiated asset's PDG contexts using the settings configured on the asset.\n@return true if the bake was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGBakeAllOutputs", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeReplacementMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeReplacementMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeReplacementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption = { "InBakeOption", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms, InBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_MetaData)) }; // 3229896027
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection = { "InBakeSelection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms, InBakeSelection), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection_MetaData)) }; // 2253993420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode = { "InBakeReplacementMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms, InBakeReplacementMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode_MetaData)) }; // 2347698961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms*)Obj)->bInRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_InBakeReplacementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_bInRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Bake all outputs of the instantiated asset's PDG contexts using the specified settings.\n\x09 * @param InBakeOption The bake option (to actors, blueprints or foliage).\n\x09 * @param InBakeSelection Whether to bake outputs from all networks, the selected network or the selected node.\n\x09 * @param InBakeReplacementMode Whether to replace previous bake results/existing assets with the same name\n\x09 * when baking.\n\x09 * @param bInRecenterBakedActors If true, recenter baked actors to their bounding box center. Defaults to false.\n\x09 * @return true if the bake was successful.\n\x09 */" },
		{ "CPP_Default_bInRecenterBakedActors", "false" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Bake all outputs of the instantiated asset's PDG contexts using the specified settings.\n@param InBakeOption The bake option (to actors, blueprints or foliage).\n@param InBakeSelection Whether to bake outputs from all networks, the selected network or the selected node.\n@param InBakeReplacementMode Whether to replace previous bake results/existing assets with the same name\nwhen baking.\n@param bInRecenterBakedActors If true, recenter baked actors to their bounding box center. Defaults to false.\n@return true if the bake was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGBakeAllOutputsWithSettings", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNetworkRelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeRelativePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNetworkRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNetworkRelativePath = { "InNetworkRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms, InNetworkRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNetworkRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNetworkRelativePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNodeRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNodeRelativePath = { "InNodeRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms, InNodeRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNodeRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNodeRelativePath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNetworkRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_InNodeRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Cook the specified TOP node.\n\x09 * @param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\n\x09 * GetPDGTOPNetworkPaths().\n\x09 * @param InNodeRelativePath The relative path of the TOP node inside the specified TOP network.\n\x09 * @return true if the TOP node was set to cook.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Cook the specified TOP node.\n@param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\nGetPDGTOPNetworkPaths().\n@param InNodeRelativePath The relative path of the TOP node inside the specified TOP network.\n@return true if the TOP node was set to cook." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGCookNode", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNetworkRelativePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_InNetworkRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_InNetworkRelativePath = { "InNetworkRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms, InNetworkRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_InNetworkRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_InNetworkRelativePath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_InNetworkRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Cook all outputs for the specified TOP network.\n\x09 * @param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\n\x09 * GetPDGTOPNetworkPaths().\n\x09 * @return true if the TOP network was set to cook.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Cook all outputs for the specified TOP network.\n@param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\nGetPDGTOPNetworkPaths().\n@return true if the TOP network was set to cook." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGCookOutputsForNetwork", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Dirty all TOP networks in this asset.\n\x09 * @return true if TOP networks were dirtied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Dirty all TOP networks in this asset.\n@return true if TOP networks were dirtied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGDirtyAllNetworks", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNetworkRelativePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_InNetworkRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_InNetworkRelativePath = { "InNetworkRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms, InNetworkRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_InNetworkRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_InNetworkRelativePath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_InNetworkRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Dirty the specified TOP network.\n\x09 * @param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\n\x09 * GetPDGTOPNetworkPaths().\n\x09 * @return true if the TOP network was dirtied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Dirty the specified TOP network.\n@param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\nGetPDGTOPNetworkPaths().\n@return true if the TOP network was dirtied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGDirtyNetwork", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNetworkRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNetworkRelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeRelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeRelativePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNetworkRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNetworkRelativePath = { "InNetworkRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms, InNetworkRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNetworkRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNetworkRelativePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNodeRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNodeRelativePath = { "InNodeRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms, InNodeRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNodeRelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNodeRelativePath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNetworkRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_InNodeRelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Dirty the specified TOP node.\n\x09 * @param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\n\x09 * GetPDGTOPNetworkPaths().\n\x09 * @param InNodeRelativePath The relative path of the TOP node inside the specified TOP network.\n\x09 * @return true if TOP nodes were dirtied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Dirty the specified TOP node.\n@param InNetworkRelativePath The relative path of the network inside the instantiated asset, as returned by\nGetPDGTOPNetworkPaths().\n@param InNodeRelativePath The relative path of the TOP node inside the specified TOP network.\n@return true if TOP nodes were dirtied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "PDGDirtyNode", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventRebuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventRebuild_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Marks the HDA as needing to be rebuilt in Houdini Engine and immediately returns. The rebuild happens\n\x09 * asynchronously. If you need to take action after the rebuild and cook completes, one of the wrapper's delegates\n\x09 * can be used, such as: OnPostCookDelegate or OnPostProcessingDelegate.\n\x09 * \n\x09 * @returns true If the HDA was successfully marked as needing to be rebuilt.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Marks the HDA as needing to be rebuilt in Houdini Engine and immediately returns. The rebuild happens\nasynchronously. If you need to take action after the rebuild and cook completes, one of the wrapper's delegates\ncan be used, such as: OnPostCookDelegate or OnPostProcessingDelegate.\n\n@returns true If the HDA was successfully marked as needing to be rebuilt." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "Rebuild", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventRebuild_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventRecook_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventRecook_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Marks the HDA as needing to be cooked and immediately returns. The cook happens asynchronously. If you need\n\x09 * to take action after the cook completes, one of the wrapper's delegates can be used, such as:\n\x09 * OnPostCookDelegate or OnPostProcessingDelegate.\n\x09 * \n\x09 * @returns true If the HDA was successfully marked as needing to be cooked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Marks the HDA as needing to be cooked and immediately returns. The cook happens asynchronously. If you need\nto take action after the cook completes, one of the wrapper's delegates can be used, such as:\nOnPostCookDelegate or OnPostProcessingDelegate.\n\n@returns true If the HDA was successfully marked as needing to be cooked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "Recook", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventRecook_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInSilent_MetaData[];
#endif
		static void NewProp_bInSilent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSilent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms*)Obj)->bInSilent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent = { "bInSilent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult, METADATA_PARAMS(nullptr, 0) }; // 1939588320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_bInSilent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Refines all current proxy mesh outputs (if any) to static mesh. This could trigger a cook if the asset is loaded\n\x09 * and has no cook data.\n\x09 * @param bInSilent If true, then slate notifications about the refinement process are not shown.\n\x09 * @return Whether the refinement process is needed, requires a pending asynchronous cook, or was completed\n\x09 * synchronously.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Refines all current proxy mesh outputs (if any) to static mesh. This could trigger a cook if the asset is loaded\nand has no cook data.\n@param bInSilent If true, then slate notifications about the refinement process are not shown.\n@return Whether the refinement process is needed, requires a pending asynchronous cook, or was completed\nsynchronously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "RefineAllCurrentProxyOutputs", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms, InValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of an AssetRef parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- StringAssetRef\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of an AssetRef parameter.\nSupported parameter types:\n     - StringAssetRef\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetAssetRefParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAutoBakeEnabled_MetaData[];
#endif
		static void NewProp_bInAutoBakeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoBakeEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms*)Obj)->bInAutoBakeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled = { "bInAutoBakeEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set whether to automatically bake all outputs after a successful cook.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set whether to automatically bake all outputs after a successful cook.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetAutoBakeEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInSetEnabled_MetaData[];
#endif
		static void NewProp_bInSetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSetEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms*)Obj)->bInSetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled = { "bInSetEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_bInSetEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Enable or disable auto cooking of the asset (on parameter changes, input updates and transform changes, for\n\x09 * example)\n\x09 * @param bInSetEnabled Whether or not enable auto cooking.\n\x09 * @return true if the value was changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Enable or disable auto cooking of the asset (on parameter changes, input updates and transform changes, for\nexample)\n@param bInSetEnabled Whether or not enable auto cooking.\n@return true if the value was changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetAutoCookingEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_InDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_InDirectoryPath = { "InDirectoryPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms, InDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_InDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_InDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_InDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the Bake Folder fallback as configured on asset details panel. Returns true if the value was changed.\n\x09 * @param InDirectoryPath The new bake folder fallback.\n\x09 * @return true if the wrapper is valid and the value was set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the Bake Folder fallback as configured on asset details panel. Returns true if the value was changed.\n@param InDirectoryPath The new bake folder fallback.\n@return true if the wrapper is valid and the value was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetBakeFolder", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod = { "InBakeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms, InBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod_MetaData)) }; // 3229896027
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_InBakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Sets the bake method to use (to actor, blueprint, foliage).\n\x09 * @param InBakeMethod The new bake method to set.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Sets the bake method to use (to actor, blueprint, foliage).\n@param InBakeMethod The new bake method to set.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetBakeMethod", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of a bool parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Toggle\n\x09 *\x09- Folder (set the folder as currently shown)\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of a bool parameter.\nSupported parameter types:\n     - Toggle\n     - Folder (set the folder as currently shown)\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetBoolParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of a color parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Color\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of a color parameter.\nSupported parameter types:\n     - Color\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetColorParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRampPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRampPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InRampPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInMarkChanged_MetaData[];
#endif
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints_Inner = { "InRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint, METADATA_PARAMS(nullptr, 0) }; // 823807857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints = { "InRampPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms, InRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints_MetaData)) }; // 823807857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_InRampPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set all of the points (position, value and interpolation) of color ramp.\n\x09 * Supported parameter types:\n\x09 *\x09- ColorRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InRampPoints An array of structs to set as the ramp's points. \n\x09 * @param bInMarkChanged If true, parameters are marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the values were set.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set all of the points (position, value and interpolation) of color ramp.\nSupported parameter types:\n     - ColorRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InRampPoints An array of structs to set as the ramp's points.\n@param bInMarkChanged If true, parameters are marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the values were set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetColorRampParameterPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPointPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPointValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInMarkChanged_MetaData[];
#endif
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms, InPointIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointPosition = { "InPointPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms, InPointPosition), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointValue = { "InPointValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms, InPointValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType = { "InInterpolationType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms, InInterpolationType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData)) }; // 2663827118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InPointValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_InInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the position, value and interpolation of a point of a ColorRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- ColorRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InPointIndex The index of the ramp point to set.\n\x09 * @param InPointPosition The point position to set [0, 1].\n\x09 * @param InPointValue The value to set for the point.\n\x09 * @param InInterpolationType The interpolation to set at the point. Defaults to EHoudiniPublicAPIRampInterpolationType.Linear.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InInterpolationType", "LINEAR" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the position, value and interpolation of a point of a ColorRamp parameter.\nSupported parameter types:\n     - ColorRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InPointIndex The index of the ramp point to set.\n@param InPointPosition The point position to set [0, 1].\n@param InPointValue The value to set for the point.\n@param InInterpolationType The interpolation to set at the point. Defaults to EHoudiniPublicAPIRampInterpolationType.Linear.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetColorRampParameterPointValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of a float-based parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Float\n\x09 *\x09- Color\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to set the value at. Defaults to 0.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of a float-based parameter.\nSupported parameter types:\n     - Float\n     - Color\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param InAtIndex The index of the parameter in the parameter tuple to set the value at. Defaults to 0.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetFloatParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRampPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRampPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InRampPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInMarkChanged_MetaData[];
#endif
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints_Inner = { "InRampPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint, METADATA_PARAMS(nullptr, 0) }; // 1232449735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints = { "InRampPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms, InRampPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints_MetaData)) }; // 1232449735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_InRampPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set all of the points (position, value and interpolation) of float ramp.\n\x09 * Supported parameter types:\n\x09 *\x09- FloatRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InRampPoints An array of structs to set as the ramp's points. \n\x09 * @param bInMarkChanged If true, parameters are marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the values were set.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set all of the points (position, value and interpolation) of float ramp.\nSupported parameter types:\n     - FloatRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InRampPoints An array of structs to set as the ramp's points.\n@param bInMarkChanged If true, parameters are marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the values were set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetFloatRampParameterPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPointPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPointValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInMarkChanged_MetaData[];
#endif
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointIndex = { "InPointIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms, InPointIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointPosition = { "InPointPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms, InPointPosition), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointValue = { "InPointValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms, InPointValue), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType = { "InInterpolationType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms, InInterpolationType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType_MetaData)) }; // 2663827118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InPointValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_InInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the position, value and interpolation of a point of a FloatRamp parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- FloatRamp\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InPointIndex The index of the ramp point to set.\n\x09 * @param InPointPosition The point position to set [0, 1].\n\x09 * @param InPointValue The value to set for the point.\n\x09 * @param InInterpolationType The interpolation to set at the point. Defaults to EHoudiniPublicAPIRampInterpolationType.Linear.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InInterpolationType", "LINEAR" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the position, value and interpolation of a point of a FloatRamp parameter.\nSupported parameter types:\n     - FloatRamp\n@param InParameterTupleName The name of the parameter tuple.\n@param InPointIndex The index of the ramp point to set.\n@param InPointPosition The point position to set [0, 1].\n@param InPointValue The value to set for the point.\n@param InInterpolationType The interpolation to set at the point. Defaults to EHoudiniPublicAPIRampInterpolationType.Linear.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetFloatRampParameterPointValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeInputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNodeInputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InNodeInputIndex = { "InNodeInputIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms, InNodeInputIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InNodeInputIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms, InInput), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InInput_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InNodeInputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set a node input at the specific index.\n\x09 * @param InNodeInputIndex The index of the node input, starts at 0.\n\x09 * @param InInput The input wrapper to use to set the input.\n\x09 * @return false if the the input could not be set, for example, if the wrapper is invalid, or if the input index\n\x09 * is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set a node input at the specific index.\n@param InNodeInputIndex The index of the node input, starts at 0.\n@param InInput The input wrapper to use to set the input.\n@return false if the the input could not be set, for example, if the wrapper is invalid, or if the input index\nis invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetInputAtIndex", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms, InInput), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InInput_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InParameterName" },
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set a parameter-based input via parameter name.\n\x09 * @param InParameterName The name of the input parameter.\n\x09 * @param InInput The input wrapper to use to set/configure the input.\n\x09 * @return false if the wrapper is invalid, InParameterName is not a valid input parameter, or if InInput could\n\x09 * not be used to successfully configure/set the input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set a parameter-based input via parameter name.\n@param InParameterName The name of the input parameter.\n@param InInput The input wrapper to use to set/configure the input.\n@return false if the wrapper is invalid, InParameterName is not a valid input parameter, or if InInput could\nnot be used to successfully configure/set the input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetInputParameter", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InInputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_ValueProp = { "InInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_Key_KeyProp = { "InInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs = { "InInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms, InInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_InInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InParameterName" },
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set a parameter-based inputs via a map,\n\x09 * @param InInputs A map of input parameter names to input wrapper to use to set inputs on the instantiated asset.\n\x09 * @return true if all inputs from InInputs were set successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set a parameter-based inputs via a map,\n@param InInputs A map of input parameter names to input wrapper to use to set inputs on the instantiated asset.\n@return true if all inputs from InInputs were set successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetInputParameters", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputs_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InInputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_ValueProp = { "InInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_Key_KeyProp = { "InInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs = { "InInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms, InInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_InInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set node inputs at the specified indices via a map.\n\x09 * @param InInputs A map of node input index to input wrapper to use to set inputs on the instantiated asset.\n\x09 * @return true if all inputs from InInputs were set successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set node inputs at the specified indices via a map.\n@param InInputs A map of node input index to input wrapper to use to set inputs on the instantiated asset.\n@return true if all inputs from InInputs were set successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetInputsAtIndices", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of a int32 parameter.\n\x09 * Supported parameter types:\n\x09 *\x09- Int\n\x09 *\x09- IntChoice\n\x09 *\x09- MultiParm\n\x09 *\x09- Toggle\n\x09 *\x09- Folder (set the folder as currently shown)\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to set the value at. Defaults to 0.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of a int32 parameter.\nSupported parameter types:\n     - Int\n     - IntChoice\n     - MultiParm\n     - Toggle\n     - Folder (set the folder as currently shown)\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param InAtIndex The index of the parameter in the parameter tuple to set the value at. Defaults to 0.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetIntParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBakeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms, InIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms, InIdentifier), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier_MetaData)) }; // 581329292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InBakeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InBakeName = { "InBakeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms, InBakeName), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InBakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InBakeName_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_InBakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Sets the output's fallback BakeName (as configured on the output details panel) for the output at InIndex\n\x09 * identified by InIdentifier.\n\x09 * @param InIndex The output index of the output object to set fallback BakeName for.\n\x09 * @param InIdentifier The output identifier of the output object to set fallback BakeName for.\n\x09 * @param InBakeName The fallback BakeName to set for the output object identified by InIndex and InIdentifier. \n\x09 * @return false if the index/identifier is invalid or if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Sets the output's fallback BakeName (as configured on the output details panel) for the output at InIndex\nidentified by InIdentifier.\n@param InIndex The output index of the output object to set fallback BakeName for.\n@param InIdentifier The output identifier of the output object to set fallback BakeName for.\n@param InBakeName The fallback BakeName to set for the output object identified by InIndex and InIdentifier.\n@return false if the index/identifier is invalid or if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetOutputBakeNameFallbackAt", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParameterTuples_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTuples_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterTuples_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InParameterTuples;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_ValueProp = { "InParameterTuples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniParameterTuple, METADATA_PARAMS(nullptr, 0) }; // 2197323035
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_Key_KeyProp = { "InParameterTuples_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples = { "InParameterTuples", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms, InParameterTuples), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_MetaData)) }; // 2197323035
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_InParameterTuples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Sets all parameter tuple values (matched by name and compatible type) from InParameterTuples on this\n\x09 * instantiated asset.\n\x09 * @param InParameterTuples The parameter tuples to set.\n\x09 * @return false if any entry in InParameterTuples could not be found on the asset or had an incompatible type/size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Sets all parameter tuple values (matched by name and compatible type) from InParameterTuples on this\ninstantiated asset.\n@param InParameterTuples The parameter tuples to set.\n@return false if any entry in InParameterTuples could not be found on the asset or had an incompatible type/size." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetParameterTuples", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAutoBakeEnabled_MetaData[];
#endif
		static void NewProp_bInAutoBakeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoBakeEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms*)Obj)->bInAutoBakeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled = { "bInAutoBakeEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_bInAutoBakeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set whether to automatically bake PDG work items after a successfully loading them.\n\x09 * @param bInAutoBakeEnabled If true, automatically bake work items after successfully loading them.\n\x09 * @return false if the asset/wrapper is invalid, or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set whether to automatically bake PDG work items after a successfully loading them.\n@param bInAutoBakeEnabled If true, automatically bake work items after successfully loading them.\n@return false if the asset/wrapper is invalid, or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetPDGAutoBakeEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod = { "InBakeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms, InBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod_MetaData)) }; // 3229896027
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_InBakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Sets the bake method to use for PDG baking (to actor, blueprint, foliage).\n\x09 * @param InBakeMethod The new bake method to set.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Sets the bake method to use for PDG baking (to actor, blueprint, foliage).\n@param InBakeMethod The new bake method to set.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetPDGBakeMethod", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeSelection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection = { "InBakeSelection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms, InBakeSelection), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection_MetaData)) }; // 2253993420
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_InBakeSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set which outputs to bake for PDG, for example, all, selected network, selected node\n\x09 * @param InBakeSelection The new bake selection.\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set which outputs to bake for PDG, for example, all, selected network, selected node\n@param InBakeSelection The new bake selection.\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetPDGBakeSelection", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakingReplacementMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakingReplacementMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakingReplacementMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode = { "InBakingReplacementMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms, InBakingReplacementMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode_MetaData)) }; // 2347698961
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_InBakingReplacementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the replacement mode to use for PDG baking (replace previous bake output vs increment)\n\x09 * @param InBakingReplacementMode The new replacement mode to set.\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the replacement mode to use for PDG baking (replace previous bake output vs increment)\n@param InBakingReplacementMode The new replacement mode to set.\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetPDGBakingReplacementMode", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms*)Obj)->bInRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Setter for the bRecenterBakedActors property, that determines if baked actors are recentered to their bounding\n\x09 * box center after a PDG bake, on the PDG asset link.\n\x09 * @param bInRecenterBakedActors If true, recenter baked actors to their bounding box center after bake (PDG)\n\x09 * @return false if the asset/wrapper is invalid or does not contain a TOP network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Setter for the bRecenterBakedActors property, that determines if baked actors are recentered to their bounding\nbox center after a PDG bake, on the PDG asset link.\n@param bInRecenterBakedActors If true, recenter baked actors to their bounding box center after bake (PDG)\n@return false if the asset/wrapper is invalid or does not contain a TOP network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetPDGRecenterBakedActors", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InNumPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InNumPoints = { "InNumPoints", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms, InNumPoints), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InNumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InNumPoints_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_InNumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Sets the number of points of the specified ramp parameter. This will insert or remove points from the end\n\x09 * as necessary.\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InNumPoints The new number of points to set. Must be >= 1.\n\x09 * @return true if the parameter was found and the number of points set, or if the number of points was already InNumPoints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Sets the number of points of the specified ramp parameter. This will insert or remove points from the end\nas necessary.\n@param InParameterTupleName The name of the parameter tuple.\n@param InNumPoints The new number of points to set. Must be >= 1.\n@return true if the parameter was found and the number of points set, or if the number of points was already InNumPoints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetRampParameterNumPoints", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms*)Obj)->bInRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_bInRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the bRecenterBakedActors property that controls if baked actors are recentered around their bounding box center.\n\x09 * @param bInRecenterBakedActors If true, recenter baked actors to their bounding box center after bake.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the bRecenterBakedActors property that controls if baked actors are recentered around their bounding box center.\n@param bInRecenterBakedActors If true, recenter baked actors to their bounding box center after bake.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetRecenterBakedActors", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRemoveOutputAfterBake_MetaData[];
#endif
		static void NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRemoveOutputAfterBake;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms*)Obj)->bInRemoveOutputAfterBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake = { "bInRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_bInRemoveOutputAfterBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the bRemoveOutputAfterBake property, that controls if temporary outputs are removed after a successful bake.\n\x09 * @param bInRemoveOutputAfterBake If true, then after a successful bake, the HACs outputs will be cleared and\n\x09 * removed.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the bRemoveOutputAfterBake property, that controls if temporary outputs are removed after a successful bake.\n@param bInRemoveOutputAfterBake If true, then after a successful bake, the HACs outputs will be cleared and\nremoved.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetRemoveOutputAfterBake", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInReplacePreviousBake_MetaData[];
#endif
		static void NewProp_bInReplacePreviousBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplacePreviousBake;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms*)Obj)->bInReplacePreviousBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake = { "bInReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_bInReplacePreviousBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the bReplacePreviousBake property, if true, replace the previously baked output (if any) instead of creating\n\x09 * new objects.\n\x09 * @param bInReplacePreviousBake If true, replace the previously baked output (if any) instead of creating new\n\x09 * objects.\n\x09 * @return false if the asset/wrapper is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the bReplacePreviousBake property, if true, replace the previously baked output (if any) instead of creating\nnew objects.\n@param bInReplacePreviousBake If true, replace the previously baked output (if any) instead of creating new\nobjects.\n@return false if the asset/wrapper is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetReplacePreviousBake", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterTupleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAtIndex;
		static void NewProp_bInMarkChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInMarkChanged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InParameterTupleName = { "InParameterTupleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms, InParameterTupleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InAtIndex = { "InAtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms, InAtIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_bInMarkChanged_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms*)Obj)->bInMarkChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_bInMarkChanged = { "bInMarkChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_bInMarkChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InParameterTupleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_InAtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_bInMarkChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the value of a String parameter.\n\x09 * Supported parameter types:\n\x09 * \x09- String\n\x09 * \x09- StringChoice\n\x09 * \x09- StringAssetRef\n\x09 * \x09- File\n\x09 * \x09- FileDir\n\x09 * \x09- FileGeo\n\x09 * \x09- FileImage\n\x09 * @param InParameterTupleName The name of the parameter tuple.\n\x09 * @param InValue The value to set.\n\x09 * @param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n\x09 * @param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\n\x09 * next cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n\x09 * @return true if the value was set or the parameter already had the given value.\n\x09 */" },
		{ "CPP_Default_bInMarkChanged", "true" },
		{ "CPP_Default_InAtIndex", "0" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the value of a String parameter.\nSupported parameter types:\n     - String\n     - StringChoice\n     - StringAssetRef\n     - File\n     - FileDir\n     - FileGeo\n     - FileImage\n@param InParameterTupleName The name of the parameter tuple.\n@param InValue The value to set.\n@param InAtIndex The index of the parameter in the parameter tuple to set the value at.\n@param bInMarkChanged If true, the parameter is marked as changed and will be uploaded to Houdini before the\nnext cook. If auto-cook triggers are enabled, this will also trigger a auto-cook. Defaults to true.\n@return true if the value was set or the parameter already had the given value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetStringParameterValue", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_InDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_InDirectoryPath = { "InDirectoryPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms, InDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_InDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_InDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_InDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Set the Temp Folder fallback as configured on asset details panel. Returns true if the value was changed.\n\x09 * @param InDirectoryPath The new temp folder fallback to set.\n\x09 * @return true if the wrapper is valid and the value was set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Set the Temp Folder fallback as configured on asset details panel. Returns true if the value was changed.\n@param InDirectoryPath The new temp folder fallback to set.\n@return true if the wrapper is valid and the value was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "SetTemporaryCookFolder", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InButtonParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_InButtonParameterName = { "InButtonParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms, InButtonParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_InButtonParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Trigger / click the specified button parameter.\n\x09 * @return True if the button was found and triggered/clicked, or was already marked to be triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Trigger / click the specified button parameter.\n@return True if the button was found and triggered/clicked, or was already marked to be triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "TriggerButtonParameter", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHoudiniAssetObjectToWrap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_InHoudiniAssetObjectToWrap = { "InHoudiniAssetObjectToWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms, InHoudiniAssetObjectToWrap), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_InHoudiniAssetObjectToWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Wrap the specified instantiated houdini asset object. Supported objects are: AHoudiniAssetActor,\n\x09 * UHoudiniAssetComponent. This will first unwrap/unbind the currently wrapped instantiated\n\x09 * asset if InHoudiniAssetObjectToWrap is valid and of a supported class.\n\x09 *\n\x09 * If InHoudiniAssetObjectToWrap is nullptr, then this wrapper will unwrap/unbind the currently wrapped\n\x09 * instantiated asset and return true.\n\x09 * \n\x09 * @param InHoudiniAssetObjectToWrap The object to wrap, or nullptr to unwrap/unbind if currently wrapping an\n\x09 * asset.\n\x09 * @return true if InHoudiniAssetObjectToWrap is valid, of a supported class and was successfully wrapped, or true\n\x09 * if InHoudiniAssetObjectToWrap is nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Wrap the specified instantiated houdini asset object. Supported objects are: AHoudiniAssetActor,\nUHoudiniAssetComponent. This will first unwrap/unbind the currently wrapped instantiated\nasset if InHoudiniAssetObjectToWrap is valid and of a supported class.\n\nIf InHoudiniAssetObjectToWrap is nullptr, then this wrapper will unwrap/unbind the currently wrapped\ninstantiated asset and return true.\n\n@param InHoudiniAssetObjectToWrap The object to wrap, or nullptr to unwrap/unbind if currently wrapping an\nasset.\n@return true if InHoudiniAssetObjectToWrap is valid, of a supported class and was successfully wrapped, or true\nif InHoudiniAssetObjectToWrap is nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, nullptr, "WrapHoudiniAssetObject", nullptr, nullptr, sizeof(HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms), Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIAssetWrapper);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister()
	{
		return UHoudiniPublicAPIAssetWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HoudiniAssetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHoudiniAssetActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CachedHoudiniAssetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHoudiniAssetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CachedHoudiniAssetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreInstantiationDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreInstantiationDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostInstantiationDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostInstantiationDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostCookDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostCookDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreProcessStateExitedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreProcessStateExitedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostProcessingDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostProcessingDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostBakeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostBakeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostPDGTOPNetworkCookDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostPDGTOPNetworkCookDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostPDGBakeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostPDGBakeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProxyMeshesRefinedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProxyMeshesRefinedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssetLinkSetupAttemptComplete_MetaData[];
#endif
		static void NewProp_bAssetLinkSetupAttemptComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetLinkSetupAttemptComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputs, "BakeAllOutputs" }, // 2685411728
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeAllOutputsWithSettings, "BakeAllOutputsWithSettings" }, // 3343148903
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BakeOutputObjectAt, "BakeOutputObjectAt" }, // 766467554
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_BindToPDGAssetLink, "BindToPDGAssetLink" }, // 1920732782
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CanWrapHoudiniObject, "CanWrapHoudiniObject" }, // 3827719584
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_ClearHoudiniAssetObject, "ClearHoudiniAssetObject" }, // 3299049122
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyInput, "CreateEmptyInput" }, // 2566076424
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateEmptyWrapper, "CreateEmptyWrapper" }, // 629045898
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_CreateWrapper, "CreateWrapper" }, // 4079451283
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_DeleteInstantiatedAsset, "DeleteInstantiatedAsset" }, // 4174958986
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetAssetRefParameterValue, "GetAssetRefParameterValue" }, // 1440064746
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeFolder, "GetBakeFolder" }, // 3833819704
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBakeMethod, "GetBakeMethod" }, // 913000229
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetBoolParameterValue, "GetBoolParameterValue" }, // 3245056069
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorParameterValue, "GetColorParameterValue" }, // 2367032606
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPoints, "GetColorRampParameterPoints" }, // 2446307749
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetColorRampParameterPointValue, "GetColorRampParameterPointValue" }, // 3661664615
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatParameterValue, "GetFloatParameterValue" }, // 3959494713
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPoints, "GetFloatRampParameterPoints" }, // 1040018858
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetFloatRampParameterPointValue, "GetFloatRampParameterPointValue" }, // 1944309954
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetActor, "GetHoudiniAssetActor" }, // 2176185375
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetComponent, "GetHoudiniAssetComponent" }, // 2519452507
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetHoudiniAssetObject, "GetHoudiniAssetObject" }, // 2255580734
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputAtIndex, "GetInputAtIndex" }, // 2720551034
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameter, "GetInputParameter" }, // 1881856501
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputParameters, "GetInputParameters" }, // 2965339593
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetInputsAtIndices, "GetInputsAtIndices" }, // 1753386870
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetIntParameterValue, "GetIntParameterValue" }, // 4036135069
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumNodeInputs, "GetNumNodeInputs" }, // 3101198215
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetNumOutputs, "GetNumOutputs" }, // 3468107293
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputBakeNameFallbackAt, "GetOutputBakeNameFallbackAt" }, // 72352336
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputComponentAt, "GetOutputComponentAt" }, // 3220229676
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputIdentifiersAt, "GetOutputIdentifiersAt" }, // 3993942461
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputObjectAt, "GetOutputObjectAt" }, // 545125349
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetOutputTypeAt, "GetOutputTypeAt" }, // 4011014972
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetParameterTuples, "GetParameterTuples" }, // 1174085250
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeMethod, "GetPDGBakeMethod" }, // 2135905824
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakeSelection, "GetPDGBakeSelection" }, // 3163727976
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGBakingReplacementMode, "GetPDGBakingReplacementMode" }, // 3487470662
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGRecenterBakedActors, "GetPDGRecenterBakedActors" }, // 3656927917
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNetworkPaths, "GetPDGTOPNetworkPaths" }, // 1165002738
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetPDGTOPNodePaths, "GetPDGTOPNodePaths" }, // 2362396135
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRampParameterNumPoints, "GetRampParameterNumPoints" }, // 2500188524
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRecenterBakedActors, "GetRecenterBakedActors" }, // 1769487323
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetRemoveOutputAfterBake, "GetRemoveOutputAfterBake" }, // 1212084131
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetReplacePreviousBake, "GetReplacePreviousBake" }, // 52457581
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetStringParameterValue, "GetStringParameterValue" }, // 1584465481
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_GetTemporaryCookFolder, "GetTemporaryCookFolder" }, // 1828548133
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostBake, "HandleOnHoudiniAssetComponentPostBake" }, // 901529569
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentPostCook, "HandleOnHoudiniAssetComponentPostCook" }, // 2554246694
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniAssetComponentStateChange, "HandleOnHoudiniAssetComponentStateChange" }, // 1714388812
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkPostBake, "HandleOnHoudiniPDGAssetLinkPostBake" }, // 624617868
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniPDGAssetLinkTOPNetPostCook, "HandleOnHoudiniPDGAssetLinkTOPNetPostCook" }, // 90008748
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HandleOnHoudiniProxyMeshesRefinedGlobal, "HandleOnHoudiniProxyMeshesRefinedGlobal" }, // 868948152
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutput, "HasAnyCurrentProxyOutput" }, // 2897029960
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasAnyCurrentProxyOutputAt, "HasAnyCurrentProxyOutputAt" }, // 4120859736
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_HasPDGAssetLink, "HasPDGAssetLink" }, // 1128479851
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoBakeEnabled, "IsAutoBakeEnabled" }, // 3405231712
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsAutoCookingEnabled, "IsAutoCookingEnabled" }, // 2538767973
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsOutputCurrentProxyAt, "IsOutputCurrentProxyAt" }, // 4263217535
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_IsPDGAutoBakeEnabled, "IsPDGAutoBakeEnabled" }, // 578023953
		{ &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature, "OnHoudiniAssetPostBake__DelegateSignature" }, // 1381085634
		{ &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature, "OnHoudiniAssetPostCook__DelegateSignature" }, // 3601855948
		{ &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature, "OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature" }, // 591258547
		{ &Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature, "OnHoudiniAssetStateChange__DelegateSignature" }, // 3120442377
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputs, "PDGBakeAllOutputs" }, // 2474074891
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGBakeAllOutputsWithSettings, "PDGBakeAllOutputsWithSettings" }, // 1395973143
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookNode, "PDGCookNode" }, // 3328385261
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGCookOutputsForNetwork, "PDGCookOutputsForNetwork" }, // 1641761345
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyAllNetworks, "PDGDirtyAllNetworks" }, // 3741208065
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNetwork, "PDGDirtyNetwork" }, // 150006104
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_PDGDirtyNode, "PDGDirtyNode" }, // 998986740
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Rebuild, "Rebuild" }, // 1164402345
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_Recook, "Recook" }, // 518157650
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_RefineAllCurrentProxyOutputs, "RefineAllCurrentProxyOutputs" }, // 1713813217
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAssetRefParameterValue, "SetAssetRefParameterValue" }, // 637061934
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoBakeEnabled, "SetAutoBakeEnabled" }, // 4133621287
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetAutoCookingEnabled, "SetAutoCookingEnabled" }, // 2120679348
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeFolder, "SetBakeFolder" }, // 1452869692
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBakeMethod, "SetBakeMethod" }, // 1182422857
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetBoolParameterValue, "SetBoolParameterValue" }, // 409151153
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorParameterValue, "SetColorParameterValue" }, // 1835150670
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPoints, "SetColorRampParameterPoints" }, // 448251735
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetColorRampParameterPointValue, "SetColorRampParameterPointValue" }, // 2543946329
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatParameterValue, "SetFloatParameterValue" }, // 3437723245
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPoints, "SetFloatRampParameterPoints" }, // 3055138150
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetFloatRampParameterPointValue, "SetFloatRampParameterPointValue" }, // 3706255130
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputAtIndex, "SetInputAtIndex" }, // 2702601033
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameter, "SetInputParameter" }, // 3445572437
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputParameters, "SetInputParameters" }, // 1130279067
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetInputsAtIndices, "SetInputsAtIndices" }, // 1278285735
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetIntParameterValue, "SetIntParameterValue" }, // 313498980
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetOutputBakeNameFallbackAt, "SetOutputBakeNameFallbackAt" }, // 2582093252
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetParameterTuples, "SetParameterTuples" }, // 2490134167
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGAutoBakeEnabled, "SetPDGAutoBakeEnabled" }, // 1371339197
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeMethod, "SetPDGBakeMethod" }, // 1216151316
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakeSelection, "SetPDGBakeSelection" }, // 3301107030
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGBakingReplacementMode, "SetPDGBakingReplacementMode" }, // 1851901949
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetPDGRecenterBakedActors, "SetPDGRecenterBakedActors" }, // 753703136
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRampParameterNumPoints, "SetRampParameterNumPoints" }, // 145804994
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRecenterBakedActors, "SetRecenterBakedActors" }, // 398761194
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetRemoveOutputAfterBake, "SetRemoveOutputAfterBake" }, // 1483562395
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetReplacePreviousBake, "SetReplacePreviousBake" }, // 551671276
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetStringParameterValue, "SetStringParameterValue" }, // 3756081693
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_SetTemporaryCookFolder, "SetTemporaryCookFolder" }, // 536384755
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_TriggerButtonParameter, "TriggerButtonParameter" }, // 3126117658
		{ &Z_Construct_UFunction_UHoudiniPublicAPIAssetWrapper_WrapHoudiniAssetObject, "WrapHoudiniAssetObject" }, // 2060015689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine|Public API" },
		{ "Comment", "/**\n * A wrapper for spawned/instantiating HDAs.\n *\n * The wrapper/HDA should be instantiated via UHoudiniPublicAPI::InstantiateAsset(). Alternatively an empty\n * wrapper can be created via UHoudiniPublicAPIAssetWrapper::CreateEmptyWrapper() and an HDA later instantiated and\n * assigned to the wrapper via UHoudiniPublicAPI::InstantiateAssetWithExistingWrapper(). \n *\n * The wrapper provides functionality for interacting/manipulating a AHoudiniAssetActor / UHoudiniAssetComponent:\n *\x09\x09- Get/Set Inputs\n *\x09\x09- Get/Set Parameters\n *\x09\x09- Manually initiate a cook/recook\n *\x09\x09- Subscribe to delegates:\n *\x09\x09\x09- #OnPreInstantiationDelegate (good place to set parameter values before the first cook)\n *\x09\x09\x09- #OnPostInstantiationDelegate (good place to set/configure inputs before the first cook)\n *\x09\x09\x09- #OnPostCookDelegate\n *\x09\x09\x09- #OnPreProcessStateExitedDelegate\n *\x09\x09\x09- #OnPostProcessingDelegate (output objects are available if the cook was successful) \n *\x09\x09\x09- #OnPostBakeDelegate\n *\x09\x09\x09- #OnPostPDGTOPNetworkCookDelegate\n *\x09\x09\x09- #OnPostPDGBakeDelegate\n *\x09\x09\x09- #OnProxyMeshesRefinedDelegate\n *\x09\x09- Iterate over outputs and find the output assets\n *\x09\x09- Bake outputs\n *\x09\x09- PDG: Dirty all, cook outputs\n *\n * Important: In the current implementation of the plugin, nodes are cooked asynchronously. That means that cooking\n * (including rebuilding the HDA and auto-cooks triggered from, for example, parameter changes) does not happen\n * immediately. Functions in the API, such as Recook() and Rebuild(), do not block until the cook is complete, but\n * instead immediately return after arranging for the cook to take place. This means that if a cook is triggered\n * (either automatically, via parameter changes, or by calling Recook()) and there is a reliance on data that will only\n * be available after the cook (such as an updated parameter interface, or the output objects of the cook), one of the\n * delegates mentioned above (#OnPostProcessingDelegate or #OnPostCookDelegate, for example) would have to be used to\n * execute the dependent code after the cook.\n */" },
		{ "IncludePath", "HoudiniPublicAPIAssetWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "A wrapper for spawned/instantiating HDAs.\n\nThe wrapper/HDA should be instantiated via UHoudiniPublicAPI::InstantiateAsset(). Alternatively an empty\nwrapper can be created via UHoudiniPublicAPIAssetWrapper::CreateEmptyWrapper() and an HDA later instantiated and\nassigned to the wrapper via UHoudiniPublicAPI::InstantiateAssetWithExistingWrapper().\n\nThe wrapper provides functionality for interacting/manipulating a AHoudiniAssetActor / UHoudiniAssetComponent:\n            - Get/Set Inputs\n            - Get/Set Parameters\n            - Manually initiate a cook/recook\n            - Subscribe to delegates:\n                    - #OnPreInstantiationDelegate (good place to set parameter values before the first cook)\n                    - #OnPostInstantiationDelegate (good place to set/configure inputs before the first cook)\n                    - #OnPostCookDelegate\n                    - #OnPreProcessStateExitedDelegate\n                    - #OnPostProcessingDelegate (output objects are available if the cook was successful)\n                    - #OnPostBakeDelegate\n                    - #OnPostPDGTOPNetworkCookDelegate\n                    - #OnPostPDGBakeDelegate\n                    - #OnProxyMeshesRefinedDelegate\n            - Iterate over outputs and find the output assets\n            - Bake outputs\n            - PDG: Dirty all, cook outputs\n\nImportant: In the current implementation of the plugin, nodes are cooked asynchronously. That means that cooking\n(including rebuilding the HDA and auto-cooks triggered from, for example, parameter changes) does not happen\nimmediately. Functions in the API, such as Recook() and Rebuild(), do not block until the cook is complete, but\ninstead immediately return after arranging for the cook to take place. This means that if a cook is triggered\n(either automatically, via parameter changes, or by calling Recook()) and there is a reliance on data that will only\nbe available after the cook (such as an updated parameter interface, or the output objects of the cook), one of the\ndelegates mentioned above (#OnPostProcessingDelegate or #OnPostCookDelegate, for example) would have to be used to\nexecute the dependent code after the cook." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_HoudiniAssetObject_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** The wrapped Houdini Asset object (not the uasset, an AHoudiniAssetActor or UHoudiniAssetComponent). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The wrapped Houdini Asset object (not the uasset, an AHoudiniAssetActor or UHoudiniAssetComponent)." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_HoudiniAssetObject = { "HoudiniAssetObject", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, HoudiniAssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_HoudiniAssetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_HoudiniAssetObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetActor_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** The wrapped AHoudiniAssetActor (derived from HoudiniAssetObject when calling WrapHoudiniAssetObject()). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The wrapped AHoudiniAssetActor (derived from HoudiniAssetObject when calling WrapHoudiniAssetObject())." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetActor = { "CachedHoudiniAssetActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, CachedHoudiniAssetActor), Z_Construct_UClass_AHoudiniAssetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetComponent_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** The wrapped UHoudiniAssetComponent (derived from HoudiniAssetObject when calling WrapHoudiniAssetObject()). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "The wrapped UHoudiniAssetComponent (derived from HoudiniAssetObject when calling WrapHoudiniAssetObject())." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetComponent = { "CachedHoudiniAssetComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, CachedHoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreInstantiationDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast when entering the PreInstantiation state: the HDA's default parameter definitions are\n\x09 * available, but the node has not yet been instantiated in HAPI/Houdini Engine. Parameters can be set at this point.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast when entering the PreInstantiation state: the HDA's default parameter definitions are\navailable, but the node has not yet been instantiated in HAPI/Houdini Engine. Parameters can be set at this point." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreInstantiationDelegate = { "OnPreInstantiationDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPreInstantiationDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreInstantiationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreInstantiationDelegate_MetaData)) }; // 3120442377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostInstantiationDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after the asset was successfully instantiated. This is a good place to set/configure\n\x09 * inputs before the first cook.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after the asset was successfully instantiated. This is a good place to set/configure\ninputs before the first cook." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostInstantiationDelegate = { "OnPostInstantiationDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostInstantiationDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostInstantiationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostInstantiationDelegate_MetaData)) }; // 3120442377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostCookDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Delegate that is broadcast after a cook completes. Output objects/assets have not yet been created/updated. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after a cook completes. Output objects/assets have not yet been created/updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostCookDelegate = { "OnPostCookDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostCookDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostCookDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostCookDelegate_MetaData)) }; // 3601855948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreProcessStateExitedDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Delegate that is broadcast when PreProcess is exited. Output objects/assets have not yet been created/updated. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast when PreProcess is exited. Output objects/assets have not yet been created/updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreProcessStateExitedDelegate = { "OnPreProcessStateExitedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPreProcessStateExitedDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreProcessStateExitedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreProcessStateExitedDelegate_MetaData)) }; // 3120442377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostProcessingDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast when the Processing state is exited and the None state is entered. Output objects\n\x09 * assets have been created/updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast when the Processing state is exited and the None state is entered. Output objects\nassets have been created/updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostProcessingDelegate = { "OnPostProcessingDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostProcessingDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostProcessingDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostProcessingDelegate_MetaData)) }; // 3120442377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostBakeDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after baking the asset (not called for individual outputs that are baked to the\n\x09 * content browser).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after baking the asset (not called for individual outputs that are baked to the\ncontent browser)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostBakeDelegate = { "OnPostBakeDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostBakeDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostBakeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostBakeDelegate_MetaData)) }; // 1381085634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGTOPNetworkCookDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after a cook of a TOP network completes. Work item results have not necessarily yet\n\x09 * been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after a cook of a TOP network completes. Work item results have not necessarily yet\nbeen loaded." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGTOPNetworkCookDelegate = { "OnPostPDGTOPNetworkCookDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostPDGTOPNetworkCookDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGTOPNetworkCookDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGTOPNetworkCookDelegate_MetaData)) }; // 3601855948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGBakeDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after baking PDG outputs (not called for individual outputs that are baked to the\n\x09 * content browser).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after baking PDG outputs (not called for individual outputs that are baked to the\ncontent browser)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGBakeDelegate = { "OnPostPDGBakeDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostPDGBakeDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGBakeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGBakeDelegate_MetaData)) }; // 1381085634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnProxyMeshesRefinedDelegate_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Delegate that is broadcast after refining all proxy meshes for this wrapped asset. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "Delegate that is broadcast after refining all proxy meshes for this wrapped asset." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnProxyMeshesRefinedDelegate = { "OnProxyMeshesRefinedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnProxyMeshesRefinedDelegate), Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnProxyMeshesRefinedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnProxyMeshesRefinedDelegate_MetaData)) }; // 591258547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete_MetaData[] = {
		{ "Comment", "/**\n\x09 * This starts as false and is set to true in HandleOnHoudiniAssetComponentStateChange during post instantiation,\n\x09 * once we have checked for a PDG asset link and configured the bindings if there is one.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIAssetWrapper.h" },
		{ "ToolTip", "This starts as false and is set to true in HandleOnHoudiniAssetComponentStateChange during post instantiation,\nonce we have checked for a PDG asset link and configured the bindings if there is one." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIAssetWrapper*)Obj)->bAssetLinkSetupAttemptComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete = { "bAssetLinkSetupAttemptComplete", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIAssetWrapper), &Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_HoudiniAssetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_CachedHoudiniAssetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreInstantiationDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostInstantiationDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostCookDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPreProcessStateExitedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostProcessingDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostBakeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGTOPNetworkCookDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnPostPDGBakeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_OnProxyMeshesRefinedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::NewProp_bAssetLinkSetupAttemptComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIAssetWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::ClassParams = {
		&UHoudiniPublicAPIAssetWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIAssetWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIAssetWrapper.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIAssetWrapper.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIAssetWrapper>()
	{
		return UHoudiniPublicAPIAssetWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIAssetWrapper);
	UHoudiniPublicAPIAssetWrapper::~UHoudiniPublicAPIAssetWrapper() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPublicAPIRampPoint::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics::NewStructOps, TEXT("HoudiniPublicAPIRampPoint"), &Z_Registration_Info_UScriptStruct_HoudiniPublicAPIRampPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPublicAPIRampPoint), 4271709637U) },
		{ FHoudiniPublicAPIFloatRampPoint::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics::NewStructOps, TEXT("HoudiniPublicAPIFloatRampPoint"), &Z_Registration_Info_UScriptStruct_HoudiniPublicAPIFloatRampPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPublicAPIFloatRampPoint), 1232449735U) },
		{ FHoudiniPublicAPIColorRampPoint::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics::NewStructOps, TEXT("HoudiniPublicAPIColorRampPoint"), &Z_Registration_Info_UScriptStruct_HoudiniPublicAPIColorRampPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPublicAPIColorRampPoint), 823807857U) },
		{ FHoudiniParameterTuple::StaticStruct, Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics::NewStructOps, TEXT("HoudiniParameterTuple"), &Z_Registration_Info_UScriptStruct_HoudiniParameterTuple, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniParameterTuple), 2197323035U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper, UHoudiniPublicAPIAssetWrapper::StaticClass, TEXT("UHoudiniPublicAPIAssetWrapper"), &Z_Registration_Info_UClass_UHoudiniPublicAPIAssetWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIAssetWrapper), 2309408622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_1888934352(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
