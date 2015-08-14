#include"person.h"
#include<string.h>

person::person()
{
	cout<<"\nperson default constructor \n";
	strcpy(name,"");
	age=0;
	incentive=0;
}

person::person(char *n,int a,int i)
{
	cout<<"\nperson para constr called\n";
	strcpy(name,n);
	age=a;
	incentive=i;
}

person::~person()
{
	cout<<"\nperson destroyed\n";
}

void person::display()
{	

	cout<<"\nName  : "<<name;
	cout<<"\nage   : "<<age;
	cout<<"\nIncent: "<<incentive;
}

double person::calsal()
{
	return incentive;
}

void person::accept()
{
	cout<<"\nEnter the name:";
	cin>>name;
	cout<<"\nEnter the age:";
	cin>>age;
	cout<<"\nEnter the incentive:";
	cin>>incentive;
}


