#include"Player.h"
#include<string.h>
Player::Player()
{
	cout<<"\ndflt plyr\n";
	pid=age=experience=matchplayed=0;
	strcpy(pname,"");
}

Player::Player(int i,char *n,int a,int e,int m)
{
	pid=i;
	strcpy(pname,n);
	age=a;
	experience=e;
	matchplayed=m;
}

void Player::display()
{
	cout<<"\nPlayer Id      :"<<pid;
	cout<<"\nPlayer Name    :"<<pname;
	cout<<"\nPlayer Age     :"<<age;
	cout<<"\nExperience     :"<<experience;
	cout<<"\nMatches Played :"<<matchplayed;
}

void Player::accept()
{
	cout<<"\nEnter Player Id      :";
	cin>>pid;
	cout<<"\nEnter Player Name    :";
	cin>>pname;
	cout<<"\nEnter Player Age     :";
	cin>>age;
	cout<<"\nEnter Experience     :";
	cin>>experience;
	cout<<"\nEnter Matches Played :";
	cin>>matchplayed;
}

