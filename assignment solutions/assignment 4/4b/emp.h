#pragma once
#include<iostream.h>

class Emp
{
	int id;
	char name[20];
	int basic;
public:
	Emp();
	Emp(int,char*,int);
	~Emp();
	void display();
	double calsal();
	void accept();
};

