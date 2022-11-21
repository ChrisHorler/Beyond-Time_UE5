// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterInt() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterInt::StaticRegisterNativesUHoudiniParameterInt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterInt);
	UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister()
	{
		return UHoudiniParameterInt::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMin_MetaData[];
#endif
		static void NewProp_bHasMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMax_MetaData[];
#endif
		static void NewProp_bHasMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMin_MetaData[];
#endif
		static void NewProp_bHasUIMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUIMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMax_MetaData[];
#endif
		static void NewProp_bHasUIMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUIMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLogarithmic_MetaData[];
#endif
		static void NewProp_bIsLogarithmic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLogarithmic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterInt.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "// Int Values\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Int Values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData[] = {
		{ "Comment", "// Unit for this property\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Unit for this property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, Unit), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData[] = {
		{ "Comment", "// Indicates we have a min/max value\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Indicates we have a min/max value" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin = { "bHasMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax = { "bHasMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData[] = {
		{ "Comment", "// Indicates we have a UI min/max\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Indicates we have a UI min/max" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasUIMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin = { "bHasUIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bHasUIMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax = { "bHasUIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit(void* Obj)
	{
		((UHoudiniParameterInt*)Obj)->bIsLogarithmic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic = { "bIsLogarithmic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData[] = {
		{ "Comment", "// Min and Max values for this property.\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Min and Max values for this property." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, Min), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, Max), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData[] = {
		{ "Comment", "// Min and Max values of this property for slider UI\n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
		{ "ToolTip", "Min and Max values of this property for slider UI" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, UIMin), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniParameterInt, UIMax), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterInt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams = {
		&UHoudiniParameterInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterInt()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton, Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterInt>()
	{
		return UHoudiniParameterInt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterInt);
	UHoudiniParameterInt::~UHoudiniParameterInt() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterInt, UHoudiniParameterInt::StaticClass, TEXT("UHoudiniParameterInt"), &Z_Registration_Info_UClass_UHoudiniParameterInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterInt), 3668009719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_2002495243(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
