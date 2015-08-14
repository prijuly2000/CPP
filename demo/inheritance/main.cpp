#include"emp.h"
#include"prog.h"
#include"admin.h"
void main()
{/*
	employee e1;
	
	e1.accept();
    e1.display();
	employee e2(1,"pritz",123);
	e2.display();
	programmer p1;
	p1.accept();
	p1.display();
	programmer p2(123,345);
	p2.display();
	admin a1;
	a1.accept();
	a1.display();
	admin a2(1,"pritz",123,45);
	a2.display();*/

	employee *ptr;
	programmer p5(1,"pritz",123,10,100);
	ptr=&p5;
	ptr->display();
	ptr->calsal();

	admin a5(1,"pritz",123,100);
	ptr=&a5;
	ptr->display();
	ptr->calsal();
	

}
