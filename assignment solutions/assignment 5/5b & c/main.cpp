#include"Rectangle.h"
#include"Circle.h"
#include"Triangle.h"

void main()
{
	Shape *p[3];
	Rectangle r1;
	Circle c1;
	Triangle t1;

	p[0]=&r1;
	p[1]=&c1;
	p[2]=&t1;

	for(int i=0;i<3;i++)
		p[i]->accept();

	cout<<"\n\n*******OUTPUT**********OUTPUT*********OUTPUT*********\n";

	for(i=0;i<3;i++)
		p[i]->display();

	
	/*
	
	r1.accept();
	r1.display();
	

	
	c1.accept();
	c1.display();
	


	t1.accept();
	t1.display();
	*/




	
}

