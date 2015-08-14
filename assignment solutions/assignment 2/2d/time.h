#include<iostream.h>
class time
{
	int hh,mm,sec;

public:

	time();
	time(int,int,int);
	time(time &);
	void display();
	void accept();
	
};