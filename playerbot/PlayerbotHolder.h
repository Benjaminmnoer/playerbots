#pragma once

#include "Common.h"

class Player;

class PlayerbotHolder
{
public:
    PlayerbotHolder();
    virtual ~PlayerbotHolder();

    void OnPlayerLogout(Player *player);
    void OnPlayerLogin(Player *player);
    Player *GetPlayerBot(uint32 guid) const;
    virtual void MovePlayerBot(uint32 guid, PlayerbotHolder *newHolder);
}