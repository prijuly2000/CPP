#include"complex.h"

void main()
{
	complex c1,c2,c3,c4,c5;
	cin>>c1>>c2;
	
	c3=c1+c2;
	cout<<c3;//cout.operator(c3);

	c3=c1-c2;
	cout<<c3;

	if(c1<c2)//c1.operator<(c2)
		cout<<"c1 is less than c2\n";
	else
		cout<<"c2 is less than c1\n";

	
	if(c1>c2)
		cout<<"c1 is greater than c2\n";
	else
		cout<<"c2 is greater than c1\n";

	c3=c1++;
	cout<<"\n------------------\nc1(post-incr)"<<c1;
	cout<<"\noriginal c1"<<c3;

	c3=++c2;
	cout<<"\n-------------------\nc2(pre-incr)"<<c2;
	cout<<"\noriginal c2"<<c3<<"\n--------------------\n";

	cout<<"\nEnter the c4 & c5 ";
	cin>>c4>>c5;
	
	c3=c4--;
	cout<<"\n------------------\nc4(post-decr)"<<c4;
	cout<<"\noriginal c4"<<c3;

	c3=--c5;
	cout<<"\n------------------\nc5(pre-decr)"<<c5;
	cout<<"\noriginal c5"<<c3<<"\n--------------------\n";

}