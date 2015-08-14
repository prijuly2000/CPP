#include<iostream.h>

class Date
{
	int dd,mm,yy;

public:
	Date();
	Date(int,int,int);
	void setdd(int);
	void setmm(int);
	void setyy(int);
	int getdd();
	int getmm();
	int getyy();
	void display();
	void accept();

};