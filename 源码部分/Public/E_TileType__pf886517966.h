#pragma once
#include "E_TileType__pf886517966.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Utilities/E_TileType.E_TileType", OverrideNativeName="E_TileType", EnumDisplayNameFn="E__E_TileType__pf__GetUserFriendlyName") )
enum class E__E_TileType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_TileType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_TileType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_TileType::NewEnumerator2"),
	E__E_TileType__pf_MAX = 3 UMETA(OverrideName = "E_TileType::E_MAX"),
};
FText E__E_TileType__pf__GetUserFriendlyName(int32 InValue);
