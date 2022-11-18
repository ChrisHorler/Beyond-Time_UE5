// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetBlueprintComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetToggleValueAt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleValueAt(Z_Param_Name,Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetFloatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_Name,Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execHasParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasParameter(Z_Param_Name);
		P_NATIVE_END;
	}
	void UHoudiniAssetBlueprintComponent::StaticRegisterNativesUHoudiniAssetBlueprintComponent()
	{
		UClass* Class = UHoudiniAssetBlueprintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasParameter", &UHoudiniAssetBlueprintComponent::execHasParameter },
			{ "SetFloatParameter", &UHoudiniAssetBlueprintComponent::execSetFloatParameter },
			{ "SetToggleValueAt", &UHoudiniAssetBlueprintComponent::execSetToggleValueAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventHasParameter_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventHasParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniAssetBlueprintComponent_eventHasParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventHasParameter_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Asset Component" },
		{ "Comment", "//------------------------------------------------------------------------------------------------\n// Blueprint functions\n//------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Blueprint functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "HasParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::HoudiniAssetBlueprintComponent_eventHasParameter_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms
		{
			FString Name;
			float Value;
			int32 Index;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Asset Component" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms
		{
			FString Name;
			bool Value;
			int32 Index;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Asset Component" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetToggleValueAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetBlueprintComponent);
	UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister()
	{
		return UHoudiniAssetBlueprintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FauxBPProperty_MetaData[];
#endif
		static void NewProp_FauxBPProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FauxBPProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoudiniAssetChanged_MetaData[];
#endif
		static void NewProp_bHoudiniAssetChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoudiniAssetChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatedFromTemplate_MetaData[];
#endif
		static void NewProp_bUpdatedFromTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatedFromTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInBlueprintEditor_MetaData[];
#endif
		static void NewProp_bIsInBlueprintEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInBlueprintEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRegisteredComponentTemplate_MetaData[];
#endif
		static void NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRegisteredComponentTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOutputNodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedOutputNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputNodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedInputNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniAssetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter, "HasParameter" }, // 3229112091
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter, "SetFloatParameter" }, // 3671749490
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt, "SetToggleValueAt" }, // 235065149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Houdini Asset" },
		{ "HideCategories", "Object Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HoudiniAssetBlueprintComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "NotBlueprintType", "true" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData[] = {
		{ "Comment", "/*UPROPERTY(DuplicateTransient)\n\x09""bool bOutputsRequireUpdate;*/" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "UPROPERTY(DuplicateTransient)\n       bool bOutputsRequireUpdate;" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->FauxBPProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty = { "FauxBPProperty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bHoudiniAssetChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged = { "bHoudiniAssetChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bUpdatedFromTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate = { "bUpdatedFromTemplate", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bIsInBlueprintEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor = { "bIsInBlueprintEditor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bHasRegisteredComponentTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate = { "bHasRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp = { "CachedOutputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3092385071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData[] = {
		{ "Comment", "// This is used to keep track of which SCS variable names correspond to which\n// output objects.\n// This seems like it will cause issues in the map.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "This is used to keep track of which SCS variable names correspond to which\noutput objects.\nThis seems like it will cause issues in the map." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedOutputNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData)) }; // 3092385071
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp = { "CachedInputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData[] = {
		{ "Comment", "// This is used to keep track of which (SCS) variable guids correspond to which\n// input objects.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "This is used to keep track of which (SCS) variable guids correspond to which\ninput objects." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedInputNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetBlueprintComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams = {
		&UHoudiniAssetBlueprintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton, Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetBlueprintComponent>()
	{
		return UHoudiniAssetBlueprintComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetBlueprintComponent);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput;
class UScriptStruct* FHoudiniAssetBlueprintOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetBlueprintOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetBlueprintOutput>()
{
	return FHoudiniAssetBlueprintOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "///** Used to keep track of output data and mappings during reconstruction  */\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Used to keep track of output data and mappings during reconstruction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetBlueprintOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintOutput, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintOutput, OutputObject), Z_Construct_UScriptStruct_FHoudiniOutputObject, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject_MetaData)) }; // 2733350163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniAssetBlueprintOutput",
		sizeof(FHoudiniAssetBlueprintOutput),
		alignof(FHoudiniAssetBlueprintOutput),
		Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniAssetBlueprintInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FHoudiniAssetBlueprintInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData;
class UScriptStruct* FHoudiniAssetBlueprintInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetBlueprintInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetBlueprintInstanceData>()
{
	return FHoudiniAssetBlueprintInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AssetCookCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[];
#endif
		static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[];
#endif
		static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[];
#endif
		static void NewProp_bPendingDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[];
#endif
		static void NewProp_bRecookRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[];
#endif
		static void NewProp_bRebuildRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[];
#endif
		static void NewProp_bEnableCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[];
#endif
		static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[];
#endif
		static void NewProp_bLastCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegisteredComponentTemplate_MetaData[];
#endif
		static void NewProp_bRegisteredComponentTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisteredComponentTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store HoudiniAssetComponent data during BP reconstruction */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Used to store HoudiniAssetComponent data during BP reconstruction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetBlueprintInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "Comment", "// Persist all the required properties for being able to recook the HoudiniAsset from its existing state.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Persist all the required properties for being able to recook the HoudiniAsset from its existing state." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_MetaData)) }; // 3868777027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData[] = {
		{ "Comment", "// Subasset index\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Subasset index" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SubAssetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, AssetCookCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bHasBeenDuplicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bPendingDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRecookRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRebuildRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bEnableCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bForceNeedUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bLastCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "Comment", "/*UPROPERTY(DuplicateTransient)\n\x09TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;*/" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "UPROPERTY(DuplicateTransient)\n       TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit(void* Obj)
	{
		((FHoudiniAssetBlueprintInstanceData*)Obj)->bRegisteredComponentTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate = { "bRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetBlueprintInstanceData), &Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData[] = {
		{ "Comment", "// Name of the component from which this \n// data was copied. Used for debugging purposes.\n" },
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
		{ "ToolTip", "Name of the component from which this\ndata was copied. Used for debugging purposes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput, METADATA_PARAMS(nullptr, 0) }; // 1993150643
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp = { "Outputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3092385071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Outputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_MetaData)) }; // 3092385071 1993150643
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintInstanceData, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HoudiniAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SubAssetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_AssetCookCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bHasBeenDuplicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bPendingDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRecookRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRebuildRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bEnableCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bForceNeedUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bLastCookSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_ComponentGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_HapiGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_bRegisteredComponentTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewProp_Inputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"HoudiniAssetBlueprintInstanceData",
		sizeof(FHoudiniAssetBlueprintInstanceData),
		alignof(FHoudiniAssetBlueprintInstanceData),
		Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniAssetBlueprintOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewStructOps, TEXT("HoudiniAssetBlueprintOutput"), &Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAssetBlueprintOutput), 1993150643U) },
		{ FHoudiniAssetBlueprintInstanceData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintInstanceData_Statics::NewStructOps, TEXT("HoudiniAssetBlueprintInstanceData"), &Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAssetBlueprintInstanceData), 3564006465U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetBlueprintComponent, UHoudiniAssetBlueprintComponent::StaticClass, TEXT("UHoudiniAssetBlueprintComponent"), &Z_Registration_Info_UClass_UHoudiniAssetBlueprintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetBlueprintComponent), 3102769775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_973631609(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetBlueprintComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
