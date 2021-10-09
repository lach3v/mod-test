#include "Channel.h"
#include "ScriptMgr.h"
#include "Player.h"

class remove_raid_buffs : public PlayerScript
{
public:
	remove_raid_buffs() : PlayerScript("remove_raid_buffs") {}

	void OnUpdateZone(Player* pPlayer, uint32 __attribute__ ((unused))newZone, uint32 __attribute__ ((unused))newArea)
	{
		if (!pPlayer->GetMap()->IsRaid())
		switch (pPlayer->getClass())
		{
		case CLASS_PRIEST:
		pPlayer->RemoveAura(24932);
		break;
		}
	}
};

void AddremoveraidbuffsScripts()
{
    new remove_raid_buffs();
}
