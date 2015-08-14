#include"Shape.h"

class Rectangle: public Shape
{
	double length,breadth;
public:
	Rectangle();
	Rectangle(int,int);
	void display();
	void calarea();
	void accept();
	void calperimeter();
};