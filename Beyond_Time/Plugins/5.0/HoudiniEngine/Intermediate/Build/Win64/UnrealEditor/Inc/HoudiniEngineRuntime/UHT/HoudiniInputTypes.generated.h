// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniInputTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniInputTypes_generated_h
#error "HoudiniInputTypes.generated.h already included, missing '#pragma once' in HoudiniInputTypes.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniInputTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h


#define FOREACH_ENUM_EHOUDINIXFORMTYPE(op) \
	op(EHoudiniXformType::None) \
	op(EHoudiniXformType::IntoThisObject) \
	op(EHoudiniXformType::Auto) 

enum class EHoudiniXformType : uint8;
template<> struct TIsUEnumClass<EHoudiniXformType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
