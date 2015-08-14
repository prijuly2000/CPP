#include"emp.h"
#include<string.h>

employee::employee()
{
	cout<<"\nemployee default constructor called\n";
	eid=0;
	strcpy(name,"\0");
    basic=0;
}

employee::employee(int id,char *nm,double b)
{  cout<<"\nemployee parameterized constructor called\n";
	eid=id;
	strcpy(name,nm);
    basic=b;
}

void employee::accept()
{
	cout<<"enter the employee name\n";
	cin>>name;
	cout<<"enter the employee id\n";
	cin>>eid;
    cout<<"enter the employee basic\n";
	cin>>basic;
}
	
void employee::display()
{
	cout<<"\nname\t"<<name;
	cout<<"\neid\t"<<eid;
	cout<<"\nbasic\t"<<basic;
}


employee::~employee()
{
	cout<<"\nemployee destroyed\n\n";

}
