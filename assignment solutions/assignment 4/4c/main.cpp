#include"admin.h"

void main()
{
	admin a1(12,"neeraj",12345,1234);
	a1.display();
	admin a2[3];
	for(int i=0;i<3;i++)
		a2[i].accept();
	for(i=0;i<3;i++)
		a2[i].display();
}