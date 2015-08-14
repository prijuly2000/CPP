#include"Player.h"

class Batsman : public Player
{

	int runs;
	float strikerate;
	int highestruns;
public:
	Batsman();
	Batsman(int ,char *,int ,int ,int,int,float,int);
	void display();
	void accept();
	int calculaterank();
	
};