#include"Shape.h"

class Triangle:public Shape
{
	double base,height;
public:
	Triangle();
	Triangle(double,double);
	void display();
	void calarea ();
	void calperimeter();
	void accept();
};