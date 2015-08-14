#include"employee.h"

employee::employee()
{
	cout<<"\nemployee default constr.\n";
	eid=0;
	basic=0;
}

employee::employee(char *n,int a,int i,int b,int in):person(n,a,in)
{
	cout<<"\nemployee para constr \n";
	eid=i;
	basic=b;
}

employee::~employee()
{
	cout<<"\nemployee destroyed \n";
}

void employee::display()
{
	cout<<"\n\n------Employee info-------\n";
	person::display();
	cout<<"\nID    : "<<eid;
	cout<<"\nBasic : "<<basic;
	cout<<"\nSalary: "<<this->calsal();
	cout<<"\n\n--------------------------\n";
}

double employee::calsal()
{
	return person::calsal()+basic;
}

void employee::accept()
{
	person::accept();
	cout<<"\nEnter the id :";
	cin>>eid;
	cout<<"\nEnter the basic :";
	cin>>basic;
}