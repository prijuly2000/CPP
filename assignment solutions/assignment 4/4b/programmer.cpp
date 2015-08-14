#include"Programmer.h"

Programmer::Programmer()
{
	costperhrs=0;
	extrahrs=0;
}

Programmer::Programmer(int i,char *n,int b,int c,int e):Emp(i,n,b)
{
	cout<<"\nProg para constr\n";
	extrahrs=e;
	costperhrs=c;
}

Programmer::~Programmer()
{
	cout<<"\nProg destroyed\n";
}

void Programmer::display()
{
	cout<<"\n\n-------Programmer Info -------\n";
	Emp::display();
	cout<<"\nExtra Hours:"<<extrahrs;
	cout<<"\nCost per hr:"<<costperhrs;
	cout<<"\nTotal salary:"<<calsal();
	cout<<"\n\n------------------------------\n";
}

double Programmer::calsal()
{
	return Emp::calsal()+extrahrs*costperhrs;
}

void Programmer::accept()
{
	Emp::accept();
	cout<<"\nEnter the extra hours:";
	cin>>extrahrs;
	cout<<"\nEnter the cost per hour";
	cin>>costperhrs;
}