// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IHoudiniAssetStateEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_IHoudiniAssetStateEvents_generated_h
#error "IHoudiniAssetStateEvents.generated.h already included, missing '#pragma once' in IHoudiniAssetStateEvents.h"
#endif
#define HOUDINIENGINERUNTIME_IHoudiniAssetStateEvents_generated_h

#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_SPARSE_DATA
#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_RPC_WRAPPERS
#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ACCESSORS
#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetStateEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetStateEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetStateEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetStateEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetStateEvents(UHoudiniAssetStateEvents&&); \
	NO_API UHoudiniAssetStateEvents(const UHoudiniAssetStateEvents&); \
public: \
	NO_API virtual ~UHoudiniAssetStateEvents();


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetStateEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetStateEvents(UHoudiniAssetStateEvents&&); \
	NO_API UHoudiniAssetStateEvents(const UHoudiniAssetStateEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetStateEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetStateEvents); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetStateEvents) \
	NO_API virtual ~UHoudiniAssetStateEvents();


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHoudiniAssetStateEvents(); \
	friend struct Z_Construct_UClass_UHoudiniAssetStateEvents_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetStateEvents, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetStateEvents)


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_UINTERFACE_BODY() \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_UINTERFACE_BODY() \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHoudiniAssetStateEvents() {} \
public: \
	typedef UHoudiniAssetStateEvents UClassType; \
	typedef IHoudiniAssetStateEvents ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE \
protected: \
	virtual ~IHoudiniAssetStateEvents() {} \
public: \
	typedef UHoudiniAssetStateEvents UClassType; \
	typedef IHoudiniAssetStateEvents ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_39_PROLOG
#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_SPARSE_DATA \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_RPC_WRAPPERS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ACCESSORS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_SPARSE_DATA \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ACCESSORS \
	FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniAssetStateEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Repository_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
