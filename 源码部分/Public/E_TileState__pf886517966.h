#pragma once
#include "E_TileState__pf886517966.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Utilities/E_TileState.E_TileState", OverrideNativeName="E_TileState", EnumDisplayNameFn="E__E_TileState__pf__GetUserFriendlyName") )
enum class E__E_TileState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_TileState::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_TileState::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_TileState::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_TileState::NewEnumerator3"),
	E__E_TileState__pf_MAX = 4 UMETA(OverrideName = "E_TileState::E_MAX"),
};
FText E__E_TileState__pf__GetUserFriendlyName(int32 InValue);
