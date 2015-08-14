#include"Account.h"

class Currentaccount:public Account
{
	double CreditAmount;
	double MonthlyCharges;
public:
	Currentaccount();
	Currentaccount(int,char *,int,int,double);
	void display();
	void accept();
	double calculatebalance();

};