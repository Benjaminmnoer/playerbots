#pragma once

#include "PlayerbotHolder.h"

class RandomPlayerbotMgr : PlayerbotHolder
{
    static RandomPlayerbotMgr &instance()
    {
        static RandomPlayerbotMgr instance;
        return instance;
    }
};

#define sRandomPlayerbotMgr RandomPlayerbotMgr::instance()