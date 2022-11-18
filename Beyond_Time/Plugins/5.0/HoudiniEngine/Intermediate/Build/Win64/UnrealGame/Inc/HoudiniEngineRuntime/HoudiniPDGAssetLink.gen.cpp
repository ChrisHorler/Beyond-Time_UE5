// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniPDGAssetLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGAssetLink() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGLinkState;
	static UEnum* EPDGLinkState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGLinkState"));
		}
		return Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>()
	{
		return EPDGLinkState_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators[] = {
		{ "EPDGLinkState::Inactive", (int64)EPDGLinkState::Inactive },
		{ "EPDGLinkState::Linking", (int64)EPDGLinkState::Linking },
		{ "EPDGLinkState::Linked", (int64)EPDGLinkState::Linked },
		{ "EPDGLinkState::Error_Not_Linked", (int64)EPDGLinkState::Error_Not_Linked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams[] = {
		{ "Error_Not_Linked.Name", "EPDGLinkState::Error_Not_Linked" },
		{ "Inactive.Name", "EPDGLinkState::Inactive" },
		{ "Linked.Name", "EPDGLinkState::Linked" },
		{ "Linking.Name", "EPDGLinkState::Linking" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EPDGLinkState",
		"EPDGLinkState",
		Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState()
	{
		if (!Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGNodeState;
	static UEnum* EPDGNodeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGNodeState"));
		}
		return Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>()
	{
		return EPDGNodeState_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators[] = {
		{ "EPDGNodeState::None", (int64)EPDGNodeState::None },
		{ "EPDGNodeState::Dirtied", (int64)EPDGNodeState::Dirtied },
		{ "EPDGNodeState::Dirtying", (int64)EPDGNodeState::Dirtying },
		{ "EPDGNodeState::Cooking", (int64)EPDGNodeState::Cooking },
		{ "EPDGNodeState::Cook_Complete", (int64)EPDGNodeState::Cook_Complete },
		{ "EPDGNodeState::Cook_Failed", (int64)EPDGNodeState::Cook_Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams[] = {
		{ "Cook_Complete.Name", "EPDGNodeState::Cook_Complete" },
		{ "Cook_Failed.Name", "EPDGNodeState::Cook_Failed" },
		{ "Cooking.Name", "EPDGNodeState::Cooking" },
		{ "Dirtied.Name", "EPDGNodeState::Dirtied" },
		{ "Dirtying.Name", "EPDGNodeState::Dirtying" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "None.Name", "EPDGNodeState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EPDGNodeState",
		"EPDGNodeState",
		Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState()
	{
		if (!Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGWorkResultState;
	static UEnum* EPDGWorkResultState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGWorkResultState"));
		}
		return Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>()
	{
		return EPDGWorkResultState_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators[] = {
		{ "EPDGWorkResultState::None", (int64)EPDGWorkResultState::None },
		{ "EPDGWorkResultState::ToLoad", (int64)EPDGWorkResultState::ToLoad },
		{ "EPDGWorkResultState::Loading", (int64)EPDGWorkResultState::Loading },
		{ "EPDGWorkResultState::Loaded", (int64)EPDGWorkResultState::Loaded },
		{ "EPDGWorkResultState::ToDelete", (int64)EPDGWorkResultState::ToDelete },
		{ "EPDGWorkResultState::Deleting", (int64)EPDGWorkResultState::Deleting },
		{ "EPDGWorkResultState::Deleted", (int64)EPDGWorkResultState::Deleted },
		{ "EPDGWorkResultState::NotLoaded", (int64)EPDGWorkResultState::NotLoaded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams[] = {
		{ "Deleted.Name", "EPDGWorkResultState::Deleted" },
		{ "Deleting.Name", "EPDGWorkResultState::Deleting" },
		{ "Loaded.Name", "EPDGWorkResultState::Loaded" },
		{ "Loading.Name", "EPDGWorkResultState::Loading" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "None.Name", "EPDGWorkResultState::None" },
		{ "NotLoaded.Name", "EPDGWorkResultState::NotLoaded" },
		{ "ToDelete.Name", "EPDGWorkResultState::ToDelete" },
		{ "ToLoad.Name", "EPDGWorkResultState::ToLoad" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EPDGWorkResultState",
		"EPDGWorkResultState",
		Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState()
	{
		if (!Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutputActorOwner;
class UScriptStruct* FOutputActorOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputActorOwner, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("OutputActorOwner"));
	}
	return Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FOutputActorOwner>()
{
	return FOutputActorOwner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputActorOwner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor = { "OutputActor", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputActorOwner, OutputActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"OutputActorOwner",
		sizeof(FOutputActorOwner),
		alignof(FOutputActorOwner),
		Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner()
	{
		if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResultObject;
class UScriptStruct* FTOPWorkResultObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResultObject, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResultObject"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResultObject>()
{
	return FTOPWorkResultObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemResultInfoIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemResultInfoIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBakedSinceLastLoad_MetaData[];
#endif
		static void NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBakedSinceLastLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResultObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, State), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData)) }; // 2978334543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex_MetaData[] = {
		{ "Comment", "// The index in the WorkItemResultInfo array of this item as it was received from HAPI.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "The index in the WorkItemResultInfo array of this item as it was received from HAPI." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex = { "WorkItemResultInfoIndex", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, WorkItemResultInfoIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner = { "ResultOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData[] = {
		{ "Comment", "// UPROPERTY()\n// TArray<UObject*>\x09\x09ResultObjects;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<UObject*>              ResultObjects;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs = { "ResultOutputs", nullptr, (EPropertyFlags)0x0020080400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, ResultOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_MetaData[] = {
		{ "Comment", "// If true, indicates that the work result object has been auto-baked since it was last loaded.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "If true, indicates that the work result object has been auto-baked since it was last loaded." },
	};
#endif
	void Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj)
	{
		((FTOPWorkResultObject*)Obj)->bAutoBakedSinceLastLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad = { "bAutoBakedSinceLastLoad", nullptr, (EPropertyFlags)0x0020080400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTOPWorkResultObject), &Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData)) }; // 3397993460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"TOPWorkResultObject",
		sizeof(FTOPWorkResultObject),
		alignof(FTOPWorkResultObject),
		Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject()
	{
		if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResult;
class UScriptStruct* FTOPWorkResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResult"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResult>()
{
	return FTOPWorkResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex = { "WorkItemIndex", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID = { "WorkItemID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner = { "ResultObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResultObject, METADATA_PARAMS(nullptr, 0) }; // 2055885452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects = { "ResultObjects", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, ResultObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData)) }; // 2055885452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"TOPWorkResult",
		sizeof(FTOPWorkResult),
		alignof(FTOPWorkResult),
		Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTallyBase;
class UScriptStruct* FWorkItemTallyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTallyBase, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTallyBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTallyBase>()
{
	return FWorkItemTallyBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTallyBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"WorkItemTallyBase",
		sizeof(FWorkItemTallyBase),
		alignof(FWorkItemTallyBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTally;
class UScriptStruct* FWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTally, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTally>()
{
	return FWorkItemTally::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorkItemTally_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_WaitingWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ScheduledWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CookingWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CookedWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ErroredWorkItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CookCancelledWorkItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTally>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp = { "AllWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData[] = {
		{ "Comment", "// We use sets to keep track of in what state a work item is. The set stores the WorkItemID.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "We use sets to keep track of in what state a work item is. The set stores the WorkItemID." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems = { "AllWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, AllWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, WaitingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookedWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ErroredWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FWorkItemTallyBase,
		&NewStructOps,
		"WorkItemTally",
		sizeof(FWorkItemTally),
		alignof(FWorkItemTally),
		Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally()
	{
		if (!Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAggregatedWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FAggregatedWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally;
class UScriptStruct* FAggregatedWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregatedWorkItemTally, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("AggregatedWorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FAggregatedWorkItemTally>()
{
	return FAggregatedWorkItemTally::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregatedWorkItemTally>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems = { "TotalWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, TotalWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, WaitingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookedWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ErroredWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FWorkItemTallyBase,
		&NewStructOps,
		"AggregatedWorkItemTally",
		sizeof(FAggregatedWorkItemTally),
		alignof(FAggregatedWorkItemTally),
		Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput;
class UScriptStruct* FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPDGWorkResultObjectBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPDGWorkResultObjectBakedOutput>()
{
	return FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Container for baked outputs of a PDG work result object. \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Container for baked outputs of a PDG work result object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGWorkResultObjectBakedOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(nullptr, 0) }; // 1376605153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData[] = {
		{ "Comment", "// Array of baked output per output index of the work result object's outputs.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Array of baked output per output index of the work result object's outputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGWorkResultObjectBakedOutput, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData)) }; // 1376605153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniPDGWorkResultObjectBakedOutput",
		sizeof(FHoudiniPDGWorkResultObjectBakedOutput),
		alignof(FHoudiniPDGWorkResultObjectBakedOutput),
		Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton;
	}
	void UTOPNode::StaticRegisterNativesUTOPNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNode);
	UClass* Z_Construct_UClass_UTOPNode_NoRegister()
	{
		return UTOPNode::StaticClass();
	}
	struct Z_Construct_UClass_UTOPNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkResultParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkResultParent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[];
#endif
		static void NewProp_bAutoLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NodeState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveNotLoadedWorkResults_MetaData[];
#endif
		static void NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveNotLoadedWorkResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveLoadedWorkResults_MetaData[];
#endif
		static void NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveLoadedWorkResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasChildNodes_MetaData[];
#endif
		static void NewProp_bHasChildNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChildNodes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClearedLandscapeLayers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearedLandscapeLayers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ClearedLandscapeLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedWorkResultObjectOutputs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedWorkResultObjectOutputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedWorkResultObjectOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BakedWorkResultObjectOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedWorkItemTally_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedWorkItemTally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasReceivedCookCompleteEvent_MetaData[];
#endif
		static void NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReceivedCookCompleteEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTOPNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeId), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodePath), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, ParentName), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent = { "WorkResultParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkResultParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner = { "WorkResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResult, METADATA_PARAMS(nullptr, 0) }; // 1339179923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult = { "WorkResult", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData)) }; // 1339179923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData[] = {
		{ "Comment", "// Hidden in the nodes combobox\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Hidden in the nodes combobox" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bAutoLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState = { "NodeState", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData)) }; // 722170592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData[] = {
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any NotLoaded work result objects are found\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any NotLoaded work result objects are found" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bCachedHaveNotLoadedWorkResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults = { "bCachedHaveNotLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData[] = {
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any Loaded work result objects are found\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any Loaded work result objects are found" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bCachedHaveLoadedWorkResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults = { "bCachedHaveLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData[] = {
		{ "Comment", "// True if this node has child nodes\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "True if this node has child nodes" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bHasChildNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes = { "bHasChildNodes", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_ElementProp = { "ClearedLandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_MetaData[] = {
		{ "Comment", "// More cached landscape data\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "More cached landscape data" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers = { "ClearedLandscapeLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, ClearedLandscapeLayers), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData[] = {
		{ "Comment", "// Visible in the level\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Visible in the level" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, METADATA_PARAMS(nullptr, 0) }; // 2188805241
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp = { "BakedWorkResultObjectOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData[] = {
		{ "Comment", "// Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs. \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, BakedWorkResultObjectOutputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData)) }; // 2188805241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData[] = {
		{ "Comment", "// This node's own work items, used when bHasChildNodes is false.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This node's own work items, used when bHasChildNodes is false." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkItemTally), Z_Construct_UScriptStruct_FWorkItemTally, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData)) }; // 2373701819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally_MetaData[] = {
		{ "Comment", "// This node's aggregated work item tallys (sum of child work item tally, use when bHasChildNodes is true)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This node's aggregated work item tallys (sum of child work item tally, use when bHasChildNodes is true)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally = { "AggregatedWorkItemTally", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, AggregatedWorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally_MetaData)) }; // 2134534287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_MetaData[] = {
		{ "Comment", "// Set to true when the node recieves HAPI_PDG_EVENT_COOK_COMPLETE event\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Set to true when the node recieves HAPI_PDG_EVENT_COOK_COMPLETE event" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bHasReceivedCookCompleteEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent = { "bHasReceivedCookCompleteEvent", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData)) }; // 3397993460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLandscapeLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTOPNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNode_Statics::ClassParams = {
		&UTOPNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTOPNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTOPNode()
	{
		if (!Z_Registration_Info_UClass_UTOPNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNode.OuterSingleton, Z_Construct_UClass_UTOPNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTOPNode.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNode>()
	{
		return UTOPNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNode);
	void UTOPNetwork::StaticRegisterNativesUTOPNetwork()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNetwork);
	UClass* Z_Construct_UClass_UTOPNetwork_NoRegister()
	{
		return UTOPNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UTOPNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowResults_MetaData[];
#endif
		static void NewProp_bShowResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadResults_MetaData[];
#endif
		static void NewProp_bAutoLoadResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodeId), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodeName), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData[] = {
		{ "Comment", "// HAPI path to this node (relative to the HDA)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "HAPI path to this node (relative to the HDA)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodePath), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTOPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, AllTOPNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData[] = {
		{ "Comment", "// TODO: Should be using SelectedNodeName instead?\n// Index is not consistent after updating filter\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "TODO: Should be using SelectedNodeName instead?\nIndex is not consistent after updating filter" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex = { "SelectedTOPIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, SelectedTOPIndex), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, ParentName), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit(void* Obj)
	{
		((UTOPNetwork*)Obj)->bShowResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults = { "bShowResults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit(void* Obj)
	{
		((UTOPNetwork*)Obj)->bAutoLoadResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults = { "bAutoLoadResults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTOPNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNetwork_Statics::ClassParams = {
		&UTOPNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTOPNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTOPNetwork()
	{
		if (!Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton, Z_Construct_UClass_UTOPNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNetwork>()
	{
		return UTOPNetwork::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNetwork);
	void UHoudiniPDGAssetLink::StaticRegisterNativesUHoudiniPDGAssetLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPDGAssetLink);
	UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister()
	{
		return UHoudiniPDGAssetLink::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNetworks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNetworks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNetworks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPNetworkIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPNetworkIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCook_MetaData[];
#endif
		static void NewProp_bAutoCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPNodeFilter_MetaData[];
#endif
		static void NewProp_bUseTOPNodeFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPNodeFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPOutputFilter_MetaData[];
#endif
		static void NewProp_bUseTOPOutputFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPOutputFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TOPNodeFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOPOutputFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TOPOutputFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWorkItems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWorkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputCachePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputCachePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsUIRefresh_MetaData[];
#endif
		static void NewProp_bNeedsUIRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsUIRefresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMenuExpanded_MetaData[];
#endif
		static void NewProp_bBakeMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMenuExpanded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PDGBakeSelectionOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGBakeSelectionOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PDGBakeSelectionOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PDGBakePackageReplaceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDGBakePackageReplaceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PDGBakePackageReplaceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData[];
#endif
		static void NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterAllWorkResultObjectsLoaded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//UHoudiniAssetComponent*\x09\x09ParentHAC;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "UPROPERTY()\nUHoudiniAssetComponent*                ParentHAC;" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData[] = {
		{ "Comment", "// The full path to the HDA in HAPI\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "The full path to the HDA in HAPI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath = { "AssetNodePath", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetNodePath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetID), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTOPNetwork_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AllTOPNetworks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex = { "SelectedTOPNetworkIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, SelectedTOPNetworkIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState = { "LinkState", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, LinkState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData)) }; // 1538601991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bAutoCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook = { "bAutoCook", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bUseTOPNodeFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter = { "bUseTOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bUseTOPOutputFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter = { "bUseTOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter = { "TOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPNodeFilter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter = { "TOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPOutputFilter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems = { "NumWorkItems", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumWorkItems), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, WorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData)) }; // 2134534287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath = { "OutputCachePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputCachePath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bNeedsUIRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh = { "bNeedsUIRefresh", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// A parent actor to serve as the parent of any output actors\n// that are created.\n// If null, then output actors are created under a folder\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "A parent actor to serve as the parent of any output actors\nthat are created.\nIf null, then output actors are created under a folder" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor = { "OutputParentActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// Folder used for baking PDG outputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Folder used for baking PDG outputs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bBakeMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded = { "bBakeMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData[] = {
		{ "Comment", "// What kind of output to bake, for example, bake actors, bake to blueprint\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "What kind of output to bake, for example, bake actors, bake to blueprint" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData)) }; // 3229896027
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData[] = {
		{ "Comment", "// Which outputs to bake, for example, all, selected network, selected node\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Which outputs to bake, for example, all, selected network, selected node" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption = { "PDGBakeSelectionOption", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakeSelectionOption), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData)) }; // 2253993420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData[] = {
		{ "Comment", "// This determines if the baked assets should replace existing assets with the same name,\n// or always generate new assets (with numerical suffixes if needed to create unique names)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This determines if the baked assets should replace existing assets with the same name,\nor always generate new assets (with numerical suffixes if needed to create unique names)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode = { "PDGBakePackageReplaceMode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakePackageReplaceMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData)) }; // 2347698961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData[] = {
		{ "Comment", "// If true, recenter baked actors to their bounding box center after bake\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "If true, recenter baked actors to their bounding box center after bake" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData[] = {
		{ "Comment", "// Auto-bake: if this is true, it indicates that once all work result objects for the node is loaded they should\n// all be baked \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Auto-bake: if this is true, it indicates that once all work result objects for the node is loaded they should\nall be baked" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bBakeAfterAllWorkResultObjectsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded = { "bBakeAfterAllWorkResultObjectsLoaded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPDGAssetLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams = {
		&UHoudiniPDGAssetLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPDGAssetLink()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton, Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniPDGAssetLink>()
	{
		return UHoudiniPDGAssetLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPDGAssetLink);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::EnumInfo[] = {
		{ EPDGLinkState_StaticEnum, TEXT("EPDGLinkState"), &Z_Registration_Info_UEnum_EPDGLinkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1538601991U) },
		{ EPDGNodeState_StaticEnum, TEXT("EPDGNodeState"), &Z_Registration_Info_UEnum_EPDGNodeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722170592U) },
		{ EPDGWorkResultState_StaticEnum, TEXT("EPDGWorkResultState"), &Z_Registration_Info_UEnum_EPDGWorkResultState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2978334543U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ScriptStructInfo[] = {
		{ FOutputActorOwner::StaticStruct, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewStructOps, TEXT("OutputActorOwner"), &Z_Registration_Info_UScriptStruct_OutputActorOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputActorOwner), 3397993460U) },
		{ FTOPWorkResultObject::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewStructOps, TEXT("TOPWorkResultObject"), &Z_Registration_Info_UScriptStruct_TOPWorkResultObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResultObject), 2055885452U) },
		{ FTOPWorkResult::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewStructOps, TEXT("TOPWorkResult"), &Z_Registration_Info_UScriptStruct_TOPWorkResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResult), 1339179923U) },
		{ FWorkItemTallyBase::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::NewStructOps, TEXT("WorkItemTallyBase"), &Z_Registration_Info_UScriptStruct_WorkItemTallyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTallyBase), 1782320173U) },
		{ FWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps, TEXT("WorkItemTally"), &Z_Registration_Info_UScriptStruct_WorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTally), 2373701819U) },
		{ FAggregatedWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewStructOps, TEXT("AggregatedWorkItemTally"), &Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregatedWorkItemTally), 2134534287U) },
		{ FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewStructOps, TEXT("HoudiniPDGWorkResultObjectBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGWorkResultObjectBakedOutput), 2188805241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTOPNode, UTOPNode::StaticClass, TEXT("UTOPNode"), &Z_Registration_Info_UClass_UTOPNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNode), 3397508704U) },
		{ Z_Construct_UClass_UTOPNetwork, UTOPNetwork::StaticClass, TEXT("UTOPNetwork"), &Z_Registration_Info_UClass_UTOPNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNetwork), 2445924551U) },
		{ Z_Construct_UClass_UHoudiniPDGAssetLink, UHoudiniPDGAssetLink::StaticClass, TEXT("UHoudiniPDGAssetLink"), &Z_Registration_Info_UClass_UHoudiniPDGAssetLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPDGAssetLink), 1102113315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_2954893683(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
