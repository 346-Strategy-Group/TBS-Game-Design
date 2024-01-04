#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_HeroAnimationWarrior__pf1448998623.h"
#include "BPI_HeroAnimation__pf1448998623.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Art/Heros/BPI_HeroAnimation.BPI_HeroAnimation_C", OverrideNativeName="BPI_HeroAnimation_C"))
class UBPI_HeroAnimation_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_HeroAnimation_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SetHeroAnimationStates"))
	void bpf__SetHeroAnimationStates__pf(E__E_HeroAnimationWarrior__pf bpp__States__pf);
public:
};
