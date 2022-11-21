// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorSubsystem();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorSubsystem_NoRegister();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeSync();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniNodeSync;
class UScriptStruct* FHoudiniNodeSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniNodeSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniNodeSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniNodeSync, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniNodeSync"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniNodeSync.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniNodeSync>()
{
	return FHoudiniNodeSync::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FetchNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FetchNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDisplayFlag_MetaData[];
#endif
		static void NewProp_UseDisplayFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDisplayFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteSkeleton_MetaData[];
#endif
		static void NewProp_OverwriteSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonAssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniNodeSync>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_FetchNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_FetchNodePath = { "FetchNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniNodeSync, FetchNodePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_FetchNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_FetchNodePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SendNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SendNodePath = { "SendNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniNodeSync, SendNodePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SendNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SendNodePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealAssetName = { "UnrealAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniNodeSync, UnrealAssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealPathName = { "UnrealPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniNodeSync, UnrealPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag_SetBit(void* Obj)
	{
		((FHoudiniNodeSync*)Obj)->UseDisplayFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag = { "UseDisplayFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniNodeSync), &Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton_SetBit(void* Obj)
	{
		((FHoudiniNodeSync*)Obj)->OverwriteSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton = { "OverwriteSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniNodeSync), &Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SkeletonAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SkeletonAssetPath = { "SkeletonAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniNodeSync, SkeletonAssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SkeletonAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SkeletonAssetPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_FetchNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SendNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UnrealPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_UseDisplayFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_OverwriteSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewProp_SkeletonAssetPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniNodeSync",
		sizeof(FHoudiniNodeSync),
		alignof(FHoudiniNodeSync),
		Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeSync()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniNodeSync.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniNodeSync.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniNodeSync.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniEditorSubsystem::execDumpSessionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpSessionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorSubsystem::execFetch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fetch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorSubsystem::execSendToUnreal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackageName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackageFolder);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxInfluences);
		P_GET_UBOOL_REF(Z_Param_Out_ImportNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToUnreal(Z_Param_InPackageName,Z_Param_InPackageFolder,Z_Param_Out_MaxInfluences,Z_Param_Out_ImportNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorSubsystem::execSendToHoudini)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToHoudini(Z_Param_Out_SelectedAssets);
		P_NATIVE_END;
	}
	void UHoudiniEditorSubsystem::StaticRegisterNativesUHoudiniEditorSubsystem()
	{
		UClass* Class = UHoudiniEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DumpSessionInfo", &UHoudiniEditorSubsystem::execDumpSessionInfo },
			{ "Fetch", &UHoudiniEditorSubsystem::execFetch },
			{ "SendToHoudini", &UHoudiniEditorSubsystem::execSendToHoudini },
			{ "SendToUnreal", &UHoudiniEditorSubsystem::execSendToUnreal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorSubsystem, nullptr, "DumpSessionInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorSubsystem, nullptr, "Fetch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics
	{
		struct HoudiniEditorSubsystem_eventSendToHoudini_Parms
		{
			TArray<UObject*> SelectedAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniEditorSubsystem_eventSendToHoudini_Parms, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorSubsystem, nullptr, "SendToHoudini", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::HoudiniEditorSubsystem_eventSendToHoudini_Parms), Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics
	{
		struct HoudiniEditorSubsystem_eventSendToUnreal_Parms
		{
			FString InPackageName;
			FString InPackageFolder;
			int32 MaxInfluences;
			bool ImportNormals;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackageFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackageFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportNormals_MetaData[];
#endif
		static void NewProp_ImportNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniEditorSubsystem_eventSendToUnreal_Parms, InPackageName), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageFolder = { "InPackageFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniEditorSubsystem_eventSendToUnreal_Parms, InPackageFolder), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_MaxInfluences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_MaxInfluences = { "MaxInfluences", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniEditorSubsystem_eventSendToUnreal_Parms, MaxInfluences), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_MaxInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_MaxInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals_SetBit(void* Obj)
	{
		((HoudiniEditorSubsystem_eventSendToUnreal_Parms*)Obj)->ImportNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals = { "ImportNormals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniEditorSubsystem_eventSendToUnreal_Parms), &Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_InPackageFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_MaxInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::NewProp_ImportNormals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "CPP_Default_ImportNormals", "false" },
		{ "CPP_Default_MaxInfluences", "1" },
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorSubsystem, nullptr, "SendToUnreal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::HoudiniEditorSubsystem_eventSendToUnreal_Parms), Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEditorSubsystem);
	UClass* Z_Construct_UClass_UHoudiniEditorSubsystem_NoRegister()
	{
		return UHoudiniEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniEditorSubsystem_DumpSessionInfo, "DumpSessionInfo" }, // 2415093339
		{ &Z_Construct_UFunction_UHoudiniEditorSubsystem_Fetch, "Fetch" }, // 1894480793
		{ &Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToHoudini, "SendToHoudini" }, // 3624124270
		{ &Z_Construct_UFunction_UHoudiniEditorSubsystem_SendToUnreal, "SendToUnreal" }, // 795187218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor Susbsystem that creates a \"Managed\" Session HDA used to transfer assets between Houdini and Unreal\n */" },
		{ "IncludePath", "HoudiniEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/HoudiniEditorSubsystem.h" },
		{ "ToolTip", "Editor Susbsystem that creates a \"Managed\" Session HDA used to transfer assets between Houdini and Unreal" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::ClassParams = {
		&UHoudiniEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UHoudiniEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEditorSubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniEditorSubsystem.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniEditorSubsystem>()
	{
		return UHoudiniEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEditorSubsystem);
	UHoudiniEditorSubsystem::~UHoudiniEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniNodeSync::StaticStruct, Z_Construct_UScriptStruct_FHoudiniNodeSync_Statics::NewStructOps, TEXT("HoudiniNodeSync"), &Z_Registration_Info_UScriptStruct_HoudiniNodeSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniNodeSync), 972273393U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEditorSubsystem, UHoudiniEditorSubsystem::StaticClass, TEXT("UHoudiniEditorSubsystem"), &Z_Registration_Info_UClass_UHoudiniEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEditorSubsystem), 311040816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_550079014(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
