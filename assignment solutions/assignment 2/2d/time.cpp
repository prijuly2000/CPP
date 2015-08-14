#include"time.h"


time::time()
{
	cout<<"\n\n default constuctor called\n";
	hh=mm=sec=0;
}

time::time(int h,int m,int s)
{
	cout<<"\n\n paramaterized constructor \n\n";
	hh=h;
	mm=m;
	sec=s;
}

time::time(time &t)
{
	cout<<"\n\n copy constuctor called \n\n";
	this->hh=t.hh;
	this->mm=t.mm;
	this->sec=t.sec;

}

void time::display()
{
	cout<<"\n\n---------------\n"<<hh<<":"<<mm<<":"<<sec<<"\n--------------------\n\n";

}

void time::accept()
{
	cout<<"enter the time:  ";
	cin>>hh>>mm>>sec;
}

	