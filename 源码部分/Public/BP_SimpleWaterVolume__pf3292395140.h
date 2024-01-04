#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UDecalComponent;
class UPostProcessComponent;
class UBoxComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
#include "BP_SimpleWaterVolume__pf3292395140.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/LUSH_StylizedEnvironmentSet/Water/BP_SimpleWaterVolume.BP_SimpleWaterVolume_C", OverrideNativeName="BP_SimpleWaterVolume_C"))
class ABP_SimpleWaterVolume_C__pf3292395140 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="WaterVolume"))
	UStaticMeshComponent* bpv__WaterVolume__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="WaterCaustics"))
	UDecalComponent* bpv__WaterCaustics__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="PP_Underwater"))
	UPostProcessComponent* bpv__PP_Underwater__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="PPV_Underwater"))
	UBoxComponent* bpv__PPV_Underwater__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="WaterSurface"))
	UStaticMeshComponent* bpv__WaterSurface__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Extent", Category="Properties|Volume", MultiLine="true", MakeEditWidget="true", OverrideNativeName="Extent"))
	FVector bpv__Extent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Depth", Category="Properties|Volume", MultiLine="true", UIMin="0", ClampMin="0", OverrideNativeName="Depth"))
	float bpv__Depth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="DMI Water", Category="Dynamic Material Instances", MultiLine="true", OverrideNativeName="DMI_Water"))
	UMaterialInstanceDynamic* bpv__DMI_Water__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="DMI Underwater", Category="Dynamic Material Instances", MultiLine="true", OverrideNativeName="DMI_Underwater"))
	UMaterialInstanceDynamic* bpv__DMI_Underwater__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="DMI Caustics", Category="Dynamic Material Instances", MultiLine="true", OverrideNativeName="DMI_Caustics"))
	UMaterialInstanceDynamic* bpv__DMI_Caustics__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Material", Category="属性们", MultiLine="true", tooltip="Should be an instance of \'M_Water_Base\'", OverrideNativeName="WaterMaterial"))
	UMaterialInterface* bpv__WaterMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Absorption Color", Category="Properties", MultiLine="true", OverrideNativeName="AbsorptionColor"))
	FLinearColor bpv__AbsorptionColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scattering Color", Category="属性们", MultiLine="true", OverrideNativeName="ScatteringColor"))
	FLinearColor bpv__ScatteringColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Scattering", Category="属性们", MultiLine="true", UIMin="0", UIMax="1", OverrideNativeName="WaterScattering"))
	float bpv__WaterScattering__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Near Clip Plane", Category="Properties|Essential", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="NearClipPlane"))
	float bpv__NearClipPlane__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Render Underwater", Category="Properties|Underwater", MultiLine="true", OverrideNativeName="RenderUnderwater"))
	bool bpv__RenderUnderwater__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Underwater Material", Category="Properties|Underwater", MultiLine="true", tooltip="Should be an instance of \'PPM_Underwater\'", OverrideNativeName="UnderwaterMaterial"))
	UMaterialInterface* bpv__UnderwaterMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fog Tint", Category="Properties|Underwater", MultiLine="true", OverrideNativeName="FogTint"))
	FLinearColor bpv__FogTint__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Under Water Fog Density", Category="Properties|Underwater", MultiLine="true", UIMin="0", OverrideNativeName="UnderWaterFogDensity"))
	float bpv__UnderWaterFogDensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Num Of Waves", Category="Properties|Shore Waves", MultiLine="true", OverrideNativeName="NumOfWaves"))
	int32 bpv__NumOfWaves__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wave Opacity", Category="Properties|Shore Waves", MultiLine="true", OverrideNativeName="WaveOpacity"))
	float bpv__WaveOpacity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wave Distance", Category="Properties|Shore Waves", MultiLine="true", OverrideNativeName="WaveDistance"))
	float bpv__WaveDistance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wave Speed", Category="Properties|Shore Waves", MultiLine="true", OverrideNativeName="WaveSpeed"))
	float bpv__WaveSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enable Caustics", Category="Properties|Caustics", MultiLine="true", OverrideNativeName="EnableCaustics"))
	bool bpv__EnableCaustics__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Caustics Material", Category="Properties|Caustics", MultiLine="true", tooltip="Should be an instance of \'M_D_Caustics\'", OverrideNativeName="CausticsMaterial"))
	UMaterialInterface* bpv__CausticsMaterial__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Caustics Intensity", Category="Properties|Caustics", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="CausticsIntensity"))
	float bpv__CausticsIntensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Caustics Tilling Size", Category="Properties|Caustics", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="CausticsTillingSize"))
	float bpv__CausticsTillingSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Color Darkness", Category="属性们", MultiLine="true", OverrideNativeName="WaterColorDarkness"))
	float bpv__WaterColorDarkness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Tilling Size", Category="Properties", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="WaterTillingSize"))
	float bpv__WaterTillingSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Normal Intensity", Category="Properties", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="NormalIntensity"))
	float bpv__NormalIntensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Caustics Distortion Speed", Category="Properties|Caustics", MultiLine="true", ClampMin="0", UIMin="0", OverrideNativeName="CausticsDistortionSpeed"))
	float bpv__CausticsDistortionSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="DMI Volume", Category="Dynamic Material Instances", MultiLine="true", OverrideNativeName="DMI_Volume"))
	UMaterialInstanceDynamic* bpv__DMI_Volume__pf;
	ABP_SimpleWaterVolume_C__pf3292395140(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
