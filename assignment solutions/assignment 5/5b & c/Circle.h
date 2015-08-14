#include"Shape.h"

class Circle:public Shape
{
	double radius;
public:
	Circle();
	Circle(double);
	void display();
	void calarea ();
	void calperimeter();
	void accept();

};