#pragma once

#include "Common.h"

class Player;
class Team;

class PlayerbotMgr
{
public:
    static PlayerbotMgr &instance()
    {
        static PlayerbotMgr instance;
        return instance;
    }
    void HandleCommand(uint32 type, const std::string &text, Player &fromPlayer, std::string channelName = "", Team team = TEAM_BOTH_ALLOWED, uint32 lang = LANG_UNIVERSAL);
1};

#define sPlayerbotMgr PlayerbotMgr::instance()