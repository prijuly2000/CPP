#include"Time.h"

int Time::getHr()
{
	return Hr;
}

int Time::getMin()
{
	return Min;
}

int Time::getSec()
{
	return Sec;
}

void Time::setHr(int h)
{
	Hr=h;
}

void Time::setMin(int m)
{
	Min=m;
}

void Time::setSec(int s)
{
	Sec=s;
}

void Time::accept()
{
	cout<<"\nEnter the Values Hr,Min,Sec";
	cin>>Hr>>Min>>Sec;
}

void Time::display()
{
	cout<<endl<<Hr<<" : "<<Min<<" : "<<Sec<<endl;
}