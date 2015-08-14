#include"Currentaccount.h"

Currentaccount::Currentaccount()
{
	CreditAmount=MonthlyCharges=0;
}

Currentaccount::Currentaccount(int i,char *nm,int a,int b,double c)
:Account(i,nm,a,b)
{
	if(CreditAmount<=5000)
		MonthlyCharges=10;
	else
		MonthlyCharges=20;
}

void Currentaccount::display()
{
	cout<<"\n\n--------Current Account info---------\n";
	Account::display();
	cout<<"\nCredit Amount  : "<<CreditAmount;
	cout<<"\nTotal balance  : "<<calculatebalance();
	cout<<"\nMonthly Charges: "<<MonthlyCharges;
	cout<<"\n-------------------------------------\n\n";
}

void Currentaccount::accept()
{
	cout<<"\n\n----Enter Data For Current Account----";
	Account::accept();
	cout<<"\nEnter Credit Amount:";
	cin>>CreditAmount;
	if(CreditAmount<=5000)
		MonthlyCharges=10;
	else
		MonthlyCharges=20;
		
}

double Currentaccount::calculatebalance()
{
	double total;
	MonthlyCharges=(balance*MonthlyCharges)/100;
	total=balance-MonthlyCharges;
	return total;
}