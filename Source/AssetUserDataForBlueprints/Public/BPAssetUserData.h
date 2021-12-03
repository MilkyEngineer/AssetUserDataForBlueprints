// Copyright Alex Stevens (@MilkyEngineer). All Rights Reserved.

#pragma once

#include "Engine/AssetUserData.h"
#include "BPAssetUserData.generated.h"

/**
 * The BP exposed version of the native AssetUserData
 */
UCLASS(MinimalAPI, Blueprintable, BlueprintType, Abstract, DefaultToInstanced, editinlinenew, DisplayName="Asset User Data")
class UBPAssetUserData : public UAssetUserData
{
	GENERATED_BODY()
};
