#include"Account.h"
#include"Savingsaccount.h"

Savingsaccount::Savingsaccount()
{
	AverageBalance=Interest=0;
}

Savingsaccount::Savingsaccount(int i,char *nm,int a,int b,double ab)
: Account(i,nm,a,b)
{
	AverageBalance=ab;
	if(AverageBalance<=5000)
		Interest=10;
	else
		Interest=20;
}
void Savingsaccount::display()
{
	cout<<"\n\n--------Saving Account info---------\n";
	Account::display();
	cout<<"\nAverage Balance: "<<AverageBalance;
	cout<<"\nInterest       : "<<Interest;
	cout<<"\nTotal balance  : "<<calculatebalance();
	cout<<"\n--------------------------------------\n";
}

void Savingsaccount::accept()
{
	cout<<"\n\n----Enter Data For Saving Account----";
	Account::accept();
	cout<<"\nAverage Balance:";
	cin>>AverageBalance;
	if(AverageBalance<=5000)
		Interest=10;
	else
		Interest=20;
}

double Savingsaccount::calculatebalance()
{
	double total=balance+((balance*Interest)/100);
	return total;
}