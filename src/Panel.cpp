#include "Panel.hpp"

using namespace std;

Panel::Panel()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
			data[i][j]=0;
	}
}
void Panel::display()
{
	char token[3]={'_','x','o'};
	cout<<"  ";
	for(int i=0;i<15;i++)
	{
		if(i<10)
			cout<<i<<' ';
		else
			cout<<i;
	}
	cout<<endl;
	for(int i=0;i<15;i++)
	{
		if(i<10)
			cout<<i<<' ';
		else
			cout<<i;
		for(int j=0;j<15;j++)
		{
			cout<<token[data[i][j]]<<' ';
		}
		cout<<endl;
	}
}
int Panel::get(int x,int y)
{
	return data[x][y];
}
void Panel::set(int x,int y,int value)
{
	data[x][y]=value;
}




