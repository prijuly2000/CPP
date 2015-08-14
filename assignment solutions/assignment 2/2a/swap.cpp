#include"swap.h"

int swap::geta()
{
	return a;
}


int swap::getb()
{
	return b;
}


void swap::swap1(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"\n\n---------------\n\nPass by value swaping : "<<a<<" "<<b;

}

void swap::swap2(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	cout<<"\n\nPass by address swaping : "<<*ptr1<<" "<<*ptr2;
}


void swap::swap3(int &ref1,int &ref2)
{
	int temp;
	temp=ref2;
	ref2=ref1;
	ref1=temp;
	cout<<"\n\nPass by reference swaping : "<<ref1<<" "<<ref2;
	cout<<"\n----------------------\n";
}

swap::swap()
{
	a=10;
	b=20;
}

void swap::accept()
{
	cin>>a>>b;

}