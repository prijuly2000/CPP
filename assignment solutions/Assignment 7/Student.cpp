#include"Student.h"
#include<string.h>

Student::Student()
{
	Id=Age=0;
	strcpy(Name,"");
	Percentage=0;

}

Student::Student(int i,char*nm,int a,double per)
{
	Id=i;
	strcpy(Name,nm);
	Age=a;
	Percentage=per;
}

void Student::display()
{
	cout<<"\nEnter Id  :"<<Id;
	cout<<"\nEnter Name:"<<Name;
	cout<<"\nEnter Age :"<<Age;
	cout<<"\nEnter Percentage:"<<Percentage;
}

void Student::accept()
{
	cout<<"\nId        :";
	cin>>Id;
	cout<<"\nName      :";
	cin>>Name;
	cout<<"\nAge       :";
	cin>>Age;
	cout<<"\nPercentage:";
	cin>>Percentage;
}

double Student::getpercentage()
{
	return Percentage;
}