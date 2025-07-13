#pragma once

#include "PlayerbotHolder.h"

class RandomPlayerbotMgr : public PlayerbotHolder
{
public:
    static RandomPlayerbotMgr &instance()
    {
        static RandomPlayerbotMgr instance;
        return instance;
    }

    void HandleCommand(uint32 type, const std::string& text, Player& fromPlayer, std::string channelName = "", Team team = TEAM_BOTH_ALLOWED, uint32 lang = LANG_UNIVERSAL);
};

#define sRandomPlayerbotMgr RandomPlayerbotMgr::instance()