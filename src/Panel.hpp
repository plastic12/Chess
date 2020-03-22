#ifndef PANEL_H
#define PANEL_H

#include <iostream>
#include "Game.hpp"


class Panel
{
	private:
	int data[15][15];
	int token;
	Game *game;
	public:
	Panel(Game *game);
	~Panel();

};




#endif
