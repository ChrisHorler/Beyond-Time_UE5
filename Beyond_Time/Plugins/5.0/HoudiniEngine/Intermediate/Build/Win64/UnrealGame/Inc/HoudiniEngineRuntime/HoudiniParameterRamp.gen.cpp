// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterRamp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRamp() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus;
	static UEnum* EHoudiniRampPointConstructStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampPointConstructStatus"));
		}
		return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampPointConstructStatus>()
	{
		return EHoudiniRampPointConstructStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators[] = {
		{ "EHoudiniRampPointConstructStatus::None", (int64)EHoudiniRampPointConstructStatus::None },
		{ "EHoudiniRampPointConstructStatus::INITIALIZED", (int64)EHoudiniRampPointConstructStatus::INITIALIZED },
		{ "EHoudiniRampPointConstructStatus::POSITION_INSERTED", (int64)EHoudiniRampPointConstructStatus::POSITION_INSERTED },
		{ "EHoudiniRampPointConstructStatus::VALUE_INSERTED", (int64)EHoudiniRampPointConstructStatus::VALUE_INSERTED },
		{ "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED", (int64)EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams[] = {
		{ "INITIALIZED.Name", "EHoudiniRampPointConstructStatus::INITIALIZED" },
		{ "INTERPTYPE_INSERTED.Name", "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
		{ "None.Name", "EHoudiniRampPointConstructStatus::None" },
		{ "POSITION_INSERTED.Name", "EHoudiniRampPointConstructStatus::POSITION_INSERTED" },
		{ "VALUE_INSERTED.Name", "EHoudiniRampPointConstructStatus::VALUE_INSERTED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniRampPointConstructStatus",
		"EHoudiniRampPointConstructStatus",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton;
	}
	void UHoudiniParameterRampModificationEvent::StaticRegisterNativesUHoudiniParameterRampModificationEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampModificationEvent);
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInsertEvent_MetaData[];
#endif
		static void NewProp_bIsInsertEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInsertEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFloatRamp_MetaData[];
#endif
		static void NewProp_bIsFloatRamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFloatRamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeleteInstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeleteInstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InsertColor;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_InsertInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsInsertEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent = { "bIsInsertEvent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsFloatRamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp = { "bIsFloatRamp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex = { "DeleteInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, DeleteInstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertPosition), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat = { "InsertFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertFloat), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor = { "InsertColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation = { "InsertInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertInterpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData)) }; // 3255016069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampModificationEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams = {
		&UHoudiniParameterRampModificationEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampModificationEvent>()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampModificationEvent);
	void UHoudiniParameterRampFloatPoint::StaticRegisterNativesUHoudiniParameterRampFloatPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampFloatPoint);
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister()
	{
		return UHoudiniParameterRampFloatPoint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Position), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Value), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData)) }; // 3255016069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloatPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams = {
		&UHoudiniParameterRampFloatPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloatPoint>()
	{
		return UHoudiniParameterRampFloatPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloatPoint);
	void UHoudiniParameterRampColorPoint::StaticRegisterNativesUHoudiniParameterRampColorPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampColorPoint);
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Position), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData)) }; // 3255016069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColorPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams = {
		&UHoudiniParameterRampColorPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColorPoint>()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColorPoint);
	void UHoudiniParameterRampFloat::StaticRegisterNativesUHoudiniParameterRampFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampFloat);
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister()
	{
		return UHoudiniParameterRampFloat::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[];
#endif
		static void NewProp_bCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaching;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, NumDefaultPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit(void* Obj)
	{
		((UHoudiniParameterRampFloat*)Obj)->bCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampFloat), &Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams = {
		&UHoudiniParameterRampFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloat()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloat>()
	{
		return UHoudiniParameterRampFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloat);
	void UHoudiniParameterRampColor::StaticRegisterNativesUHoudiniParameterRampColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampColor);
	UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister()
	{
		return UHoudiniParameterRampColor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[];
#endif
		static void NewProp_bCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit(void* Obj)
	{
		((UHoudiniParameterRampColor*)Obj)->bCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampColor), &Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, NumDefaultPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams = {
		&UHoudiniParameterRampColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampColor()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColor>()
	{
		return UHoudiniParameterRampColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::EnumInfo[] = {
		{ EHoudiniRampPointConstructStatus_StaticEnum, TEXT("EHoudiniRampPointConstructStatus"), &Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2661235210U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterRampModificationEvent, UHoudiniParameterRampModificationEvent::StaticClass, TEXT("UHoudiniParameterRampModificationEvent"), &Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampModificationEvent), 2991271356U) },
		{ Z_Construct_UClass_UHoudiniParameterRampFloatPoint, UHoudiniParameterRampFloatPoint::StaticClass, TEXT("UHoudiniParameterRampFloatPoint"), &Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampFloatPoint), 2520062106U) },
		{ Z_Construct_UClass_UHoudiniParameterRampColorPoint, UHoudiniParameterRampColorPoint::StaticClass, TEXT("UHoudiniParameterRampColorPoint"), &Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampColorPoint), 721508369U) },
		{ Z_Construct_UClass_UHoudiniParameterRampFloat, UHoudiniParameterRampFloat::StaticClass, TEXT("UHoudiniParameterRampFloat"), &Z_Registration_Info_UClass_UHoudiniParameterRampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampFloat), 631872280U) },
		{ Z_Construct_UClass_UHoudiniParameterRampColor, UHoudiniParameterRampColor::StaticClass, TEXT("UHoudiniParameterRampColor"), &Z_Registration_Info_UClass_UHoudiniParameterRampColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampColor), 3423723181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_2032531458(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
