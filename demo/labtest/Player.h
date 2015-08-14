#pragma once
#include<iostream.h>

class Player
{

	int pid,age,experience;
	char pname[20];
protected:
	int matchplayed;
public:
	Player();
	Player(int ,char *,int ,int ,int );
	virtual void display();
	virtual void accept();
	virtual int calculaterank()=0;

};