#include"Triangle.h"
#define half 1/2
#include<math.h>

Triangle::Triangle()
{
	base=height=0;
}

Triangle::Triangle(double base,double height)
{
	this->base=base;
	this->height=height;

}

void Triangle::display()
{
	cout<<"\n\n------Triangle----\n";
	calarea();
	calperimeter();
	cout<<"\n\nBase : "<<base;
	cout<<"\nHeight :"<<height;
	Shape::display();
	cout<<"\n\n-------------------\n";
}

void Triangle::calarea ()
{
	area=base*height*half;
}

void Triangle::calperimeter()
{
	perimeter=base*base+height*height;		
	perimeter=sqrt(perimeter);
	perimeter=perimeter+base+height;
}

void Triangle::accept()
{
	cout<<"\n\n------Triangle----\n";
	cout<<"\n\nEnter the base : ";
	cin>>base;
	cout<<"\nEnter the height : ";
	cin>>height;
}