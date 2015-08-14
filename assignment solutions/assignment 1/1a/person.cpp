#include"person.h"
#include<string.h>
void person::setname(char *ptr)
{
	strcpy(name,ptr);
}

void person::setage(int a)
{
	age=a;
}

void person::setcity(char *ptr)
{
	strcpy(city,ptr);
}

char *person::getname()
{
	return name;
}

int person::getage()
{
	return age;
}

char *person::getcity()
{
	return city;
}

void person::display()
{
	cout<<name<<" "<<age<<" "<<city<<endl;
}

person::person()
{
	strcpy(name,"pritz");
	age=0;
	strcpy(city,"12mati");
}

person::person(char *ptr1,int a,char *ptr2)
{
	strcpy(name,ptr1);
	age=a;
	strcpy(city,ptr2);
}

void person::accept()
{
	cout<<"Enter the name, age & city";
	cin>>name>>age>>city;
}
