#include<iostream.h>

class time
{
	int hr,min,sec;

public:
	void accept();
	friend ostream &operator<<(ostream &,time &);
	time operator+(int );
	friend time operator+(int ,time &);
	time operator++();
};

