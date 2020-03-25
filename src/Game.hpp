#ifndef GAME_H
#define GAME_H

#include "Panel.hpp"


class Game
{
    protected:
        Panel* p;
    public:
        virtual int win()=0;
        virtual void start()=0;
};


#endif