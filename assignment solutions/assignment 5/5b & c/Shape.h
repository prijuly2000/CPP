#pragma once
#include<iostream.h>

class Shape
{
protected:
	double area,perimeter;
public:
	Shape();
	Shape(int,int);
	virtual void display();
	virtual void accept()=0;
	
	virtual void calarea()=0;
	virtual void calperimeter()=0;

};