#include "playerbot/PlayerbotHolder.h"

PlayerbotHolder::~PlayerbotHolder()
{
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