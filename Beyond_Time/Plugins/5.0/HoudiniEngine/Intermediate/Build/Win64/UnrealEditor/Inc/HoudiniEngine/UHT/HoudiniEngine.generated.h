// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniEngine_generated_h
#error "HoudiniEngine.generated.h already included, missing '#pragma once' in HoudiniEngine.h"
#endif
#define HOUDINIENGINE_HoudiniEngine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Yerio_Desktop_Beyond_Time_UE5_Beyond_Time_Plugins_5_0_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h


#define FOREACH_ENUM_EHOUDINISESSIONSTATUS(op) \
	op(EHoudiniSessionStatus::Invalid) \
	op(EHoudiniSessionStatus::NotStarted) \
	op(EHoudiniSessionStatus::Connected) \
	op(EHoudiniSessionStatus::None) \
	op(EHoudiniSessionStatus::Stopped) \
	op(EHoudiniSessionStatus::Failed) \
	op(EHoudiniSessionStatus::Lost) \
	op(EHoudiniSessionStatus::NoLicense) 

enum class EHoudiniSessionStatus : int8;
template<> struct TIsUEnumClass<EHoudiniSessionStatus> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
