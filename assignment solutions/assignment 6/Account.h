#pragma once
#include<iostream.h>

class Account
{
	int aid;
	char customername[20];
	int age;
protected:
	double balance;
public:
	Account();
	Account(int,char *,int,int);
	virtual void display();
	virtual void accept();
	virtual double calculatebalance()=0;

};