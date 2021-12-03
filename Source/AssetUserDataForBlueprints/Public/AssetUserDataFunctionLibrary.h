// Copyright Alex Stevens (@MilkyEngineer). All Rights Reserved.

#pragma once

class IInterface_AssetUserData;
class UAssetUserData;

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetUserDataFunctionLibrary.generated.h"

/**
 * Contains a bunch of helper methods for asset user data.
 */
UCLASS(MinimalAPI)
class UAssetUserDataFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Get an asset user data object of type class from the specified object */
	UFUNCTION(BlueprintCallable, Category = AssetUserData, meta = (DeterminesOutputType = "Class"))
	static UAssetUserData* GetAssetUserData(TScriptInterface<IInterface_AssetUserData> Object, UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<UAssetUserData> Class);

	/** Get all of the asset user data objects from the specified object */
	UFUNCTION(BlueprintCallable, Category = AssetUserData)
	static TArray<UAssetUserData*> GetAssetUserDataArray(TScriptInterface<IInterface_AssetUserData> Object);

	/** Adds an instance of the specified asset user class to an object, if the class already exists, returns the existing object (no duplicates). */
	UFUNCTION(BlueprintCallable, Category = AssetUserData, meta = (DeterminesOutputType = "Class"))
	static UAssetUserData* AddAssetUserData(TScriptInterface<IInterface_AssetUserData> Object, UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<UAssetUserData> Class);

	/** Removes an instance of the specified asset user data class from the object if it exists. */
	UFUNCTION(BlueprintCallable, Category = AssetUserData)
	static void RemoveAssetUserData(TScriptInterface<IInterface_AssetUserData> Object, UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<UAssetUserData> Class);
};
