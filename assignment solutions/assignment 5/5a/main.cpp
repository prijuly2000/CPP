#include"admin.h"
#include"Salesmgr.h"
#include"Programmer.h"

void main()
{
	employee *ptr[3];
	admin a1;
	Salesmgr s1;
	Programmer p1;

	ptr[0]=&a1;


	ptr[1]=&s1;
	

	ptr[2]=&p1;

	for(int i=0;i<3;i++)
		ptr[i]->accept();
	for(i=0;i<3;i++)
		ptr[i]->display();
	
}