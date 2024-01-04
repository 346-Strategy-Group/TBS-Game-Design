#pragma once
#include "E_HeroType__pf1448998623.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Art/Heros/E_HeroType.E_HeroType", OverrideNativeName="E_HeroType", EnumDisplayNameFn="E__E_HeroType__pf__GetUserFriendlyName") )
enum class E__E_HeroType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_HeroType::NewEnumerator0"),
	E__E_HeroType__pf_MAX = 1 UMETA(OverrideName = "E_HeroType::E_MAX"),
};
FText E__E_HeroType__pf__GetUserFriendlyName(int32 InValue);
