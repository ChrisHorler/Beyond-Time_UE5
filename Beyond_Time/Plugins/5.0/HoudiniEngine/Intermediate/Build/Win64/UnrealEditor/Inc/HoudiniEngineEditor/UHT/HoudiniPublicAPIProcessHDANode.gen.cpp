// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIProcessHDANode.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIAssetWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIProcessHDANode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_NoRegister();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniParameterTuple();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics
	{
		struct _Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms
		{
			UHoudiniPublicAPIAssetWrapper* AssetWrapper;
			bool bCookSuccess;
			bool bBakeSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookSuccess_MetaData[];
#endif
		static void NewProp_bCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeSuccess_MetaData[];
#endif
		static void NewProp_bBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_AssetWrapper = { "AssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms, AssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess_SetBit(void* Obj)
	{
		((_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms*)Obj)->bCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess = { "bCookSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms), &Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess_SetBit(void* Obj)
	{
		((_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms*)Obj)->bBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess = { "bBakeSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms), &Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_AssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bCookSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::NewProp_bBakeSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate type for output pins on the node.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate type for output pins on the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor, nullptr, "OnProcessHDANodeOutputPinDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePostAutoBake)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_GET_UBOOL(Z_Param_bInBakeSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePostAutoBake(Z_Param_InAssetWrapper,Z_Param_bInBakeSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePostProcessing)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePostProcessing(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePreProcess)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePreProcess(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePostAutoCook)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_GET_UBOOL(Z_Param_bInCookSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePostAutoCook(Z_Param_InAssetWrapper,Z_Param_bInCookSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePostInstantiation)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePostInstantiation(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandlePreInstantiation)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePreInstantiation(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandleComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execHandleFailure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFailure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIProcessHDANode::execProcessHDA)
	{
		P_GET_OBJECT(UHoudiniAsset,Z_Param_InHoudiniAsset);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InInstantiateAt);
		P_GET_TMAP_REF(FName,FHoudiniParameterTuple,Z_Param_Out_InParameters);
		P_GET_TMAP_REF(int32,UHoudiniPublicAPIInput*,Z_Param_Out_InNodeInputs);
		P_GET_TMAP_REF(FName,UHoudiniPublicAPIInput*,Z_Param_Out_InParameterInputs);
		P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
		P_GET_OBJECT(ULevel,Z_Param_InSpawnInLevelOverride);
		P_GET_UBOOL(Z_Param_bInEnableAutoCook);
		P_GET_UBOOL(Z_Param_bInEnableAutoBake);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBakeDirectoryPath);
		P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeMethod);
		P_GET_UBOOL(Z_Param_bInRemoveOutputAfterBake);
		P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
		P_GET_UBOOL(Z_Param_bInReplacePreviousBake);
		P_GET_UBOOL(Z_Param_bInDeleteInstantiatedAssetOnCompletionOrFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPIProcessHDANode**)Z_Param__Result=UHoudiniPublicAPIProcessHDANode::ProcessHDA(Z_Param_InHoudiniAsset,Z_Param_Out_InInstantiateAt,Z_Param_Out_InParameters,Z_Param_Out_InNodeInputs,Z_Param_Out_InParameterInputs,Z_Param_InWorldContextObject,Z_Param_InSpawnInLevelOverride,Z_Param_bInEnableAutoCook,Z_Param_bInEnableAutoBake,Z_Param_InBakeDirectoryPath,EHoudiniEngineBakeOption(Z_Param_InBakeMethod),Z_Param_bInRemoveOutputAfterBake,Z_Param_bInRecenterBakedActors,Z_Param_bInReplacePreviousBake,Z_Param_bInDeleteInstantiatedAssetOnCompletionOrFailure);
		P_NATIVE_END;
	}
	void UHoudiniPublicAPIProcessHDANode::StaticRegisterNativesUHoudiniPublicAPIProcessHDANode()
	{
		UClass* Class = UHoudiniPublicAPIProcessHDANode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleComplete", &UHoudiniPublicAPIProcessHDANode::execHandleComplete },
			{ "HandleFailure", &UHoudiniPublicAPIProcessHDANode::execHandleFailure },
			{ "HandlePostAutoBake", &UHoudiniPublicAPIProcessHDANode::execHandlePostAutoBake },
			{ "HandlePostAutoCook", &UHoudiniPublicAPIProcessHDANode::execHandlePostAutoCook },
			{ "HandlePostInstantiation", &UHoudiniPublicAPIProcessHDANode::execHandlePostInstantiation },
			{ "HandlePostProcessing", &UHoudiniPublicAPIProcessHDANode::execHandlePostProcessing },
			{ "HandlePreInstantiation", &UHoudiniPublicAPIProcessHDANode::execHandlePreInstantiation },
			{ "HandlePreProcess", &UHoudiniPublicAPIProcessHDANode::execHandlePreProcess },
			{ "ProcessHDA", &UHoudiniPublicAPIProcessHDANode::execProcessHDA },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Broadcast Complete and removes the node from the root set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Broadcast Complete and removes the node from the root set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandleComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Broadcast Failure and removes the node from the root set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Broadcast Failure and removes the node from the root set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandleFailure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePostAutoBake_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
			bool bInBakeSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBakeSuccess_MetaData[];
#endif
		static void NewProp_bInBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBakeSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePostAutoBake_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventHandlePostAutoBake_Parms*)Obj)->bInBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess = { "bInBakeSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventHandlePostAutoBake_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_InAssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::NewProp_bInBakeSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound to the asset wrapper's post-bake delegate. Broadcasts #PostAutoBake. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's post-bake delegate. Broadcasts #PostAutoBake." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePostAutoBake", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePostAutoBake_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePostAutoCook_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
			bool bInCookSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCookSuccess_MetaData[];
#endif
		static void NewProp_bInCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCookSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePostAutoCook_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventHandlePostAutoCook_Parms*)Obj)->bInCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess = { "bInCookSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventHandlePostAutoCook_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_InAssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::NewProp_bInCookSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound to the asset wrapper's post-cook delegate. Broadcasts #PostAutoCook. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's post-cook delegate. Broadcasts #PostAutoCook." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePostAutoCook", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePostAutoCook_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePostInstantiation_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePostInstantiation_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Bound to the asset wrapper's post-instantiation delegate. Sets the HDAs inputs from #NodeInputs and\n\x09 * #ParameterInputs and broadcasts #PostInstantiation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's post-instantiation delegate. Sets the HDAs inputs from #NodeInputs and\n#ParameterInputs and broadcasts #PostInstantiation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePostInstantiation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePostInstantiation_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePostProcessing_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePostProcessing_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound to the asset wrapper's post-processing delegate. Broadcasts #PostProcessing. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's post-processing delegate. Broadcasts #PostProcessing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePostProcessing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePostProcessing_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePreInstantiation_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePreInstantiation_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Bound to the asset wrapper's pre-instantiation delegate. Sets the HDAs parameters from #Parameters and\n\x09 * broadcasts #PreInstantiation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's pre-instantiation delegate. Sets the HDAs parameters from #Parameters and\nbroadcasts #PreInstantiation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePreInstantiation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePreInstantiation_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventHandlePreProcess_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventHandlePreProcess_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound to the asset wrapper's pre-processing delegate. Broadcasts #PreProcess. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Bound to the asset wrapper's pre-processing delegate. Broadcasts #PreProcess." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "HandlePreProcess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::HoudiniPublicAPIProcessHDANode_eventHandlePreProcess_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics
	{
		struct HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms
		{
			UHoudiniAsset* InHoudiniAsset;
			FTransform InInstantiateAt;
			TMap<FName,FHoudiniParameterTuple> InParameters;
			TMap<int32,UHoudiniPublicAPIInput*> InNodeInputs;
			TMap<FName,UHoudiniPublicAPIInput*> InParameterInputs;
			UObject* InWorldContextObject;
			ULevel* InSpawnInLevelOverride;
			bool bInEnableAutoCook;
			bool bInEnableAutoBake;
			FString InBakeDirectoryPath;
			EHoudiniEngineBakeOption InBakeMethod;
			bool bInRemoveOutputAfterBake;
			bool bInRecenterBakedActors;
			bool bInReplacePreviousBake;
			bool bInDeleteInstantiatedAssetOnCompletionOrFailure;
			UHoudiniPublicAPIProcessHDANode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHoudiniAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInstantiateAt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InInstantiateAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InParameters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeInputs_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNodeInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InNodeInputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParameterInputs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InParameterInputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpawnInLevelOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoCook_MetaData[];
#endif
		static void NewProp_bInEnableAutoCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoBake_MetaData[];
#endif
		static void NewProp_bInEnableAutoBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBakeDirectoryPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBakeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRemoveOutputAfterBake_MetaData[];
#endif
		static void NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRemoveOutputAfterBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInReplacePreviousBake_MetaData[];
#endif
		static void NewProp_bInReplacePreviousBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplacePreviousBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_MetaData[];
#endif
		static void NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InHoudiniAsset = { "InHoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InHoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InInstantiateAt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InInstantiateAt = { "InInstantiateAt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InInstantiateAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InInstantiateAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InInstantiateAt_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_ValueProp = { "InParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniParameterTuple, METADATA_PARAMS(nullptr, 0) }; // 2197323035
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_Key_KeyProp = { "InParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_MetaData)) }; // 2197323035
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_ValueProp = { "InNodeInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_Key_KeyProp = { "InNodeInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs = { "InNodeInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InNodeInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_ValueProp = { "InParameterInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_Key_KeyProp = { "InParameterInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs = { "InParameterInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InParameterInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InSpawnInLevelOverride = { "InSpawnInLevelOverride", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InSpawnInLevelOverride), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInEnableAutoCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook = { "bInEnableAutoCook", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInEnableAutoBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake = { "bInEnableAutoBake", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeDirectoryPath = { "InBakeDirectoryPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InBakeDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeDirectoryPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod = { "InBakeMethod", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, InBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod_MetaData)) }; // 3229896027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInRemoveOutputAfterBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake = { "bInRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInReplacePreviousBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake = { "bInReplacePreviousBake", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_SetBit(void* Obj)
	{
		((HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms*)Obj)->bInDeleteInstantiatedAssetOnCompletionOrFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure = { "bInDeleteInstantiatedAssetOnCompletionOrFailure", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InHoudiniAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InInstantiateAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InNodeInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InParameterInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InSpawnInLevelOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInEnableAutoBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_InBakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRemoveOutputAfterBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInReplacePreviousBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_bInDeleteInstantiatedAssetOnCompletionOrFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "AutoCreateRefTerm", "InInstantiateAt,InParameters,InNodeInputs,InParameterInputs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Instantiates an HDA in the specified world/level. Sets parameters and inputs supplied in InParameters,\n\x09 * InNodeInputs and InParameterInputs. If bInEnableAutoCook is true, cooks the HDA. If bInEnableAutoBake is\n\x09 * true, bakes the cooked outputs according to the supplied baking parameters.\n\x09 * This all happens asynchronously, with the various output pins firing at the various points in the process:\n\x09 *\x09- PreInstantiation: before the HDA is instantiated, a good place to set parameter values before the first cook.\n\x09 *\x09- PostInstantiation: after the HDA is instantiated, a good place to set/configure inputs before the first cook.\n\x09 *\x09- PostAutoCook: right after a cook\n\x09 *\x09- PreProcess: after a cook but before output objects have been created/processed\n\x09 *\x09- PostProcessing: after output objects have been created\n\x09 *\x09- PostAutoBake: after outputs have been baked\n\x09 *\x09- Completed: upon successful completion (could be PostInstantiation if auto cook is disabled, PostProcessing\n\x09 *\x09\x09\x09\x09 if auto bake is disabled, or after PostAutoBake if auto bake is enabled.\n\x09 *\x09- Failed: If the process failed at any point.\n\x09 * @param InHoudiniAsset The HDA to instantiate.\n\x09 * @param InInstantiateAt The Transform to instantiate the HDA with.\n\x09 * @param InParameters The parameter values to set before cooking the instantiated HDA.\n\x09 * @param InNodeInputs The node inputs to set before cooking the instantiated HDA.\n\x09 * @param InParameterInputs The parameter-based inputs to set before cooking the instantiated HDA.\n\x09 * @param InWorldContextObject A world context object for identifying the world to spawn in, if\n\x09 * InSpawnInLevelOverride is null.\n\x09 * @param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\n\x09 * InSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\n\x09 * context world's current level.\n\x09 * @param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\n\x09 * parameter, transform and input changes.\n\x09 * @param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n\x09 * @param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n\x09 * @param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n\x09 * @param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n\x09 * @param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n\x09 * @param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\n\x09 * the new bake's output. Defaults to false.\n\x09 * @param bInDeleteInstantiatedAssetOnCompletionOrFailure If true, deletes the instantiated asset actor on\n\x09 * completion or failure. Defaults to false.\n\x09 * @return The blueprint async node.\n\x09 */" },
		{ "CPP_Default_bInDeleteInstantiatedAssetOnCompletionOrFailure", "false" },
		{ "CPP_Default_bInEnableAutoBake", "false" },
		{ "CPP_Default_bInEnableAutoCook", "true" },
		{ "CPP_Default_bInRecenterBakedActors", "false" },
		{ "CPP_Default_bInRemoveOutputAfterBake", "false" },
		{ "CPP_Default_bInReplacePreviousBake", "false" },
		{ "CPP_Default_InBakeDirectoryPath", "" },
		{ "CPP_Default_InBakeMethod", "ToActor" },
		{ "CPP_Default_InSpawnInLevelOverride", "None" },
		{ "CPP_Default_InWorldContextObject", "None" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Instantiates an HDA in the specified world/level. Sets parameters and inputs supplied in InParameters,\nInNodeInputs and InParameterInputs. If bInEnableAutoCook is true, cooks the HDA. If bInEnableAutoBake is\ntrue, bakes the cooked outputs according to the supplied baking parameters.\nThis all happens asynchronously, with the various output pins firing at the various points in the process:\n     - PreInstantiation: before the HDA is instantiated, a good place to set parameter values before the first cook.\n     - PostInstantiation: after the HDA is instantiated, a good place to set/configure inputs before the first cook.\n     - PostAutoCook: right after a cook\n     - PreProcess: after a cook but before output objects have been created/processed\n     - PostProcessing: after output objects have been created\n     - PostAutoBake: after outputs have been baked\n     - Completed: upon successful completion (could be PostInstantiation if auto cook is disabled, PostProcessing\n                              if auto bake is disabled, or after PostAutoBake if auto bake is enabled.\n     - Failed: If the process failed at any point.\n@param InHoudiniAsset The HDA to instantiate.\n@param InInstantiateAt The Transform to instantiate the HDA with.\n@param InParameters The parameter values to set before cooking the instantiated HDA.\n@param InNodeInputs The node inputs to set before cooking the instantiated HDA.\n@param InParameterInputs The parameter-based inputs to set before cooking the instantiated HDA.\n@param InWorldContextObject A world context object for identifying the world to spawn in, if\nInSpawnInLevelOverride is null.\n@param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\nInSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\ncontext world's current level.\n@param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\nparameter, transform and input changes.\n@param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n@param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n@param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n@param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n@param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n@param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\nthe new bake's output. Defaults to false.\n@param bInDeleteInstantiatedAssetOnCompletionOrFailure If true, deletes the instantiated asset actor on\ncompletion or failure. Defaults to false.\n@return The blueprint async node." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, nullptr, "ProcessHDA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::HoudiniPublicAPIProcessHDANode_eventProcessHDA_Parms), Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIProcessHDANode);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_NoRegister()
	{
		return UHoudiniPublicAPIProcessHDANode::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreInstantiation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PreInstantiation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInstantiation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostInstantiation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostAutoCook_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostAutoCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreProcess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PreProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostProcessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostAutoBake_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostAutoBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookSuccess_MetaData[];
#endif
		static void NewProp_bCookSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeSuccess_MetaData[];
#endif
		static void NewProp_bBakeSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantiateAt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstantiateAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeInputs_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeInputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterInputs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInLevelOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnInLevelOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoCook_MetaData[];
#endif
		static void NewProp_bEnableAutoCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoBake_MetaData[];
#endif
		static void NewProp_bEnableAutoBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeDirectoryPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOutputAfterBake_MetaData[];
#endif
		static void NewProp_bRemoveOutputAfterBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOutputAfterBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousBake_MetaData[];
#endif
		static void NewProp_bReplacePreviousBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_MetaData[];
#endif
		static void NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleComplete, "HandleComplete" }, // 3694980605
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandleFailure, "HandleFailure" }, // 2994418385
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoBake, "HandlePostAutoBake" }, // 438987987
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostAutoCook, "HandlePostAutoCook" }, // 405285077
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostInstantiation, "HandlePostInstantiation" }, // 2049210155
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePostProcessing, "HandlePostProcessing" }, // 4072768028
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreInstantiation, "HandlePreInstantiation" }, // 3458118473
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_HandlePreProcess, "HandlePreProcess" }, // 786477577
		{ &Z_Construct_UFunction_UHoudiniPublicAPIProcessHDANode_ProcessHDA, "ProcessHDA" }, // 2889640546
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Blueprint async node for instantiating and cooking/processing an HDA, with delegate output pins for the\n * various phases/state changes of the HDA.\n */" },
		{ "IncludePath", "HoudiniPublicAPIProcessHDANode.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Blueprint async node for instantiating and cooking/processing an HDA, with delegate output pins for the\nvarious phases/state changes of the HDA." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreInstantiation_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast when entering the PreInstantiation state: the HDA's default parameter definitions are\n\x09 * available, but the node has not yet been instantiated in HAPI/Houdini Engine\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast when entering the PreInstantiation state: the HDA's default parameter definitions are\navailable, but the node has not yet been instantiated in HAPI/Houdini Engine" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreInstantiation = { "PreInstantiation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PreInstantiation), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreInstantiation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreInstantiation_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostInstantiation_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Delegate that is broadcast after the asset was successfully instantiated */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast after the asset was successfully instantiated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostInstantiation = { "PostInstantiation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PostInstantiation), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostInstantiation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostInstantiation_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoCook_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after a cook completes, but before outputs have been created. This will not be\n\x09 * broadcast from this node if bInAutoCookEnabled is false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast after a cook completes, but before outputs have been created. This will not be\nbroadcast from this node if bInAutoCookEnabled is false." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoCook = { "PostAutoCook", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PostAutoCook), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoCook_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreProcess_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast just after PostCook (after parameters have been updated) but before creating\n\x09 * output objects. This will not be broadcast from this node if bInAutoCookEnabled is false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast just after PostCook (after parameters have been updated) but before creating\noutput objects. This will not be broadcast from this node if bInAutoCookEnabled is false." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreProcess = { "PreProcess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PreProcess), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreProcess_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostProcessing_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after processing HDA outputs after a cook, the output objects have been created.\n\x09 * This will not be broadcast from this node if bInAutoCookEnabled is false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast after processing HDA outputs after a cook, the output objects have been created.\nThis will not be broadcast from this node if bInAutoCookEnabled is false." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostProcessing = { "PostProcessing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PostProcessing), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostProcessing_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoBake_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Delegate that is broadcast after auto-baking the asset (not called for individual outputs that are baked to the\n\x09 * content browser). This will not be broadcast from this node if bInAutoBake or bInAutoCookEnabled is false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Delegate that is broadcast after auto-baking the asset (not called for individual outputs that are baked to the\ncontent browser). This will not be broadcast from this node if bInAutoBake or bInAutoCookEnabled is false." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoBake = { "PostAutoBake", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, PostAutoBake), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoBake_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/**\n\x09 * Deletate that is broadcast on completion of async processing of the instantiated asset by this node.\n\x09 * After this broadcast, the instantiated asset will be deleted if bInDeleteInstantiatedAssetOnCompletion=true\n\x09 * was set on creation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Deletate that is broadcast on completion of async processing of the instantiated asset by this node.\nAfter this broadcast, the instantiated asset will be deleted if bInDeleteInstantiatedAssetOnCompletion=true\nwas set on creation." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, Completed), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Completed_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Failed_MetaData[] = {
		{ "Category", "Houdini|Public API" },
		{ "Comment", "/** Deletate that is broadcast if we fail during activation of the node. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Deletate that is broadcast if we fail during activation of the node." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, Failed), Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Failed_MetaData)) }; // 1556247320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_AssetWrapper_MetaData[] = {
		{ "Comment", "/** The asset wrapper for the instantiated HDA processed by this node. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The asset wrapper for the instantiated HDA processed by this node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_AssetWrapper = { "AssetWrapper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, AssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_AssetWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_AssetWrapper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess_MetaData[] = {
		{ "Comment", "/** True if the last cook was successful. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "True if the last cook was successful." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bCookSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess = { "bCookSuccess", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess_MetaData[] = {
		{ "Comment", "/** True if the last bake was successful. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "True if the last bake was successful." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bBakeSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess = { "bBakeSuccess", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "Comment", "/** The HDA to instantiate. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The HDA to instantiate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_InstantiateAt_MetaData[] = {
		{ "Comment", "/** The transform the instantiate the asset with. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The transform the instantiate the asset with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_InstantiateAt = { "InstantiateAt", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, InstantiateAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_InstantiateAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_InstantiateAt_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniParameterTuple, METADATA_PARAMS(nullptr, 0) }; // 2197323035
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** The parameters to set on #PreInstantiation */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The parameters to set on #PreInstantiation" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_MetaData)) }; // 2197323035
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_ValueProp = { "NodeInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_Key_KeyProp = { "NodeInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_MetaData[] = {
		{ "Comment", "/** The node inputs to set on #PostInstantiation */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The node inputs to set on #PostInstantiation" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs = { "NodeInputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, NodeInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_ValueProp = { "ParameterInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_Key_KeyProp = { "ParameterInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_MetaData[] = {
		{ "Comment", "/** The object path parameter inputs to set on #PostInstantiation */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The object path parameter inputs to set on #PostInstantiation" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs = { "ParameterInputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, ParameterInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "Comment", "/** The world context object: spawn in this world if #SpawnInLevelOverride is not set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The world context object: spawn in this world if #SpawnInLevelOverride is not set." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_SpawnInLevelOverride_MetaData[] = {
		{ "Comment", "/** The level to spawn in. If both this and #WorldContextObject is not set, spawn in the editor context's level. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The level to spawn in. If both this and #WorldContextObject is not set, spawn in the editor context's level." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_SpawnInLevelOverride = { "SpawnInLevelOverride", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, SpawnInLevelOverride), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_SpawnInLevelOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_SpawnInLevelOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook_MetaData[] = {
		{ "Comment", "/** Whether to set the instantiated asset to auto cook. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Whether to set the instantiated asset to auto cook." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bEnableAutoCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook = { "bEnableAutoCook", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake_MetaData[] = {
		{ "Comment", "/** Whether to set the instantiated asset to auto bake after a cook. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Whether to set the instantiated asset to auto bake after a cook." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bEnableAutoBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake = { "bEnableAutoBake", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeDirectoryPath_MetaData[] = {
		{ "Comment", "/** Set the fallback bake directory, for if output attributes do not specify it. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Set the fallback bake directory, for if output attributes do not specify it." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeDirectoryPath = { "BakeDirectoryPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, BakeDirectoryPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeDirectoryPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod_MetaData[] = {
		{ "Comment", "/** The bake method/target: for example, to actors vs to blueprints. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "The bake method/target: for example, to actors vs to blueprints." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod = { "BakeMethod", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, BakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod_MetaData)) }; // 3229896027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake_MetaData[] = {
		{ "Comment", "/** Remove temporary HDA output after a bake. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Remove temporary HDA output after a bake." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bRemoveOutputAfterBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake = { "bRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors_MetaData[] = {
		{ "Comment", "/** Recenter the baked actors at their bounding box center. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Recenter the baked actors at their bounding box center." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake_MetaData[] = {
		{ "Comment", "/**\n\x09 * Replace previous bake output on each bake. For the purposes of this node, this would mostly apply to .uassets and\n\x09 * not actors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Replace previous bake output on each bake. For the purposes of this node, this would mostly apply to .uassets and\nnot actors." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bReplacePreviousBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake = { "bReplacePreviousBake", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_MetaData[] = {
		{ "Comment", "/** Whether or not to delete the instantiated asset after Complete is called. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIProcessHDANode.h" },
		{ "ToolTip", "Whether or not to delete the instantiated asset after Complete is called." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIProcessHDANode*)Obj)->bDeleteInstantiatedAssetOnCompletionOrFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure = { "bDeleteInstantiatedAssetOnCompletionOrFailure", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIProcessHDANode), &Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreInstantiation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostInstantiation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PreProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostProcessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_PostAutoBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Failed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_AssetWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bCookSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bBakeSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_HoudiniAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_InstantiateAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_NodeInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_ParameterInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_SpawnInLevelOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bEnableAutoBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_BakeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRemoveOutputAfterBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bReplacePreviousBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::NewProp_bDeleteInstantiatedAssetOnCompletionOrFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIProcessHDANode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::ClassParams = {
		&UHoudiniPublicAPIProcessHDANode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIProcessHDANode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIProcessHDANode.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIProcessHDANode.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIProcessHDANode>()
	{
		return UHoudiniPublicAPIProcessHDANode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIProcessHDANode);
	UHoudiniPublicAPIProcessHDANode::~UHoudiniPublicAPIProcessHDANode() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode, UHoudiniPublicAPIProcessHDANode::StaticClass, TEXT("UHoudiniPublicAPIProcessHDANode"), &Z_Registration_Info_UClass_UHoudiniPublicAPIProcessHDANode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIProcessHDANode), 2595327373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_303631569(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
