#include"point.h"

void main()
{
	point p1;
	p1.display();

	point p2(10,20);
	p2.display();

	point p3;
	p3.setx(30);
	p3.sety(40);

	cout<<"\n\n(x,y) = "<<"("<<p3.getx()<<","<<p3.gety()<<")"<<endl;

	point p4;
	p4.accept();
	p4.display();
}