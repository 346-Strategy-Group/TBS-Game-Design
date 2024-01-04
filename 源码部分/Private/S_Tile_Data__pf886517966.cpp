#include "NativizedAssets.h"
#include "S_Tile_Data__pf886517966.h"
FS_Tile_Data__pf886517966::FS_Tile_Data__pf886517966()
{
	bpv__Type_6_C010CE7246E1DA6A035162837E7D0F75__pf = E__E_TileType__pf::NewEnumerator0;
	bpv__Transform_8_5DA78643471C62D3691412BB7714ED33__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf.X = -1;
	bpv__PreNode_15_3FBA7FBF4B9A4160A7E8CB9C9229155D__pf.Y = -1;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_Tile_Data__pf886517966::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType 
		{3, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_Tile_Data__pf886517966
{
	FRegisterHelper__FS_Tile_Data__pf886517966()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Core/Grid/Utilities/S_Tile_Data"), &FS_Tile_Data__pf886517966::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_Tile_Data__pf886517966 Instance;
};
FRegisterHelper__FS_Tile_Data__pf886517966 FRegisterHelper__FS_Tile_Data__pf886517966::Instance;
