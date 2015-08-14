#include"classes.h"

void f1()
{
	a *a1;
	a *b1;
	a1=new b();
	
	a1->~a();
	((b *)a1)->display1();
	b1=((b*)a1);
	
	b1->display1();
	
}

void main()
{
	f1();
}


