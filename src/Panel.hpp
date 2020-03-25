#ifndef PANEL_H
#define PANEL_H

#include <iostream>


class Panel
{
	private:
	int data[15][15];
	public:
	Panel();
	void display();
	int get(int x,int y);
	void set(int x,int y,int value);

};




#endif
