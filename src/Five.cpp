#include "Five.hpp"

using namespace std;

Five::Five()
{
    p=new Panel;
    token=1;
    lastx=-1;
    lasty=-1;
}

void Five::start()
{
    while(win()==0)
    {
        p->display();
        option();
    }
    p->display();
    cout<<"Player "<<win()<<" win."<<endl;
}
int Five::win()
{
    if(lastx==-1||lasty==-1)
        return 0;
    int output=0;
    //check horizontal
    int temp=0;
    int counter=0;
    for(int i=0;i<15;i++)
    {
        if(temp==p->get(i,lasty)&&temp!=0)
            counter++;
        else
        {
            temp=p->get(i,lasty);
            counter=1;
        }
        if(counter==5)
            return temp;
    }
    //check vertical
    for(int i=0;i<15;i++)
    {
        if(temp==p->get(lastx,i)&&temp!=0)
            counter++;
        else
        {
            temp=p->get(lastx,i);
            counter=1;
        }
        if(counter==5)
            return temp;
    }
    //check diagonal
    if(lastx+lasty<14)
    {
        
        int tempx=lastx+lasty;int tempy=0;
        for(;tempx>=0;)
        {
            if(temp==p->get(tempx,tempy)&&temp!=0)
                counter++;
            else
            {
                temp=p->get(tempx,tempy);
                counter=1;
            }
            if(counter==5)
                return temp;
            tempx--;
            tempy++;
        }
    }
    else
    {
        int tempx=14;int tempy=lastx+lasty-14;
        for(;tempy<14;)
        {
            if(temp==p->get(tempx,tempy)&&temp!=0)
                counter++;
            else
            {
                temp=p->get(tempx,tempy);
                counter=1;
            }
            if(counter==5)
                return temp;
            tempx--;
            tempy++;
        }
    }

    //check other diagonal
    if(lastx-lasty>0)
    {
        
        int tempx=lastx-lasty;int tempy=0;
        for(;tempx<14;)
        {
            if(temp==p->get(tempx,tempy)&&temp!=0)
                counter++;
            else
            {
                temp=p->get(tempx,tempy);
                counter=1;
            }
            if(counter==5)
                return temp;
            tempx++;
            tempy++;
        }
    }
    else
    {
        int tempx=0;int tempy=lasty-lastx;
        for(;tempy<14;)
        {
            if(temp==p->get(tempx,tempy)&&temp!=0)
                counter++;
            else
            {
                temp=p->get(tempx,tempy);
                counter=1;
            }
            if(counter==5)
                return temp;
            tempx++;
            tempy++;
        }
    }
    return output;
}

void Five::option()
{
	int x=-1;
	int y=-1;
	cout<< "Player "<<token<<" turn"<<endl;

    for(;x<0||x>=15||y<0||y>=15||p->get(x,y)!=0;)
    {
	    cout<<"Enter the row and column"<<endl;
	    cin>>x>>y;
	    if(x<0||x>=15)
	    {
	    	cout<<"row should be in between 0-14"<<endl;
            continue;
	    }
	    if(y<0||y>=15)
        {
	    	cout<<"column should be in between 0-14"<<endl;
            continue;
        }
    }
    p->set(x,y,token);
    lastx=x;lasty=y;
	endTurn();
}
void Five::endTurn()
{
	if(token==1)
		token=2;
	else
		token=1;
}

Five::~Five()
{
    delete p;
}