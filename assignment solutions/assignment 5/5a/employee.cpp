#include"employee.h"
#include<string.h>
employee::employee()
{
	cout<<"\nemployee default constr\n";
	strcpy(name,"");
	eid=0;
	basic=0;
}

employee::employee(int i,char *n,double b)
{
	cout<<"\nemployee para constr \n";
	strcpy(name,n);
	eid=i;
	basic=b;
}

employee::~employee()
{
	cout<<"\nemployee destroyed \n";
}

void employee::display()
{
	
	cout<<"\nID    : "<<eid;
	cout<<"\nName :"<<name;
	cout<<"\nBasic : "<<basic;
	cout<<"\nSalary(CalSal): "<<calsal();
	
}



void employee::accept()
{
	
	cout<<"\nEnter the id :";
	cin>>eid;
	cout<<"\nEnter the name:";
	cin>>name;
	cout<<"\nEnter the basic :";
	cin>>basic;
}