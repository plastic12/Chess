#ifndef FIVE_H
#define FIVE_H

#include "Game.hpp"
#include <iostream>

class Five:public Game
{
    int token;
    int lastx;
    int lasty;
    public:
    Five();
    ~Five();
    int win();
    void option();
    void start();
    void endTurn();
};




#endif

