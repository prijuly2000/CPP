#include<iostream.h>

class a
{
	int *p;
public:
	a()
	{
		cout<<"\na constructor\n";
		p=new int;
		*p=10;
	}
	 virtual ~a()
	{
		cout<<"\na destroyed\n";
		delete p; 
	}
	 void display1()
	 {
		 cout<<"\nimplicit type casting\n";
	 }
};

class b:public a
{
	int * q;
public:
	b()
	{
		cout<<"\nb constructor\n";
		q=new int;
		*q=20;
	}
	~b()
	{
		cout<<"\nb destroyed\n";
		delete q;
	}
	void display1()
	{
		cout<<"\nexplicit type casting\n";
	}
};