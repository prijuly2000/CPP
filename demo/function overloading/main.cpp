#include"sum.h"

void main()
{
	add a1;
	cout<<"\n------------\nDefault constructor : "<<a1.sum();
	cout<<"sum(x,y,z) = "<<a1.sum(10,20,30);

	add a2(10,20);
	cout<<"\n\n-----------\n2 prameter constructor : "<<a2.sum();

	add a3(10,20,30);
	cout<<"\n\n----------------\n3 prameter constructor : "<<a3.sum();

	add a4;
	cout<<"\n\n----------------\nsum(x,y) = "<<a4.sum(10,20);

	add a5;
	cout<<"\n\n----------------\nsum(x,y,z) = "<<a5.sum(10,20,30)<<"\n-------------------------\n";

	add a6(10,0);
	cout<<"\n-----------------\n2 para constr. ="<<a6.sum();

}