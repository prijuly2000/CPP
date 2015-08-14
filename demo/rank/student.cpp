#include"student.h"
#include<string.h>
Student::Student()
{
	id=0;
	strcpy(name,"");
	percent=0;
	theory=0;
}
Student::Student(int i,char *n,double p,int t)
{
		id=i;
		strcpy(name,n);
		percent=p;
		theory=t;
}
void Student::display()
{
	cout<<"\nstudent id:"<<id;
	cout<<"\nstudent name:"<<name;
	cout<<"\nstudent percent:"<<percent;

}
Student::~Student()
{
	cout<<"\nStudent is destroyed\n";

}