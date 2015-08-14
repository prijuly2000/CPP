#include"Shape.h"

Shape::Shape()
{
	area=perimeter=0;
}

Shape::Shape(int a,int p)
{
	area=a;
	perimeter=p;
}

void Shape::display()
{
	cout<<"\n\nArea   : "<<area;
	cout<<"\nPerimeter:"<<perimeter<<endl;
}
