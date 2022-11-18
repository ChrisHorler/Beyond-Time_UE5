// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameter_generated_h
#error "HoudiniParameter.generated.h already included, missing '#pragma once' in HoudiniParameter.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameter_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniParameter(); \
	friend struct Z_Construct_UClass_UHoudiniParameter_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameter)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameter(); \
	friend struct Z_Construct_UClass_UHoudiniParameter_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameter)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniParameter(UHoudiniParameter&&); \
	NO_API UHoudiniParameter(const UHoudiniParameter&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniParameter(UHoudiniParameter&&); \
	NO_API UHoudiniParameter(const UHoudiniParameter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameter)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HoudiniParameter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h


#define FOREACH_ENUM_EHOUDINIPARAMETERTYPE(op) \
	op(EHoudiniParameterType::Invalid) \
	op(EHoudiniParameterType::Button) \
	op(EHoudiniParameterType::ButtonStrip) \
	op(EHoudiniParameterType::Color) \
	op(EHoudiniParameterType::ColorRamp) \
	op(EHoudiniParameterType::File) \
	op(EHoudiniParameterType::FileDir) \
	op(EHoudiniParameterType::FileGeo) \
	op(EHoudiniParameterType::FileImage) \
	op(EHoudiniParameterType::Float) \
	op(EHoudiniParameterType::FloatRamp) \
	op(EHoudiniParameterType::Folder) \
	op(EHoudiniParameterType::FolderList) \
	op(EHoudiniParameterType::Input) \
	op(EHoudiniParameterType::Int) \
	op(EHoudiniParameterType::IntChoice) \
	op(EHoudiniParameterType::Label) \
	op(EHoudiniParameterType::MultiParm) \
	op(EHoudiniParameterType::Separator) \
	op(EHoudiniParameterType::String) \
	op(EHoudiniParameterType::StringChoice) \
	op(EHoudiniParameterType::StringAssetRef) \
	op(EHoudiniParameterType::Toggle) 

enum class EHoudiniParameterType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
