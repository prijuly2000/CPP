#include"Rectangle.h"

Rectangle::Rectangle()
{
	length=breadth=0;
}

Rectangle::Rectangle(int l,int b)
{
	length=l;
	breadth=b;
	
}

void Rectangle::calarea()
{
	area=length*breadth;
}

void Rectangle::calperimeter()
{
	perimeter=2*(length+breadth);
}

void Rectangle::display()
{
	cout<<"\n\n------Rectangle----\n";
	calarea();
	calperimeter();
	cout<<"\nLength   : "<<length;
	cout<<"\nBreadth  : "<<breadth;
	Shape::display();
	cout<<"\n\n-------------------\n";
}

void Rectangle::accept()
{
	cout<<"\n\n------Rectangle----\n";
	cout<<"\nEnter the length : ";
	cin>>length;
	cout<<"\nEnter the breadth : ";
	cin>>breadth;

}
