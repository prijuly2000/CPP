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
	virtual void accept();
	virtual void display();
	~employee();
	virtual void calsal()=0;


};
