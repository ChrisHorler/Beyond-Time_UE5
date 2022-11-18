// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniEngineBakeUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineBakeUtils() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInstancerComponentType;
	static UEnum* EHoudiniInstancerComponentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniInstancerComponentType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniInstancerComponentType>()
	{
		return EHoudiniInstancerComponentType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enumerators[] = {
		{ "EHoudiniInstancerComponentType::StaticMeshComponent", (int64)EHoudiniInstancerComponentType::StaticMeshComponent },
		{ "EHoudiniInstancerComponentType::InstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::InstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::MeshSplitInstancerComponent", (int64)EHoudiniInstancerComponentType::MeshSplitInstancerComponent },
		{ "EHoudiniInstancerComponentType::InstancedActorComponent", (int64)EHoudiniInstancerComponentType::InstancedActorComponent },
		{ "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::GeoemtryCollectionComponent", (int64)EHoudiniInstancerComponentType::GeoemtryCollectionComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// An enum of the different types for instancer component/bake types\n" },
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Comment", "// Baking foliage as HISMC\n" },
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent" },
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.ToolTip", "Baking foliage as HISMC" },
		{ "FoliageInstancedStaticMeshComponent.Comment", "// For baking foliage as foliage\n" },
		{ "FoliageInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent" },
		{ "FoliageInstancedStaticMeshComponent.ToolTip", "For baking foliage as foliage" },
		{ "GeoemtryCollectionComponent.Name", "EHoudiniInstancerComponentType::GeoemtryCollectionComponent" },
		{ "InstancedActorComponent.Name", "EHoudiniInstancerComponentType::InstancedActorComponent" },
		{ "InstancedStaticMeshComponent.Comment", "// (Hierarichal)InstancedStaticMeshComponent\n" },
		{ "InstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::InstancedStaticMeshComponent" },
		{ "InstancedStaticMeshComponent.ToolTip", "(Hierarichal)InstancedStaticMeshComponent" },
		{ "MeshSplitInstancerComponent.Name", "EHoudiniInstancerComponentType::MeshSplitInstancerComponent" },
		{ "ModuleRelativePath", "Private/HoudiniEngineBakeUtils.h" },
		{ "StaticMeshComponent.Comment", "// Single static mesh component\n" },
		{ "StaticMeshComponent.Name", "EHoudiniInstancerComponentType::StaticMeshComponent" },
		{ "StaticMeshComponent.ToolTip", "Single static mesh component" },
		{ "ToolTip", "An enum of the different types for instancer component/bake types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniInstancerComponentType",
		"EHoudiniInstancerComponentType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics::EnumInfo[] = {
		{ EHoudiniInstancerComponentType_StaticEnum, TEXT("EHoudiniInstancerComponentType"), &Z_Registration_Info_UEnum_EHoudiniInstancerComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2111392349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_3588170386(TEXT("/Script/HoudiniEngineEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
