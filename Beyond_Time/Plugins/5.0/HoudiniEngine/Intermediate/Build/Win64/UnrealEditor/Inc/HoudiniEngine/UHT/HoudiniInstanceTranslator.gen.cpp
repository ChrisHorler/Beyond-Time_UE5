// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniInstanceTranslator.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstanceTranslator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes;
class UScriptStruct* FHoudiniInstancedOutputPerSplitAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPerSplitAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPerSplitAttributes>()
{
	return FHoudiniInstancedOutputPerSplitAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeOutlinerFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeOutlinerFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPerSplitAttributes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData[] = {
		{ "Comment", "// level path attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "level path attribute value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, LevelPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData[] = {
		{ "Comment", "// Bake actor name attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Bake actor name attribute value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName = { "BakeActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName_MetaData[] = {
		{ "Comment", "// Bake actor class attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Bake actor class attribute value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName = { "BakeActorClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeActorClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData[] = {
		{ "Comment", "// bake outliner folder attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "bake outliner folder attribute value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder = { "BakeOutlinerFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeOutlinerFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// unreal_bake_folder attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "unreal_bake_folder attribute value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniInstancedOutputPerSplitAttributes",
		sizeof(FHoudiniInstancedOutputPerSplitAttributes),
		alignof(FHoudiniInstancedOutputPerSplitAttributes),
		Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData;
class UScriptStruct* FHoudiniInstancedOutputPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPartData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPartData>()
{
	return FHoudiniInstancedOutputPartData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceHISM_MetaData[];
#endif
		static void NewProp_bForceHISM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHISM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceInstancer_MetaData[];
#endif
		static void NewProp_bForceInstancer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInstancer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalInstancedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedObjects;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalInstanceObjectPackagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceObjectPackagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceObjectPackagePaths;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstancedTransformsPerObject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstancedTransformsPerObject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NumInstancedTransformsPerObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalInstancedTransformsFlat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedTransformsFlat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedTransformsFlat;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstancedIndicesPerObject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstancedIndicesPerObject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NumInstancedIndicesPerObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalInstancedIndicesFlat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedIndicesFlat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedIndicesFlat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitAttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitAttributeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplitAttributeValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshInstancer_MetaData[];
#endif
		static void NewProp_bSplitMeshInstancer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshInstancer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFoliageInstancer_MetaData[];
#endif
		static void NewProp_bIsFoliageInstancer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFoliageInstancer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllPropertyAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllPropertyAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPropertyAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllLevelPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllLevelPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllLevelPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeActorNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeActorNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeActorNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeActorClassNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeActorClassNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeActorClassNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeFolders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeOutlinerFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeOutlinerFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeOutlinerFolders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerSplitAttributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerSplitAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerSplitAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerSplitAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BakeNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TileValues;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialOverrideNeedsCreateInstance_MetaData[];
#endif
		static void NewProp_bMaterialOverrideNeedsCreateInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialOverrideNeedsCreateInstance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPerInstanceCustomDataPerObject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPerInstanceCustomDataPerObject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NumPerInstanceCustomDataPerObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceCustomDataFlat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomDataFlat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceCustomDataFlat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPartData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bForceHISM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM = { "bForceHISM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_MetaData[] = {
		{ "Comment", "// Should we create an instancer even for single instances?\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Should we create an instancer even for single instances?" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bForceInstancer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer = { "bForceInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData[] = {
		{ "Comment", "// Object paths of OriginalInstancedObjects. Used by message passing system\n// when sending messages from the async importer to the PDG manager. UObject*/references\n// are not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Object paths of OriginalInstancedObjects. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. UObject*/references\nare not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstanceObjectPackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in OriginalInstancedTransforms. Populated when building\n// OriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in OriginalInstancedTransforms. Populated when building\nOriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedTransformsPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedTransformsFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in OriginalInstancedIndices. Populated when building\n// OriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in OriginalInstancedIndices. Populated when building\nOriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedIndicesPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedIndices. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system. See\n// BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedIndices. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system. See\nBuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedIndicesFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName = { "SplitAttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bSplitMeshInstancer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer = { "bSplitMeshInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bIsFoliageInstancer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer = { "bIsFoliageInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(nullptr, 0) }; // 1927906464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData)) }; // 1927906464
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData[] = {
		{ "Comment", "// All level path attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All level path attributes from the first attribute owner we could find" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllLevelPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData[] = {
		{ "Comment", "// All bake actor name attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All bake actor name attributes from the first attribute owner we could find" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_Inner = { "AllBakeActorClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_MetaData[] = {
		{ "Comment", "// All bake actor class name attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All bake actor class name attributes from the first attribute owner we could find" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames = { "AllBakeActorClassNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeActorClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData[] = {
		{ "Comment", "// All unreal_bake_folder attributes (prim attr is checked first then detail)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All unreal_bake_folder attributes (prim attr is checked first then detail)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData[] = {
		{ "Comment", "// All bake outliner folder attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All bake outliner folder attributes from the first attribute owner we could find" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeOutlinerFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, METADATA_PARAMS(nullptr, 0) }; // 2288628584
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp = { "PerSplitAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData[] = {
		{ "Comment", "// A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\n// unreal_bake_outliner_folder)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\nunreal_bake_outliner_folder)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerSplitAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData)) }; // 2288628584
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_Inner = { "BakeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames = { "BakeNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, BakeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner = { "TileValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues = { "TileValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, TileValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, MaterialAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData[] = {
		{ "Comment", "// Specifies that the materials in MaterialAttributes are to be created as an instance\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Specifies that the materials in MaterialAttributes are to be created as an instance" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bMaterialOverrideNeedsCreateInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance = { "bMaterialOverrideNeedsCreateInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in PerInstanceCustomData. Populated when building\n// PerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// PerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in PerInstanceCustomData. Populated when building\nPerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nPerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumPerInstanceCustomDataPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerInstanceCustomDataFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniInstancedOutputPartData",
		sizeof(FHoudiniInstancedOutputPartData),
		alignof(FHoudiniInstancedOutputPartData),
		Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniInstancedOutputPerSplitAttributes::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewStructOps, TEXT("HoudiniInstancedOutputPerSplitAttributes"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutputPerSplitAttributes), 2288628584U) },
		{ FHoudiniInstancedOutputPartData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewStructOps, TEXT("HoudiniInstancedOutputPartData"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutputPartData), 3101578741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_1016996123(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
