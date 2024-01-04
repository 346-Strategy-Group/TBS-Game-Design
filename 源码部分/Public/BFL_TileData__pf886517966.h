#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_TileType__pf886517966.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
#include "BFL_TileData__pf886517966.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Utilities/BFL_TileData.BFL_TileData_C", OverrideNativeName="BFL_TileData_C"))
class UBFL_TileData_C__pf886517966 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBFL_TileData_C__pf886517966(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="Is Tile Wakable"))
	static void bpf__IsxTilexWakable__pfTT(E__E_TileType__pf const& bpp__Type__pf__const, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__IsWalkable__pf);
public:
};
