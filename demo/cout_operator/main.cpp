#include"cout.h"

void main()
{
	time t1,t2,t3;
	t1.accept();
	t2.accept();

	cout<<t2;

	cout<<t1;//operator<<(cout,t1)

	t3=t1+10;//t1.operator(10)
	cout<<t3;

	t1.accept();
	t2.accept();
	t3=20+t1;
	cout<<t3;

	t3=t1++;
	cout<<t3;

}