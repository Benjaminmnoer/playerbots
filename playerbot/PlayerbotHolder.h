#pragma once

#include "Common.h"
#include "Database/DatabaseEnv.h"

class Player;

class PlayerbotHolder
{
public:
    PlayerbotHolder();
    virtual ~PlayerbotHolder();

    void AddPlayerBot(uint32 playerGuid, uint32 masterAccount);
    void HandlePlayerBotLoginCallback(QueryResult* dummy, SqlQueryHolder* holder);
    void OnPlayerLogout(Player *player);
    void OnPlayerLogin(Player *player);
    Player *GetPlayerBot(uint32 guid) const;
    virtual void MovePlayerBot(uint32 guid, PlayerbotHolder *newHolder);
};