#pragma once
#include<iostream.h>

class Emp
{
	int id;
	char name[20];
	double basic;

public:
	Emp();
	Emp(int,char*,double);
	~Emp();
	void accept();
	double calsal();
	void display();


};