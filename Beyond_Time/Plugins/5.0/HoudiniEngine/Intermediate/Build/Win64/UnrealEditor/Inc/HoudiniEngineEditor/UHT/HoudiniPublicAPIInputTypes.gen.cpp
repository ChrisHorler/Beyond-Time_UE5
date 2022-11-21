// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIInputTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execGetInputObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjects_Implementation(Z_Param_Out_OutObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execSetInputObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputObjects_Implementation(Z_Param_Out_InObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execIsAcceptableObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAcceptableObjectForInput_Implementation(Z_Param_InObject);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPIInput_eventGetInputObjects_Parms
	{
		TArray<UObject*> OutObjects;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIInput_eventGetInputObjects_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms
	{
		UObject* InObject;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIInput_eventSetInputObjects_Parms
	{
		TArray<UObject*> InObjects;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIInput_eventSetInputObjects_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UHoudiniPublicAPIInput_GetInputObjects = FName(TEXT("GetInputObjects"));
	bool UHoudiniPublicAPIInput::GetInputObjects(TArray<UObject*>& OutObjects)
	{
		HoudiniPublicAPIInput_eventGetInputObjects_Parms Parms;
		Parms.OutObjects=OutObjects;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_GetInputObjects),&Parms);
		OutObjects=Parms.OutObjects;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput = FName(TEXT("IsAcceptableObjectForInput"));
	bool UHoudiniPublicAPIInput::IsAcceptableObjectForInput(UObject* InObject) const
	{
		HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms Parms;
		Parms.InObject=InObject;
		const_cast<UHoudiniPublicAPIInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIInput_SetInputObjects = FName(TEXT("SetInputObjects"));
	bool UHoudiniPublicAPIInput::SetInputObjects(TArray<UObject*> const& InObjects)
	{
		HoudiniPublicAPIInput_eventSetInputObjects_Parms Parms;
		Parms.InObjects=InObjects;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_SetInputObjects),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIInput::StaticRegisterNativesUHoudiniPublicAPIInput()
	{
		UClass* Class = UHoudiniPublicAPIInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputObjects", &UHoudiniPublicAPIInput::execGetInputObjects },
			{ "IsAcceptableObjectForInput", &UHoudiniPublicAPIInput::execIsAcceptableObjectForInput },
			{ "SetInputObjects", &UHoudiniPublicAPIInput::execSetInputObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIInput_eventGetInputObjects_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventGetInputObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Gets the currently assigned input objects.\n\x09 * @param OutObjects The current input objects of this input.\n\x09 * @return true if input objects were successfully added to OutObjects (even if there are no input objects).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Gets the currently assigned input objects.\n@param OutObjects The current input objects of this input.\n@return true if input objects were successfully added to OutObjects (even if there are no input objects)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "GetInputObjects", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Returns true if InObject is acceptable for this input type.\n\x09 * @param InObject The object to check for acceptance as an input object on this input.\n\x09 * @return true if InObject is acceptable for this input type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if InObject is acceptable for this input type.\n@param InObject The object to check for acceptance as an input object on this input.\n@return true if InObject is acceptable for this input type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "IsAcceptableObjectForInput", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIInput_eventSetInputObjects_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventSetInputObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Sets the specified objects as the input objects.\n\x09 * @param InObjects The objects to set as input objects for this input.\n\x09 * @return false if any object was incompatible (all compatible objects are added).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Sets the specified objects as the input objects.\n@param InObjects The objects to set as input objects for this input.\n@return false if any object was incompatible (all compatible objects are added)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "SetInputObjects", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister()
	{
		return UHoudiniPublicAPIInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepWorldTransform_MetaData[];
#endif
		static void NewProp_bKeepWorldTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects, "GetInputObjects" }, // 274322971
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput, "IsAcceptableObjectForInput" }, // 4252331134
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects, "SetInputObjects" }, // 1087934832
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n *\n * Each type of input has a derived class:\n *   - Geometry: UHoudiniPublicAPIGeoInput\n *   - Asset: UHoudiniPublicAPIAssetInput\n *   - Curve: UHoudiniPublicAPICurveInput\n *   - World: UHoudiniPublicAPIWorldInput\n *   - Landscape: UHoudiniPublicAPILandscapeInput\n *\n * Each instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\n * used as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\n * a property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\n * instances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\n * UHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\n * A copy of the existing input state of an instantiated HDA can be fetched via\n * UHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter().\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n\nEach type of input has a derived class:\n  - Geometry: UHoudiniPublicAPIGeoInput\n  - Asset: UHoudiniPublicAPIAssetInput\n  - Curve: UHoudiniPublicAPICurveInput\n  - World: UHoudiniPublicAPIWorldInput\n  - Landscape: UHoudiniPublicAPILandscapeInput\n\nEach instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\nused as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\na property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\ninstances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\nUHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\nA copy of the existing input state of an instantiated HDA can be fetched via\nUHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value .*/" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value ." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIInput*)Obj)->bKeepWorldTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform = { "bKeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Indicates that all the input objects are imported to Houdini as references instead of actual geo\n\x09 * (for Geo/World/Asset input types only)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World/Asset input types only)" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIInput*)Obj)->bImportAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner = { "InputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData[] = {
		{ "Comment", "/** The input objects for this input. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The input objects for this input." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects = { "InputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIInput, InputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams = {
		&UHoudiniPublicAPIInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIInput>()
	{
		return UHoudiniPublicAPIInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIInput);
	UHoudiniPublicAPIInput::~UHoudiniPublicAPIInput() {}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffsetArray)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutInputObjectTransformOffsetArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffsetArray_Implementation(Z_Param_Out_OutInputObjectTransformOffsetArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execSetInputObjectTransformOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execSetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms
	{
		int32 InInputObjectIndex;
		FTransform OutTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms
	{
		TArray<FTransform> OutInputObjectTransformOffsetArray;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms
	{
		UObject* InObject;
		FTransform OutTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms
	{
		int32 InInputObjectIndex;
		FTransform InTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms
	{
		UObject* InObject;
		FTransform InTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset = FName(TEXT("GetInputObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::GetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform& OutTransform) const
	{
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms Parms;
		Parms.InInputObjectIndex=InInputObjectIndex;
		Parms.OutTransform=OutTransform;
		const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray = FName(TEXT("GetInputObjectTransformOffsetArray"));
	bool UHoudiniPublicAPIGeoInput::GetInputObjectTransformOffsetArray(TArray<FTransform>& OutInputObjectTransformOffsetArray) const
	{
		HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms Parms;
		Parms.OutInputObjectTransformOffsetArray=OutInputObjectTransformOffsetArray;
		const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray),&Parms);
		OutInputObjectTransformOffsetArray=Parms.OutInputObjectTransformOffsetArray;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset = FName(TEXT("GetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::GetObjectTransformOffset(UObject* InObject, FTransform& OutTransform) const
	{
		HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.OutTransform=OutTransform;
		const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset = FName(TEXT("SetInputObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::SetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform const& InTransform)
	{
		HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms Parms;
		Parms.InInputObjectIndex=InInputObjectIndex;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset = FName(TEXT("SetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::SetObjectTransformOffset(UObject* InObject, FTransform const& InTransform)
	{
		HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIGeoInput::StaticRegisterNativesUHoudiniPublicAPIGeoInput()
	{
		UClass* Class = UHoudiniPublicAPIGeoInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffset },
			{ "GetInputObjectTransformOffsetArray", &UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffsetArray },
			{ "GetObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execGetObjectTransformOffset },
			{ "SetInputObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execSetInputObjectTransformOffset },
			{ "SetObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execSetObjectTransformOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to get a transform offset for.\n\x09 * @param OutTransform The transform offset that was fetched.\n\x09 * @return true if the index is valid and the was transform offset fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to get a transform offset for.\n@param OutTransform The transform offset that was fetched.\n@return true if the index is valid and the was transform offset fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetInputObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputObjectTransformOffsetArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputObjectTransformOffsetArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms, OutInputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Get the array of input object transforms.\n\x09 * @param OutInputObjectTransformOffsetArray The output array.\n\x09 * @return false if the input type does not support input object transform offsets. See SupportsTransformOffset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the array of input object transforms.\n@param OutInputObjectTransformOffsetArray The output array.\n@return false if the input type does not support input object transform offsets. See SupportsTransformOffset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetInputObjectTransformOffsetArray", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInputObjectTransformOffset instead." },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to set a transform offset for.\n\x09 * @param InTransform The transform offset to set.\n\x09 * @return true if the index is valid and the transform offset set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to set a transform offset for.\n@param InTransform The transform offset to set.\n@return true if the index is valid and the transform offset set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "SetInputObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetInputObjectTransformOffset instead." },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "SetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIGeoInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister()
	{
		return UHoudiniPublicAPIGeoInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[];
#endif
		static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[];
#endif
		static void NewProp_bExportLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[];
#endif
		static void NewProp_bExportSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[];
#endif
		static void NewProp_bExportColliders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsets_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputObjectTransformOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputObjectTransformOffsets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputObjectTransformOffsetArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset, "GetInputObjectTransformOffset" }, // 288891445
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray, "GetInputObjectTransformOffsetArray" }, // 335449871
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset, "GetObjectTransformOffset" }, // 4071766475
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset, "SetInputObjectTransformOffset" }, // 3433203924
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset, "SetObjectTransformOffset" }, // 1807643453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that the geometry must be packed before merging it into the input */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that the geometry must be packed before merging it into the input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bPackBeforeMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all LODs in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all sockets in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all colliders in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportColliders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp = { "InputObjectTransformOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use InputObjectTransformOffsetArray instead" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIGeoInput, InputObjectTransformOffsets_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData[] = {
		{ "Comment", "/** Transform offset per input object (by input object array index). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Transform offset per input object (by input object array index)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIGeoInput, InputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIGeoInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams = {
		&UHoudiniPublicAPIGeoInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIGeoInput>()
	{
		return UHoudiniPublicAPIGeoInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIGeoInput);
	UHoudiniPublicAPIGeoInput::~UHoudiniPublicAPIGeoInput() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType;
	static UEnum* EHoudiniPublicAPICurveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>()
	{
		return EHoudiniPublicAPICurveType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enumerators[] = {
		{ "EHoudiniPublicAPICurveType::Invalid", (int64)EHoudiniPublicAPICurveType::Invalid },
		{ "EHoudiniPublicAPICurveType::Polygon", (int64)EHoudiniPublicAPICurveType::Polygon },
		{ "EHoudiniPublicAPICurveType::Nurbs", (int64)EHoudiniPublicAPICurveType::Nurbs },
		{ "EHoudiniPublicAPICurveType::Bezier", (int64)EHoudiniPublicAPICurveType::Bezier },
		{ "EHoudiniPublicAPICurveType::Points", (int64)EHoudiniPublicAPICurveType::Points },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enum_MetaDataParams[] = {
		{ "Bezier.Name", "EHoudiniPublicAPICurveType::Bezier" },
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveType::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "Nurbs.Name", "EHoudiniPublicAPICurveType::Nurbs" },
		{ "Points.Name", "EHoudiniPublicAPICurveType::Points" },
		{ "Polygon.Name", "EHoudiniPublicAPICurveType::Polygon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPublicAPICurveType",
		"EHoudiniPublicAPICurveType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod;
	static UEnum* EHoudiniPublicAPICurveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveMethod"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>()
	{
		return EHoudiniPublicAPICurveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enumerators[] = {
		{ "EHoudiniPublicAPICurveMethod::Invalid", (int64)EHoudiniPublicAPICurveMethod::Invalid },
		{ "EHoudiniPublicAPICurveMethod::CVs", (int64)EHoudiniPublicAPICurveMethod::CVs },
		{ "EHoudiniPublicAPICurveMethod::Breakpoints", (int64)EHoudiniPublicAPICurveMethod::Breakpoints },
		{ "EHoudiniPublicAPICurveMethod::Freehand", (int64)EHoudiniPublicAPICurveMethod::Freehand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Breakpoints.Name", "EHoudiniPublicAPICurveMethod::Breakpoints" },
		{ "CVs.Name", "EHoudiniPublicAPICurveMethod::CVs" },
		{ "Freehand.Name", "EHoudiniPublicAPICurveMethod::Freehand" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveMethod::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPublicAPICurveMethod",
		"EHoudiniPublicAPICurveMethod",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization;
	static UEnum* EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveBreakpointParameterization"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveBreakpointParameterization>()
	{
		return EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enumerators[] = {
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Invalid", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Invalid },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Uniform", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Uniform },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Chord", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Chord },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Centripetal", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Centripetal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Centripetal.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Centripetal" },
		{ "Chord.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Chord" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "Uniform.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Uniform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPublicAPICurveBreakpointParameterization",
		"EHoudiniPublicAPICurveBreakpointParameterization",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveBreakpointParameterization)
	{
		P_GET_ENUM(EHoudiniPublicAPICurveBreakpointParameterization,Z_Param_InCurveBreakpointParameterization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveBreakpointParameterization_Implementation(EHoudiniPublicAPICurveBreakpointParameterization(Z_Param_InCurveBreakpointParameterization));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveBreakpointParameterization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniPublicAPICurveBreakpointParameterization*)Z_Param__Result=P_THIS->GetCurveBreakpointParameterization_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveMethod)
	{
		P_GET_ENUM(EHoudiniPublicAPICurveMethod,Z_Param_InCurveMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveMethod_Implementation(EHoudiniPublicAPICurveMethod(Z_Param_InCurveMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniPublicAPICurveMethod*)Z_Param__Result=P_THIS->GetCurveMethod_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveType)
	{
		P_GET_ENUM(EHoudiniPublicAPICurveType,Z_Param_InCurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveType_Implementation(EHoudiniPublicAPICurveType(Z_Param_InCurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniPublicAPICurveType*)Z_Param__Result=P_THIS->GetCurveType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetReversed)
	{
		P_GET_UBOOL(Z_Param_bInReversed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReversed_Implementation(Z_Param_bInReversed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetClosed)
	{
		P_GET_UBOOL(Z_Param_bInClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClosed_Implementation(Z_Param_bInClosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClosed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurvePoints)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutCurvePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurvePoints_Implementation(Z_Param_Out_OutCurvePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execClearCurvePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurvePoints_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execAppendCurvePoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InCurvePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendCurvePoint_Implementation(Z_Param_Out_InCurvePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurvePoints)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_InCurvePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurvePoints_Implementation(Z_Param_Out_InCurvePoints);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms
	{
		FTransform InCurvePoint;
	};
	struct HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms
	{
		EHoudiniPublicAPICurveBreakpointParameterization ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms()
			: ReturnValue((EHoudiniPublicAPICurveBreakpointParameterization)0)
		{
		}
	};
	struct HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms
	{
		EHoudiniPublicAPICurveMethod ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms()
			: ReturnValue((EHoudiniPublicAPICurveMethod)0)
		{
		}
	};
	struct HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms
	{
		TArray<FTransform> OutCurvePoints;
	};
	struct HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms
	{
		EHoudiniPublicAPICurveType ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms()
			: ReturnValue((EHoudiniPublicAPICurveType)0)
		{
		}
	};
	struct HoudiniPublicAPICurveInputObject_eventIsClosed_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPICurveInputObject_eventIsClosed_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPICurveInputObject_eventIsReversed_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPICurveInputObject_eventIsReversed_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPICurveInputObject_eventSetClosed_Parms
	{
		bool bInClosed;
	};
	struct HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms
	{
		EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization;
	};
	struct HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms
	{
		EHoudiniPublicAPICurveMethod InCurveMethod;
	};
	struct HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms
	{
		TArray<FTransform> InCurvePoints;
	};
	struct HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms
	{
		EHoudiniPublicAPICurveType InCurveType;
	};
	struct HoudiniPublicAPICurveInputObject_eventSetReversed_Parms
	{
		bool bInReversed;
	};
	static FName NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint = FName(TEXT("AppendCurvePoint"));
	void UHoudiniPublicAPICurveInputObject::AppendCurvePoint(FTransform const& InCurvePoint)
	{
		HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms Parms;
		Parms.InCurvePoint=InCurvePoint;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints = FName(TEXT("ClearCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::ClearCurvePoints()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints),NULL);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization = FName(TEXT("GetCurveBreakpointParameterization"));
	EHoudiniPublicAPICurveBreakpointParameterization UHoudiniPublicAPICurveInputObject::GetCurveBreakpointParameterization() const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod = FName(TEXT("GetCurveMethod"));
	EHoudiniPublicAPICurveMethod UHoudiniPublicAPICurveInputObject::GetCurveMethod() const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints = FName(TEXT("GetCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::GetCurvePoints(TArray<FTransform>& OutCurvePoints) const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms Parms;
		Parms.OutCurvePoints=OutCurvePoints;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints),&Parms);
		OutCurvePoints=Parms.OutCurvePoints;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveType = FName(TEXT("GetCurveType"));
	EHoudiniPublicAPICurveType UHoudiniPublicAPICurveInputObject::GetCurveType() const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_IsClosed = FName(TEXT("IsClosed"));
	bool UHoudiniPublicAPICurveInputObject::IsClosed() const
	{
		HoudiniPublicAPICurveInputObject_eventIsClosed_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsClosed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_IsReversed = FName(TEXT("IsReversed"));
	bool UHoudiniPublicAPICurveInputObject::IsReversed() const
	{
		HoudiniPublicAPICurveInputObject_eventIsReversed_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsReversed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetClosed = FName(TEXT("SetClosed"));
	void UHoudiniPublicAPICurveInputObject::SetClosed(bool bInClosed)
	{
		HoudiniPublicAPICurveInputObject_eventSetClosed_Parms Parms;
		Parms.bInClosed=bInClosed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetClosed),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization = FName(TEXT("SetCurveBreakpointParameterization"));
	void UHoudiniPublicAPICurveInputObject::SetCurveBreakpointParameterization(const EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms Parms;
		Parms.InCurveBreakpointParameterization=InCurveBreakpointParameterization;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod = FName(TEXT("SetCurveMethod"));
	void UHoudiniPublicAPICurveInputObject::SetCurveMethod(const EHoudiniPublicAPICurveMethod InCurveMethod)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms Parms;
		Parms.InCurveMethod=InCurveMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints = FName(TEXT("SetCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::SetCurvePoints(TArray<FTransform> const& InCurvePoints)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms Parms;
		Parms.InCurvePoints=InCurvePoints;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveType = FName(TEXT("SetCurveType"));
	void UHoudiniPublicAPICurveInputObject::SetCurveType(const EHoudiniPublicAPICurveType InCurveType)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms Parms;
		Parms.InCurveType=InCurveType;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveType),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetReversed = FName(TEXT("SetReversed"));
	void UHoudiniPublicAPICurveInputObject::SetReversed(bool bInReversed)
	{
		HoudiniPublicAPICurveInputObject_eventSetReversed_Parms Parms;
		Parms.bInReversed=bInReversed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetReversed),&Parms);
	}
	void UHoudiniPublicAPICurveInputObject::StaticRegisterNativesUHoudiniPublicAPICurveInputObject()
	{
		UClass* Class = UHoudiniPublicAPICurveInputObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendCurvePoint", &UHoudiniPublicAPICurveInputObject::execAppendCurvePoint },
			{ "ClearCurvePoints", &UHoudiniPublicAPICurveInputObject::execClearCurvePoints },
			{ "GetCurveBreakpointParameterization", &UHoudiniPublicAPICurveInputObject::execGetCurveBreakpointParameterization },
			{ "GetCurveMethod", &UHoudiniPublicAPICurveInputObject::execGetCurveMethod },
			{ "GetCurvePoints", &UHoudiniPublicAPICurveInputObject::execGetCurvePoints },
			{ "GetCurveType", &UHoudiniPublicAPICurveInputObject::execGetCurveType },
			{ "IsClosed", &UHoudiniPublicAPICurveInputObject::execIsClosed },
			{ "IsReversed", &UHoudiniPublicAPICurveInputObject::execIsReversed },
			{ "SetClosed", &UHoudiniPublicAPICurveInputObject::execSetClosed },
			{ "SetCurveBreakpointParameterization", &UHoudiniPublicAPICurveInputObject::execSetCurveBreakpointParameterization },
			{ "SetCurveMethod", &UHoudiniPublicAPICurveInputObject::execSetCurveMethod },
			{ "SetCurvePoints", &UHoudiniPublicAPICurveInputObject::execSetCurvePoints },
			{ "SetCurveType", &UHoudiniPublicAPICurveInputObject::execSetCurveType },
			{ "SetReversed", &UHoudiniPublicAPICurveInputObject::execSetReversed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCurvePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint = { "InCurvePoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms, InCurvePoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InCurvePoint" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Append a point to the end of this curve.\n\x09 * @param InCurvePoint The point to append.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Append a point to the end of this curve.\n@param InCurvePoint The point to append." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "AppendCurvePoint", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Remove all points from the curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Remove all points from the curve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "ClearCurvePoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(nullptr, 0) }; // 1888782344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Get the curve breakpoint parameterization, for example Uniform, or Chord. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the curve breakpoint parameterization, for example Uniform, or Chord." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveBreakpointParameterization", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(nullptr, 0) }; // 2520406394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Get the curve method, for example CVs, or freehand. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the curve method, for example CVs, or freehand." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveMethod", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCurvePoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCurvePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms, OutCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Get all points of the curve.\n\x09 * @param OutCurvePoints Set to a copy of all of the points of the curve.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get all points of the curve.\n@param OutCurvePoints Set to a copy of all of the points of the curve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurvePoints", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(nullptr, 0) }; // 1460190891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns the curve type (for example: polygon, nurbs, bezier) */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns the curve type (for example: polygon, nurbs, bezier)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveType", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns true if this is a closed curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if this is a closed curve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsClosed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns true if the curve is reversed. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if the curve is reversed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsReversed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInClosed_MetaData[];
#endif
		static void NewProp_bInClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInClosed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventSetClosed_Parms*)Obj)->bInClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed = { "bInClosed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set whether the curve is closed or not.\n\x09 * @param bInClosed The new closed setting for the curve: set to true if the curve is closed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set whether the curve is closed or not.\n@param bInClosed The new closed setting for the curve: set to true if the curve is closed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetClosed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveBreakpointParameterization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurveBreakpointParameterization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveBreakpointParameterization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization = { "InCurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms, InCurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_MetaData)) }; // 1888782344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09* Set the curve breakpoint parameterization, for example Uniform, or Chord.\n\x09* @param InCurveBreakpointParameterization The new curve method.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the curve breakpoint parameterization, for example Uniform, or Chord.\n@param InCurveBreakpointParameterization The new curve method." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveBreakpointParameterization", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod = { "InCurveMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms, InCurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData)) }; // 2520406394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the curve method, for example CVs, or freehand.\n\x09 * @param InCurveMethod The new curve method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the curve method, for example CVs, or freehand.\n@param InCurveMethod The new curve method." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveMethod", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InCurvePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner = { "InCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints = { "InCurvePoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms, InCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the points of the curve (replacing any previously set points with InCurvePoints).\n\x09 * @param InCurvePoints The new points to set / replace the curve's points with.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the points of the curve (replacing any previously set points with InCurvePoints).\n@param InCurvePoints The new points to set / replace the curve's points with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurvePoints", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType = { "InCurveType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms, InCurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData)) }; // 1460190891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the curve type (for example: polygon, nurbs, bezier).\n\x09 * @param InCurveType The new curve type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the curve type (for example: polygon, nurbs, bezier).\n@param InCurveType The new curve type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveType", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInReversed_MetaData[];
#endif
		static void NewProp_bInReversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReversed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventSetReversed_Parms*)Obj)->bInReversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed = { "bInReversed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set whether the curve is reversed or not.\n\x09 * @param bInReversed The new reversed setting for the curve: set to true if the curve is reversed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set whether the curve is reversed or not.\n@param bInReversed The new reversed setting for the curve: set to true if the curve is reversed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetReversed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPICurveInputObject);
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister()
	{
		return UHoudiniPublicAPICurveInputObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[];
#endif
		static void NewProp_bReversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBreakpointParameterization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBreakpointParameterization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveBreakpointParameterization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint, "AppendCurvePoint" }, // 2448867640
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints, "ClearCurvePoints" }, // 3629255720
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization, "GetCurveBreakpointParameterization" }, // 411907465
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod, "GetCurveMethod" }, // 3678915234
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints, "GetCurvePoints" }, // 3165209005
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType, "GetCurveType" }, // 2477720691
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed, "IsClosed" }, // 3343101375
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed, "IsReversed" }, // 3492013143
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed, "SetClosed" }, // 2017302565
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization, "SetCurveBreakpointParameterization" }, // 367908787
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod, "SetCurveMethod" }, // 368384493
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints, "SetCurvePoints" }, // 581984050
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType, "SetCurveType" }, // 4127180507
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed, "SetReversed" }, // 3724246780
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The control points of the curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The control points of the curve." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Whether the curve is closed (true) or not. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Whether the curve is closed (true) or not." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInputObject*)Obj)->bClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Whether the curve is reversed (true) or not. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Whether the curve is reversed (true) or not." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInputObject*)Obj)->bReversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The curve type (for example: polygon, nurbs, bezier). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The curve type (for example: polygon, nurbs, bezier)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData)) }; // 1460190891
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The curve method, for example CVs, or freehand. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The curve method, for example CVs, or freehand." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData)) }; // 2520406394
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The curve breakpoint parameterization, for example CVs, or freehand. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The curve breakpoint parameterization, for example CVs, or freehand." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization = { "CurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData)) }; // 1888782344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInputObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams = {
		&UHoudiniPublicAPICurveInputObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInputObject>()
	{
		return UHoudiniPublicAPICurveInputObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInputObject);
	UHoudiniPublicAPICurveInputObject::~UHoudiniPublicAPICurveInputObject() {}
	void UHoudiniPublicAPICurveInput::StaticRegisterNativesUHoudiniPublicAPICurveInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPICurveInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister()
	{
		return UHoudiniPublicAPICurveInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that if trigger cook automatically on curve Input spline modified */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that if trigger cook automatically on curve Input spline modified" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInput*)Obj)->bCookOnCurveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Set this to true to add rot and scale attributes on curve inputs. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInput*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Set this to true to use legacy input curves (i.e. curve::1.0). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set this to true to use legacy input curves (i.e. curve::1.0)." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInput*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams = {
		&UHoudiniPublicAPICurveInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInput>()
	{
		return UHoudiniPublicAPICurveInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInput);
	UHoudiniPublicAPICurveInput::~UHoudiniPublicAPICurveInput() {}
	void UHoudiniPublicAPIAssetInput::StaticRegisterNativesUHoudiniPublicAPIAssetInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIAssetInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput_NoRegister()
	{
		return UHoudiniPublicAPIAssetInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for asset inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for asset inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIAssetInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::ClassParams = {
		&UHoudiniPublicAPIAssetInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIAssetInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIAssetInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIAssetInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIAssetInput>()
	{
		return UHoudiniPublicAPIAssetInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIAssetInput);
	UHoudiniPublicAPIAssetInput::~UHoudiniPublicAPIAssetInput() {}
	void UHoudiniPublicAPIWorldInput::StaticRegisterNativesUHoudiniPublicAPIWorldInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIWorldInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister()
	{
		return UHoudiniPublicAPIWorldInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[];
#endif
		static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[];
#endif
		static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Objects used for automatic bound selection */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Objects used for automatic bound selection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that this world input is in \"BoundSelector\" mode */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that this world input is in \"BoundSelector\" mode" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIWorldInput*)Obj)->bIsWorldInputBoundSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that selected actors by the bound selectors should update automatically */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that selected actors by the bound selectors should update automatically" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIWorldInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Resolution used when converting unreal splines to houdini curves */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, UnrealSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIWorldInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams = {
		&UHoudiniPublicAPIWorldInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIWorldInput>()
	{
		return UHoudiniPublicAPIWorldInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIWorldInput);
	UHoudiniPublicAPIWorldInput::~UHoudiniPublicAPIWorldInput() {}
	void UHoudiniPublicAPILandscapeInput::StaticRegisterNativesUHoudiniPublicAPILandscapeInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPILandscapeInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_NoRegister()
	{
		return UHoudiniPublicAPILandscapeInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInputLandscape_MetaData[];
#endif
		static void NewProp_bUpdateInputLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInputLandscape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[];
#endif
		static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[];
#endif
		static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[];
#endif
		static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for landscape inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for landscape inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that the landscape input's source landscape should be updated instead of creating a new component */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that the landscape input's source landscape should be updated instead of creating a new component" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bUpdateInputLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape = { "bUpdateInputLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates if the landscape should be exported as heightfield, mesh or points */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates if the landscape should be exported as heightfield, mesh or points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPILandscapeInput, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData)) }; // 969116104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when landscape input is set to selection only. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when landscape input is set to selection only." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when the automatic selection of landscape component is active */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when the automatic selection of landscape component is active" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeAutoSelectComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when materials are to be exported. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when materials are to be exported." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when lightmap information export is desired. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when lightmap information export is desired." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when uvs should be exported in [0,1] space. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported in [0,1] space." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportNormalizedUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when uvs should be exported for each tile separately. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported for each tile separately." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportTileUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPILandscapeInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::ClassParams = {
		&UHoudiniPublicAPILandscapeInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPILandscapeInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPILandscapeInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPILandscapeInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPILandscapeInput>()
	{
		return UHoudiniPublicAPILandscapeInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPILandscapeInput);
	UHoudiniPublicAPILandscapeInput::~UHoudiniPublicAPILandscapeInput() {}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeometryCollectionInput::execGetInputObjectTransformOffsetArray)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutInputObjectTransformOffsetArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffsetArray_Implementation(Z_Param_Out_OutInputObjectTransformOffsetArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeometryCollectionInput::execGetInputObjectTransformOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeometryCollectionInput::execSetInputObjectTransformOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeometryCollectionInput::execGetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeometryCollectionInput::execSetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms
	{
		int32 InInputObjectIndex;
		FTransform OutTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms
	{
		TArray<FTransform> OutInputObjectTransformOffsetArray;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms
	{
		UObject* InObject;
		FTransform OutTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms
	{
		int32 InInputObjectIndex;
		FTransform InTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms
	{
		UObject* InObject;
		FTransform InTransform;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset = FName(TEXT("GetInputObjectTransformOffset"));
	bool UHoudiniPublicAPIGeometryCollectionInput::GetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform& OutTransform) const
	{
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms Parms;
		Parms.InInputObjectIndex=InInputObjectIndex;
		Parms.OutTransform=OutTransform;
		const_cast<UHoudiniPublicAPIGeometryCollectionInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray = FName(TEXT("GetInputObjectTransformOffsetArray"));
	bool UHoudiniPublicAPIGeometryCollectionInput::GetInputObjectTransformOffsetArray(TArray<FTransform>& OutInputObjectTransformOffsetArray) const
	{
		HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms Parms;
		Parms.OutInputObjectTransformOffsetArray=OutInputObjectTransformOffsetArray;
		const_cast<UHoudiniPublicAPIGeometryCollectionInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray),&Parms);
		OutInputObjectTransformOffsetArray=Parms.OutInputObjectTransformOffsetArray;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset = FName(TEXT("GetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeometryCollectionInput::GetObjectTransformOffset(UObject* InObject, FTransform& OutTransform) const
	{
		HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.OutTransform=OutTransform;
		const_cast<UHoudiniPublicAPIGeometryCollectionInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset = FName(TEXT("SetInputObjectTransformOffset"));
	bool UHoudiniPublicAPIGeometryCollectionInput::SetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform const& InTransform)
	{
		HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms Parms;
		Parms.InInputObjectIndex=InInputObjectIndex;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset = FName(TEXT("SetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeometryCollectionInput::SetObjectTransformOffset(UObject* InObject, FTransform const& InTransform)
	{
		HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIGeometryCollectionInput::StaticRegisterNativesUHoudiniPublicAPIGeometryCollectionInput()
	{
		UClass* Class = UHoudiniPublicAPIGeometryCollectionInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputObjectTransformOffset", &UHoudiniPublicAPIGeometryCollectionInput::execGetInputObjectTransformOffset },
			{ "GetInputObjectTransformOffsetArray", &UHoudiniPublicAPIGeometryCollectionInput::execGetInputObjectTransformOffsetArray },
			{ "GetObjectTransformOffset", &UHoudiniPublicAPIGeometryCollectionInput::execGetObjectTransformOffset },
			{ "SetInputObjectTransformOffset", &UHoudiniPublicAPIGeometryCollectionInput::execSetInputObjectTransformOffset },
			{ "SetObjectTransformOffset", &UHoudiniPublicAPIGeometryCollectionInput::execSetObjectTransformOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to get a transform offset for.\n\x09 * @param OutTransform The transform offset that was fetched.\n\x09 * @return true if the index is valid and the was transform offset fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to get a transform offset for.\n@param OutTransform The transform offset that was fetched.\n@return true if the index is valid and the was transform offset fetched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, nullptr, "GetInputObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputObjectTransformOffsetArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputObjectTransformOffsetArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms, OutInputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Get the array of input object transforms.\n\x09 * @param OutInputObjectTransformOffsetArray The output array.\n\x09 * @return false if the input type does not support input object transform offsets. See SupportsTransformOffset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the array of input object transforms.\n@param OutInputObjectTransformOffsetArray The output array.\n@return false if the input type does not support input object transform offsets. See SupportsTransformOffset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, nullptr, "GetInputObjectTransformOffsetArray", nullptr, nullptr, sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetInputObjectTransformOffsetArray_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInputObjectTransformOffset instead." },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, nullptr, "GetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeometryCollectionInput_eventGetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to set a transform offset for.\n\x09 * @param InTransform The transform offset to set.\n\x09 * @return true if the index is valid and the transform offset set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to set a transform offset for.\n@param InTransform The transform offset to set.\n@return true if the index is valid and the transform offset set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, nullptr, "SetInputObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeometryCollectionInput_eventSetInputObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetInputObjectTransformOffset instead." },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, nullptr, "SetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeometryCollectionInput_eventSetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIGeometryCollectionInput);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_NoRegister()
	{
		return UHoudiniPublicAPIGeometryCollectionInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsets_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputObjectTransformOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputObjectTransformOffsets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputObjectTransformOffsetArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffset, "GetInputObjectTransformOffset" }, // 3333754213
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetInputObjectTransformOffsetArray, "GetInputObjectTransformOffsetArray" }, // 2344599766
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_GetObjectTransformOffset, "GetObjectTransformOffset" }, // 439027811
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetInputObjectTransformOffset, "SetInputObjectTransformOffset" }, // 191220210
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeometryCollectionInput_SetObjectTransformOffset, "SetObjectTransformOffset" }, // 495178217
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for geometry collection inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for geometry collection inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp = { "InputObjectTransformOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use InputObjectTransformOffsetArray instead" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIGeometryCollectionInput, InputObjectTransformOffsets_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData[] = {
		{ "Comment", "/** Transform offset per input object (by input object array index). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Transform offset per input object (by input object array index)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIGeometryCollectionInput, InputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::NewProp_InputObjectTransformOffsetArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIGeometryCollectionInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::ClassParams = {
		&UHoudiniPublicAPIGeometryCollectionInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIGeometryCollectionInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIGeometryCollectionInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIGeometryCollectionInput.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIGeometryCollectionInput>()
	{
		return UHoudiniPublicAPIGeometryCollectionInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIGeometryCollectionInput);
	UHoudiniPublicAPIGeometryCollectionInput::~UHoudiniPublicAPIGeometryCollectionInput() {}
	struct Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::EnumInfo[] = {
		{ EHoudiniPublicAPICurveType_StaticEnum, TEXT("EHoudiniPublicAPICurveType"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1460190891U) },
		{ EHoudiniPublicAPICurveMethod_StaticEnum, TEXT("EHoudiniPublicAPICurveMethod"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2520406394U) },
		{ EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum, TEXT("EHoudiniPublicAPICurveBreakpointParameterization"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888782344U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIInput, UHoudiniPublicAPIInput::StaticClass, TEXT("UHoudiniPublicAPIInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIInput), 3046448890U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIGeoInput::StaticClass, TEXT("UHoudiniPublicAPIGeoInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIGeoInput), 3855169127U) },
		{ Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPICurveInputObject::StaticClass, TEXT("UHoudiniPublicAPICurveInputObject"), &Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPICurveInputObject), 2833217380U) },
		{ Z_Construct_UClass_UHoudiniPublicAPICurveInput, UHoudiniPublicAPICurveInput::StaticClass, TEXT("UHoudiniPublicAPICurveInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPICurveInput), 1631620798U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIAssetInput, UHoudiniPublicAPIAssetInput::StaticClass, TEXT("UHoudiniPublicAPIAssetInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIAssetInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIAssetInput), 2714237136U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIWorldInput::StaticClass, TEXT("UHoudiniPublicAPIWorldInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIWorldInput), 1786017910U) },
		{ Z_Construct_UClass_UHoudiniPublicAPILandscapeInput, UHoudiniPublicAPILandscapeInput::StaticClass, TEXT("UHoudiniPublicAPILandscapeInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPILandscapeInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPILandscapeInput), 1080046413U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIGeometryCollectionInput, UHoudiniPublicAPIGeometryCollectionInput::StaticClass, TEXT("UHoudiniPublicAPIGeometryCollectionInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIGeometryCollectionInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIGeometryCollectionInput), 1856703854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_810481464(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
