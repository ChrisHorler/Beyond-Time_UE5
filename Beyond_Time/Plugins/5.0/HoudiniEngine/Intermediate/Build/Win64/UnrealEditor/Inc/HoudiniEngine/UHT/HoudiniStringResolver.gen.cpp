// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniStringResolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStringResolver() {}
// Cross Module References
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniStringResolver;
class UScriptStruct* FHoudiniStringResolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStringResolver, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniStringResolver"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniStringResolver>()
{
	return FHoudiniStringResolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStringResolver>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniStringResolver",
		sizeof(FHoudiniStringResolver),
		alignof(FHoudiniStringResolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniAttributeResolver>() == std::is_polymorphic<FHoudiniStringResolver>(), "USTRUCT FHoudiniAttributeResolver cannot be polymorphic unless super FHoudiniStringResolver is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver;
class UScriptStruct* FHoudiniAttributeResolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAttributeResolver, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniAttributeResolver"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniAttributeResolver>()
{
	return FHoudiniAttributeResolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAttributeResolver>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniStringResolver,
		&NewStructOps,
		"HoudiniAttributeResolver",
		sizeof(FHoudiniAttributeResolver),
		alignof(FHoudiniAttributeResolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniStringResolver::StaticStruct, Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::NewStructOps, TEXT("HoudiniStringResolver"), &Z_Registration_Info_UScriptStruct_HoudiniStringResolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniStringResolver), 570285791U) },
		{ FHoudiniAttributeResolver::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::NewStructOps, TEXT("HoudiniAttributeResolver"), &Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAttributeResolver), 126447041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_1639681956(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
