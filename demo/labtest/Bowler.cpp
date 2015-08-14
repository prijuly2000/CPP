#include"Bowler.h"
#include<string.h>
Bowler::Bowler()
{
	cout<<"\ndflt bowler\n";
	wicketstaken=0;
	bestfigure=0;
	economy=0;
	strcpy(typeofbowler,"");	
}

Bowler::Bowler(int i,char *n,int a,int e,int m,int w,int b,float ec,char* t)
:Player(i,n,a,e,m)
{
	wicketstaken=w;
	bestfigure=b;
	economy=ec;
	strcpy(typeofbowler,t);
}

void Bowler::display()
{
	Player::display();
	cout<<"\nWickets Taken :"<<wicketstaken;
	cout<<"\nBest Figure   :"<<bestfigure;
	cout<<"\nEconomy       :"<<economy;
	cout<<"\nType of Bowler:"<<typeofbowler;
}

void Bowler::accept()
{
	Player::accept();
	cout<<"\nEnter Wickets Taken :";
	cin>>wicketstaken;
	cout<<"\nEnter Best Figure   :";
	cin>>bestfigure;
	cout<<"\nEnter Economy       :";
	cin>>economy;
	cout<<"\nEnter Type of Bowler:";
	cin>>typeofbowler;
}

int Bowler::calculaterank()
{
	int rank;
	rank=(int)(wicketstaken/matchplayed+economy);
	return rank;
}

