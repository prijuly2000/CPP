#include"point.h"

point::point()
{
	x=y=0;
}

point::point(int x1,int y1)
{
	x=x1;
	y=y1;
}

void point::setx(int x1)
{
	x=x1;
}

void point::sety(int y1)
{
	y=y1;
}

int point::getx()
{
	return x;
}
int point::gety()
{
	return y;
}

void point::display()
{
	cout<<"\n\n(x,y) = "<<"("<<x<<","<<y<<")\n\n";
}

void point::accept()
{
	cout<<"\nEnter the point :";
	cin>>x>>y;
}