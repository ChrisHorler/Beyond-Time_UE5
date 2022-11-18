// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIObjectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIObjectBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase_NoRegister();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption;
	static UEnum* EHoudiniPublicAPIErrorLogOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPIErrorLogOption"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIErrorLogOption>()
	{
		return EHoudiniPublicAPIErrorLogOption_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enumerators[] = {
		{ "EHoudiniPublicAPIErrorLogOption::Invalid", (int64)EHoudiniPublicAPIErrorLogOption::Invalid },
		{ "EHoudiniPublicAPIErrorLogOption::Auto", (int64)EHoudiniPublicAPIErrorLogOption::Auto },
		{ "EHoudiniPublicAPIErrorLogOption::Log", (int64)EHoudiniPublicAPIErrorLogOption::Log },
		{ "EHoudiniPublicAPIErrorLogOption::NoLog", (int64)EHoudiniPublicAPIErrorLogOption::NoLog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EHoudiniPublicAPIErrorLogOption::Auto" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** An enum with values that determine if API errors are logged. */" },
		{ "Invalid.Name", "EHoudiniPublicAPIErrorLogOption::Invalid" },
		{ "Log.Name", "EHoudiniPublicAPIErrorLogOption::Log" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "NoLog.Name", "EHoudiniPublicAPIErrorLogOption::NoLog" },
		{ "ToolTip", "An enum with values that determine if API errors are logged." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPublicAPIErrorLogOption",
		"EHoudiniPublicAPIErrorLogOption",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execSetErrorMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InErrorMessage);
		P_GET_ENUM(EHoudiniPublicAPIErrorLogOption,Z_Param_InLoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetErrorMessage_Implementation(Z_Param_InErrorMessage,EHoudiniPublicAPIErrorLogOption(Z_Param_InLoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execSetLoggingErrorsEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoggingErrorsEnabled_Implementation(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execIsLoggingErrors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoggingErrors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execClearErrorMessages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearErrorMessages_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execGetLastErrorMessage)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLastErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastErrorMessage_Implementation(Z_Param_Out_OutLastErrorMessage);
		P_NATIVE_END;
	}
	struct HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms
	{
		FString OutLastErrorMessage;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms
	{
		FString InErrorMessage;
		EHoudiniPublicAPIErrorLogOption InLoggingOption;
	};
	struct HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms
	{
		bool bInEnabled;
	};
	static FName NAME_UHoudiniPublicAPIObjectBase_ClearErrorMessages = FName(TEXT("ClearErrorMessages"));
	void UHoudiniPublicAPIObjectBase::ClearErrorMessages()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_ClearErrorMessages),NULL);
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_GetLastErrorMessage = FName(TEXT("GetLastErrorMessage"));
	bool UHoudiniPublicAPIObjectBase::GetLastErrorMessage(FString& OutLastErrorMessage) const
	{
		HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms Parms;
		Parms.OutLastErrorMessage=OutLastErrorMessage;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_GetLastErrorMessage),&Parms);
		OutLastErrorMessage=Parms.OutLastErrorMessage;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_IsLoggingErrors = FName(TEXT("IsLoggingErrors"));
	bool UHoudiniPublicAPIObjectBase::IsLoggingErrors() const
	{
		HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms Parms;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_IsLoggingErrors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_SetErrorMessage = FName(TEXT("SetErrorMessage"));
	void UHoudiniPublicAPIObjectBase::SetErrorMessage(const FString& InErrorMessage, const EHoudiniPublicAPIErrorLogOption InLoggingOption) const
	{
		HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms Parms;
		Parms.InErrorMessage=InErrorMessage;
		Parms.InLoggingOption=InLoggingOption;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_SetErrorMessage),&Parms);
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled = FName(TEXT("SetLoggingErrorsEnabled"));
	void UHoudiniPublicAPIObjectBase::SetLoggingErrorsEnabled(bool bInEnabled)
	{
		HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms Parms;
		Parms.bInEnabled=bInEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled),&Parms);
	}
	void UHoudiniPublicAPIObjectBase::StaticRegisterNativesUHoudiniPublicAPIObjectBase()
	{
		UClass* Class = UHoudiniPublicAPIObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearErrorMessages", &UHoudiniPublicAPIObjectBase::execClearErrorMessages },
			{ "GetLastErrorMessage", &UHoudiniPublicAPIObjectBase::execGetLastErrorMessage },
			{ "IsLoggingErrors", &UHoudiniPublicAPIObjectBase::execIsLoggingErrors },
			{ "SetErrorMessage", &UHoudiniPublicAPIObjectBase::execSetErrorMessage },
			{ "SetLoggingErrorsEnabled", &UHoudiniPublicAPIObjectBase::execSetLoggingErrorsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/** Clear any error messages that have been set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Clear any error messages that have been set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "ClearErrorMessages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutLastErrorMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_OutLastErrorMessage = { "OutLastErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms, OutLastErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_OutLastErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Gets the last error message recorded.\n\x09 * @param OutLastErrorMessage Set to the last error message recorded, or the empty string if there are no errors\n\x09 * messages.\n\x09 * @return true if there was an error message to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Gets the last error message recorded.\n@param OutLastErrorMessage Set to the last error message recorded, or the empty string if there are no errors\nmessages.\n@return true if there was an error message to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "GetLastErrorMessage", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Returns whether or not API errors are written to the log.\n\x09 * @return true if API errors are logged as warnings, false if API errors are not logged.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Returns whether or not API errors are written to the log.\n@return true if API errors are logged as warnings, false if API errors are not logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "IsLoggingErrors", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InErrorMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InLoggingOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLoggingOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InLoggingOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage = { "InErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms, InErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption = { "InLoggingOption", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms, InLoggingOption), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData)) }; // 282197824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Set an error message. This is recorded as the current/last error message.\n\x09 * @param InErrorMessage The error message to set.\n\x09 * @param InLoggingOption Determines the behavior around logging the error message. If\n\x09 * EHoudiniPublicAPIErrorLogOption.Invalid or EHoudiniPublicAPIErrorLogOption.Auto then IsLoggingErrors() is used to\n\x09 * determine if the error message should be logged. If EHoudiniPublicAPIErrorLogOption.Log, then the error message\n\x09 * is logged as a warning. If EHoudiniPublicAPIErrorLogOption.NoLog then the error message is not logged.\n\x09 */" },
		{ "CPP_Default_InLoggingOption", "Auto" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Set an error message. This is recorded as the current/last error message.\n@param InErrorMessage The error message to set.\n@param InLoggingOption Determines the behavior around logging the error message. If\nEHoudiniPublicAPIErrorLogOption.Invalid or EHoudiniPublicAPIErrorLogOption.Auto then IsLoggingErrors() is used to\ndetermine if the error message should be logged. If EHoudiniPublicAPIErrorLogOption.Log, then the error message\nis logged as a warning. If EHoudiniPublicAPIErrorLogOption.NoLog then the error message is not logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "SetErrorMessage", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEnabled_MetaData[];
#endif
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Sets whether or not API errors are written to the log.\n\x09 * @param bInEnabled True if API errors should be logged as warnings, false if API errors should not logged.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Sets whether or not API errors are written to the log.\n@param bInEnabled True if API errors should be logged as warnings, false if API errors should not logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "SetLoggingErrorsEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIObjectBase);
	UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase_NoRegister()
	{
		return UHoudiniPublicAPIObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasError_MetaData[];
#endif
		static void NewProp_bHasError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoggingErrors_MetaData[];
#endif
		static void NewProp_bIsLoggingErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoggingErrors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages, "ClearErrorMessages" }, // 2055308906
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage, "GetLastErrorMessage" }, // 222792862
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors, "IsLoggingErrors" }, // 695263943
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage, "SetErrorMessage" }, // 1811248199
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled, "SetLoggingErrorsEnabled" }, // 573982834
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for API UObjects. Implements error logging: record and get a error messages for Houdini Public API objects. \n */" },
		{ "IncludePath", "HoudiniPublicAPIObjectBase.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Base class for API UObjects. Implements error logging: record and get a error messages for Houdini Public API objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData[] = {
		{ "Comment", "/** The last error message that was set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "The last error message that was set." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage = { "LastErrorMessage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPublicAPIObjectBase, LastErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData[] = {
		{ "Comment", "/** True if an errors have been set and not yet cleared. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "True if an errors have been set and not yet cleared." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIObjectBase*)Obj)->bHasError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError = { "bHasError", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIObjectBase), &Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData[] = {
		{ "Comment", "/** If true, API errors logged with SetErrorMessage are written to the log as warnings by default. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "If true, API errors logged with SetErrorMessage are written to the log as warnings by default." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIObjectBase*)Obj)->bIsLoggingErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors = { "bIsLoggingErrors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPublicAPIObjectBase), &Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIObjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::ClassParams = {
		&UHoudiniPublicAPIObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPublicAPIObjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIObjectBase.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPublicAPIObjectBase.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIObjectBase>()
	{
		return UHoudiniPublicAPIObjectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIObjectBase);
	UHoudiniPublicAPIObjectBase::~UHoudiniPublicAPIObjectBase() {}
	struct Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::EnumInfo[] = {
		{ EHoudiniPublicAPIErrorLogOption_StaticEnum, TEXT("EHoudiniPublicAPIErrorLogOption"), &Z_Registration_Info_UEnum_EHoudiniPublicAPIErrorLogOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 282197824U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIObjectBase, UHoudiniPublicAPIObjectBase::StaticClass, TEXT("UHoudiniPublicAPIObjectBase"), &Z_Registration_Info_UClass_UHoudiniPublicAPIObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIObjectBase), 617795370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_3418197795(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
