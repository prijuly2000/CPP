#include"emp.h"
#include<string.h>

Emp::Emp()
{
	id=0;
	strcpy(name,"");
	basic=0;
}

Emp::Emp(int i,char*n,int b)
{
	id=i;
	strcpy(name,n);
	basic=b;
}

Emp::~Emp()
{
	cout<<"\nemp destroyed";
}

void Emp::display()
{
	cout<<"\nID         :"<<id;
	cout<<"\nName       :"<<name;
	cout<<"\nBasic      :"<<basic;
}

double Emp::calsal()
{
	return basic;
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