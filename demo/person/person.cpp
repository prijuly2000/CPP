#include"person.h"
#include<string.h>

char *person::getname()
{
	return name;
}

int person::getage()
{
	return age;
}

void person::setname(char *ptr)
{
	strcpy(name,ptr);
}

void person::setage(int a)
{
	age=a;
}

void person:: accept()
{
	cout<<"\n\nEnter the name,age\t";
	cin>>name>>age;
}

void person::display()
{
	cout<<"\n--------------------------\n";
	cout<<endl<<name<<" "<<age<<"\n\n";
	
	cout<<"\n--------------------------\n";
}