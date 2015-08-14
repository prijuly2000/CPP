#pragma once
#include<iostream.h>

class Student
{
	int Id;
	char Name[20];
	int Age;
	double Percentage;
public:
	Student();
	Student(int,char*,int,double);
	virtual void display();
	virtual void accept();
	virtual int *calculaterank(double [],int [])=0;
	double getpercentage();

};


