#include "PlayerbotHolder.h"

PlayerbotHolder::PlayerbotHolder()
{
}

PlayerbotHolder::~PlayerbotHolder()
{
}

void PlayerbotHolder::OnPlayerLogout(Player *player)
{
}

void PlayerbotHolder::OnPlayerLogin(Player *player)
{
}

Player* PlayerbotHolder::GetPlayerBot(uint32 guid) const
{
    return nullptr;
}

void PlayerbotHolder::MovePlayerBot(uint32 guid, PlayerbotHolder* newHolder)
{
    // if (newHolder)
    // {
    //     auto it = playerBots.find(guid); 
    //     if (it != playerBots.end() && it->second != nullptr)
    //     {
    //         newHolder->OnBotLogin(it->second);
    //         playerBots[guid] = nullptr;
    //     }
    // }
}