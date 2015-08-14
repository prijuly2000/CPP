#include"Circle.h"
#define PI 22/7


Circle::Circle()
{
	radius=0;
}

Circle::Circle(double r)
{
	radius=r;
}

void Circle::display()
{
	cout<<"\n\n------Circle----\n";
	calarea();
	calperimeter();
	cout<<"\n\nRadius :"<<radius;
	Shape::display();
	cout<<"\n\n-------------------\n";
}

void Circle::calarea ()
{
	area=radius*radius*PI;
}

void Circle::calperimeter()
{
	perimeter=2*radius*PI;
}

void Circle::accept()
{
	cout<<"\n\n------Circle----\n";
	cout<<"\nEnter the radius :";
	cin>>radius;
}