#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_TileType__pf886517966.h"
#include "E_TileState__pf886517966.h"
#include "S_Tile_Data__pf886517966.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Utilities/S_Tile_Data.S_Tile_Data", OverrideNativeName="S_Tile_Data"))
struct FS_Tile_Data__pf886517966
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Index", Tooltip, OverrideNativeName="Index_4_8B807B2E4D9C2A5077F8F3993D8978A5"))
	FIntPoint bpv__Index_4_8B807B2E4D9C2A5077F8F3993D8978A5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type", Tooltip, OverrideNativeName="Type_6_C010CE7246E1DA6A035162837E7D0F75"))
	E__E_TileType__pf bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transform", Tooltip, OverrideNativeName="Transform_8_5DA78643471C62D3691412BB7714ED33"))
	FTransform bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="States", Tooltip, OverrideNativeName="States_12_119DF8DE488DA3062762FD9A7AB87EC4"))
	TArray<E__E_TileState__pf> bpv__States_12_119DF8DE488DA3062762FD9A7AB87EC4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PreNode", Tooltip, OverrideNativeName="PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D"))
	FIntPoint bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf;
	FS_Tile_Data__pf886517966();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_Tile_Data__pf886517966& __Other) const
	{
		return FS_Tile_Data__pf886517966::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
