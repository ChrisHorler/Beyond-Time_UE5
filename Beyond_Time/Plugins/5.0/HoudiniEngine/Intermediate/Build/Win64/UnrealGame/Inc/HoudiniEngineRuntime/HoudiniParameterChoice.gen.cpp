// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterChoice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterChoice() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterChoice::StaticRegisterNativesUHoudiniParameterChoice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterChoice);
	UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister()
	{
		return UHoudiniParameterChoice::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultIntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultStringValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringChoiceValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringChoiceValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChoiceValues;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringChoiceLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringChoiceLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChoiceLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfRamp_MetaData[];
#endif
		static void NewProp_bIsChildOfRamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfRamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValuesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValuesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntValuesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterChoice.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData[] = {
		{ "Comment", "// Current int value for this property.\n// More of an index to IntValuesArray\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Current int value for this property.\nMore of an index to IntValuesArray" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData[] = {
		{ "Comment", "// Default int value for this property, assigned at creating the parameter.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Default int value for this property, assigned at creating the parameter." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue = { "DefaultIntValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultIntValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData[] = {
		{ "Comment", "// Current string value for this property\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Current string value for this property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData[] = {
		{ "Comment", "// Default string value for this property, assigned at creating the parameter.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Default string value for this property, assigned at creating the parameter." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue = { "DefaultStringValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, DefaultStringValue), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData[] = {
		{ "Comment", "// Used only for StringChoices!\n// All the possible string values for this parameter's choices\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Used only for StringChoices!\nAll the possible string values for this parameter's choices" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues = { "StringChoiceValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData[] = {
		{ "Comment", "// Labels corresponding to this parameter's choices.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "Labels corresponding to this parameter's choices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels = { "StringChoiceLabels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, StringChoiceLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterChoice*)Obj)->bIsChildOfRamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp = { "bIsChildOfRamp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterChoice), &Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner = { "IntValuesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData[] = {
		{ "Comment", "// An array containing the values of all choices\n// IntValues[i] should be i unless UseMenuItemTokenAsValue is enabled.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterChoice.h" },
		{ "ToolTip", "An array containing the values of all choices\nIntValues[i] should be i unless UseMenuItemTokenAsValue is enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray = { "IntValuesArray", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterChoice, IntValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultIntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_DefaultStringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_StringChoiceLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_bIsChildOfRamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterChoice_Statics::NewProp_IntValuesArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterChoice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams = {
		&UHoudiniParameterChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterChoice()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton, Z_Construct_UClass_UHoudiniParameterChoice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterChoice.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterChoice>()
	{
		return UHoudiniParameterChoice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterChoice);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterChoice, UHoudiniParameterChoice::StaticClass, TEXT("UHoudiniParameterChoice"), &Z_Registration_Info_UClass_UHoudiniParameterChoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterChoice), 2800255321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_1609276158(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
