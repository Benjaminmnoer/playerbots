#pragma once

class RandomPlayerbotMgr
{
    static RandomPlayerbotMgr &instance()
    {
        static RandomPlayerbotMgr instance;
        return instance;
    }
};

#define sRandomPlayerbotMgr RandomPlayerbotMgr::instance()