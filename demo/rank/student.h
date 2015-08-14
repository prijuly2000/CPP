#pragma once
#include<iostream.h>

class Student
{
protected:

	int id;
	char name[20];
    double percent;
	int theory;

public:
	Student();
	Student(int,char*,double,int);
	virtual void display()=0;
	//virtual void calrank(Student[])=0;
	~Student();
};