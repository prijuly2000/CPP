#include"prog.h"

programmer::programmer()
{
	cout<<"\nprogrammer default constructor called\n";
	extrahrs=0;
	costperhrs=0;
}

programmer::programmer(int peh,double pcph)
{     
	cout<<"\nprogrammer parameterized constructor called\n";
	extrahrs=peh;
	costperhrs=pcph;
}

programmer::programmer(int id,char *nm,double b,int peh,double pcph):employee(id,nm,b)
{
		extrahrs=peh;
		costperhrs=pcph;
}

void programmer::display()
{
	employee::display();
	cout<<"\nextra hours\t"<<extrahrs;
	cout<<"\ncost per hour\t"<<costperhrs;
		
	
}

void programmer::accept()
{
	employee::accept();
	cout<<"\nenter extra hours\t";
	cin>>extrahrs;
	cout<<"\nenter cost per hour\t";
	cin>>costperhrs;
}

programmer::~programmer()
{
		cout<<"\n\nprogrammer destroyed\n";
	
}

void programmer::calsal()
{
	cout<<"\nSalary : "<<basic+extrahrs*costperhrs<<endl;
}
