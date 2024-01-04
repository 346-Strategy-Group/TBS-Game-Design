#include "NativizedAssets.h"
#include "E_HeroType__pf1448998623.h"
FText E__E_HeroType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_HeroType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_HeroType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C385863F4F48BFBA4BF33AA28D924A62]\", \"6C00BA6B45A6CD52F51FF0B74659CE5A\", \"Warrior\")"), Text); break;
		case E__E_HeroType__pf::E__E_HeroType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
