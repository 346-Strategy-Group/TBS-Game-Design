#pragma once
#include "E_Grid_Shape__pf3764965557.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Core/Grid/Grid_Shapes/E_Grid_Shape.E_Grid_Shape", OverrideNativeName="E_Grid_Shape", EnumDisplayNameFn="E__E_Grid_Shape__pf__GetUserFriendlyName") )
enum class E__E_Grid_Shape__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Grid_Shape::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Grid_Shape::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_Grid_Shape::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_Grid_Shape::NewEnumerator3"),
	E__E_Grid_Shape__pf_MAX = 4 UMETA(OverrideName = "E_Grid_Shape::E_Grid_MAX"),
};
FText E__E_Grid_Shape__pf__GetUserFriendlyName(int32 InValue);
