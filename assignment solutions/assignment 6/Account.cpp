#include"Account.h"
#include<string.h>

Account::Account()
{
	aid=0;
	strcpy(customername,"");
	age=0;
	balance=0;
}

Account::Account(int i,char *nm,int a,int b)
{
	aid=i;
	strcpy(customername,nm);
	age=a;
	balance=b;
}

void Account::display()
{
	cout<<"\nID             : "<<aid;
	cout<<"\nname           : "<<customername;
	cout<<"\nAge            : "<<age;
	cout<<"\nBalance        : "<<balance;
	
}

void Account::accept()
{
	cout<<"\nEnter ID	:";
	cin>>aid;
	cout<<"\nEnter name	:";
	cin>>customername;
	cout<<"\nEnter Age	:";
	cin>>age;
	cout<<"\nEnter Balance:";
	cin>>balance;
}