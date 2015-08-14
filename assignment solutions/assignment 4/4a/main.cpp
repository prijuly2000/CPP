#include"employee.h"

void main()
{
	employee e1("nt",22,1,100,1);
	e1.display();
	
	employee e2[3];
	for(int i=0;i<3;i++)
		e2[i].accept();
	for(i=0;i<3;i++)
		e2[i].display();

	
}