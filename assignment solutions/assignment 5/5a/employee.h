#pragma once
#include<iostream.h>

class employee 
{
	char name[20];
	int eid;
protected:
	double basic;
public:
	employee();
	employee(int,char *,double);
	~employee();
	virtual void display();
	virtual double calsal()=0;
	virtual void accept();

};