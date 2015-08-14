#include"Person.h"
#include<string.h>
int Person::count=0;

Person::Person()
{
	cout<<"\nDefault constructor called \n";
	strcpy(name,"pritz");
	age=0;
	strcpy(city,"12mati");
	count++;
}

Person::Person(char *ptr1,int a,char *ptr2)
{
	cout<<"\nParameterised constructor called\n";
	strcpy(name,ptr1);
	age=a;
	strcpy(city,ptr2);
	count++;
}

void Person::displaycount()
{
	cout<<"count = "<<count;
}

Person::~Person()
{
	cout<<"\n\nDestructor called\n";
	
}

Person::Person(Person &p)
{
	cout<<"\n\n----------------\nCopy constructor called\n";
	strcpy(this->name,p.name);
	this->age=p.age;
	strcpy(this->city,p.city);
	
}

void Person::display()
{
	cout<<"\nInfo:\n"<<name<<"  "<<age<<"  "<<city<<"\n\n---------------------\n\n";
}

void Person::accept()
{
	cout<<"Enter the details :";
	cin>>name>>age>>city;
}