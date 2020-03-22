#include "Panel.hpp"

using namespace std;

Panel::Panel(Game* game)
{
	this->game=game;
}
Panel::~Panel()
{
	delete game;
}




