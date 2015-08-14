#include"Programmer.h"

void main()
{
	Programmer p1(1,"sasuke",1000,100,10); 
	p1.display();
	Programmer p2[3];
	for(int i=0;i<3;i++)
		p2[i].accept();
	for(i=0;i<3;i++)
		p2[i].display();
}