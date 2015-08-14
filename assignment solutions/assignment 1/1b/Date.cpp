#include"Date.h"

void Date::setdd(int d)
{
	dd=d;
}

void Date::setmm(int m)
{
	mm=m;
}

void Date::setyy(int y)
{
	yy=y;
}

int Date::getdd()
{
	return dd;
}

int Date::getmm()
{
	return mm;
}

int Date::getyy()
{
	return yy;
}

void Date::display()
{
	cout<<"\n\nDate : "<<dd<<" : "<<mm<<" : "<<yy<<endl;

}

Date::Date()
{
	mm=0;
	dd=0;
	yy=0;
}

Date::Date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}

void Date::accept()
{
	cout<<"Enter the date :";
	cin>>dd>>mm>>yy;
}
