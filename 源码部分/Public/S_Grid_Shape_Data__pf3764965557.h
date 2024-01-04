#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UStaticMesh;
class UMaterialInstance;
#include "S_Grid_Shape_Data__pf3764965557.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Grid_Shapes/S_Grid_Shape_Data.S_Grid_Shape_Data", OverrideNativeName="S_Grid_Shape_Data"))
struct FS_Grid_Shape_Data__pf3764965557
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MeshSize", Tooltip, OverrideNativeName="MeshSize_2_150601254BFFA36F23D953B2A548FBD8"))
	FVector bpv__MeshSize_2_150601254BFFA36F23D953B2A548FBD8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh", Tooltip, OverrideNativeName="Mesh_7_BF5086784E7FB4DEF5AA1483C613D5EB"))
	UStaticMesh* bpv__Mesh_7_BF5086784E7FB4DEF5AA1483C613D5EB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MeshMaterial", Tooltip, OverrideNativeName="MeshMaterial_11_F8B632AC4C20DA4D1C6BD29477ADE44E"))
	UMaterialInstance* bpv__MeshMaterial_11_F8B632AC4C20DA4D1C6BD29477ADE44E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FlatMesh", Tooltip, OverrideNativeName="FlatMesh_12_BDC4F85043B8C78E2C716DA8A0582BED"))
	UStaticMesh* bpv__FlatMesh_12_BDC4F85043B8C78E2C716DA8A0582BED__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FlatMetiral", Tooltip, OverrideNativeName="FlatMetiral_17_AE20C76D40F9FF6D19F94587099F0F46"))
	UMaterialInstance* bpv__FlatMetiral_17_AE20C76D40F9FF6D19F94587099F0F46__pf;
	FS_Grid_Shape_Data__pf3764965557();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_Grid_Shape_Data__pf3764965557& __Other) const
	{
		return FS_Grid_Shape_Data__pf3764965557::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_Grid_Shape_Data__pf3764965557& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_Grid_Shape_Data__pf3764965557::StaticStruct()); }
};
