// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterColor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UHoudiniParameterColor::StaticRegisterNativesUHoudiniParameterColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterColor);
	UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister()
	{
		return UHoudiniParameterColor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfRamp_MetaData[];
#endif
		static void NewProp_bIsChildOfRamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfRamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterColor.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "// Color for this property.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterColor.h" },
		{ "ToolTip", "Color for this property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "Comment", "// Default color for this property\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterColor.h" },
		{ "ToolTip", "Default color for this property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterColor, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_DefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterColor.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterColor*)Obj)->bIsChildOfRamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp = { "bIsChildOfRamp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterColor), &Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_DefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterColor_Statics::NewProp_bIsChildOfRamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterColor_Statics::ClassParams = {
		&UHoudiniParameterColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterColor_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterColor()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterColor.OuterSingleton, Z_Construct_UClass_UHoudiniParameterColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterColor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterColor>()
	{
		return UHoudiniParameterColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterColor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterColor, UHoudiniParameterColor::StaticClass, TEXT("UHoudiniParameterColor"), &Z_Registration_Info_UClass_UHoudiniParameterColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterColor), 2703561429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_3884485803(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
