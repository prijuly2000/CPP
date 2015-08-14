#include<iostream.h>

class a
{
public:
	void f1()
	{
		cout<<"\nf1 called\n";
	}
};

class b:public virtual a
{
public:
	void f2()
	{
		cout<<"\nf2 called\n";
	}
};

class c:virtual public a
{
public:
	void f3()
	{
		cout<<"\nf3 called\n";
	}
};

class d:public b,public c
{
public:
	void f4()
	{
		cout<<"\nf4 called\n";
	}
};