#ifndef PANEL
#define PANEL

#include <iosream>


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
