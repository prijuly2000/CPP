#include"Batsman.h"

Batsman::Batsman()
{
	cout<<"df batsman";
	runs=highestruns=0;
	strikerate=0;
}

Batsman::Batsman(int i,char *n,int a,int e,int m,int r,float s,int h)
:Player(i,n,a,e,m)
{
	
	runs=r;
	strikerate=s;
	highestruns=h;
}

void Batsman::display()
{
	Player::display();
	cout<<"\nTotal Runs  :"<<runs;
	cout<<"\nStrike Rate :"<<strikerate;
	cout<<"\nHighest Runs:"<<highestruns;
}

void Batsman::accept()
{
	Player::accept();
	cout<<"\nEnter Total Runs  :";
	cin>>runs;
	cout<<"\nEnter Strike Rate :";
	cin>>strikerate;
	cout<<"\nEnter Highest Runs:";
	cin>>highestruns;
}

int Batsman::calculaterank()
{
	int rank;
	rank=(int)(runs/matchplayed+strikerate+highestruns);
	return rank;
}
