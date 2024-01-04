#include "NativizedAssets.h"
#include "E_HeroAnimationWarrior__pf1448998623.h"
FText E__E_HeroAnimationWarrior__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_HeroAnimationWarrior__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_HeroAnimationWarrior__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"1839A54C48B673D89D4CD4A989265F2F\", \"Idle\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"5A6B1C774517F53F35D183BE191939EA\", \"Walk\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"B0E4E8474800A3983B5D0C9B85A2BBAC\", \"Attack\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"DD6A375142B5BF371A804CB4760F0601\", \"Hit\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"211371204DC8300745FA838F1A9528F6\", \"Death\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[454FE01145707F9EF56A99AC8AAB99B6]\", \"7D98E2A841017823725DA5AFB50AF4B7\", \"Respawn\")"), Text); break;
		case E__E_HeroAnimationWarrior__pf::E__E_HeroAnimationWarrior__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
