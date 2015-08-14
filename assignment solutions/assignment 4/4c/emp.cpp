#include"Emp.h"
#include<string.h>
Emp::Emp()
{
	cout<<"\nemp default constructor";

	id=0;
	strcpy(name,"");
	basic=0;
}

Emp::Emp(int i,char*n,double b)
{
	id=i;
	strcpy(name,n);
	basic=b;

}
Emp::~Emp()
{
	cout<<"\nemp is destroyed";

}

void Emp::display()
{
	
	cout<<"\nemp id   :"<<id;
	cout<<"\nemp name :"<<name;
	cout<<"\nemp basic:"<<basic;  



}

void Emp::accept()
{
	cout<<"\nEnter ID :";
	cin>>id;
	cout<<"\nEnter the name:";
	cin>>name;
	cout<<"\nEnter the basic:";
	cin>>basic;

}
double Emp::calsal()
{
	return basic;

}
