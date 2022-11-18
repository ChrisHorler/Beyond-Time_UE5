// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIBlueprintLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPI_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniPublicAPIBlueprintLib::execGetAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPI**)Z_Param__Result=UHoudiniPublicAPIBlueprintLib::GetAPI();
		P_NATIVE_END;
	}
	void UHoudiniPublicAPIBlueprintLib::StaticRegisterNativesUHoudiniPublicAPIBlueprintLib()
	{
		UClass* Class = UHoudiniPublicAPIBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAPI", &UHoudiniPublicAPIBlueprintLib::execGetAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics
	{
		struct HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms
		{
			UHoudiniPublicAPI* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine" },
		{ "Comment", "/** Returns the Houdini Public API instance. */" },
		{ "DisplayName", "GetHoudiniEnginePublicAPI" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
		{ "ToolTip", "Returns the Houdini Public API instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms), Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIBlueprintLib);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister()
	{
		return UHoudiniPublicAPIBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI, "GetAPI" }, // 3416404670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Category", "Houdini Engine|Public API" },
		{ "Comment", "/**\n * Houdini Public API Blueprint function library\n */" },
		{ "IncludePath", "HoudiniPublicAPIBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
		{ "ToolTip", "Houdini Public API Blueprint function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIBlueprintLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams = {
		&UHoudiniPublicAPIBlueprintLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIBlueprintLib>()
	{
		return UHoudiniPublicAPIBlueprintLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIBlueprintLib);
	UHoudiniPublicAPIBlueprintLib::~UHoudiniPublicAPIBlueprintLib() {}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, UHoudiniPublicAPIBlueprintLib::StaticClass, TEXT("UHoudiniPublicAPIBlueprintLib"), &Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIBlueprintLib), 3523316718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_2163038607(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
