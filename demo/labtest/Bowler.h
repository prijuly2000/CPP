#include"Player.h"

class Bowler: public Player
{
	int wicketstaken,bestfigure;
	float economy;
	char typeofbowler[20];
public:
	Bowler();
	Bowler(int ,char *,int ,int ,int ,int,int,float,char*);
	void display();
	void accept();
	int calculaterank();
	
};