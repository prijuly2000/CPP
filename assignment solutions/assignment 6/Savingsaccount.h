#include"Account.h"

class Savingsaccount:public Account
{
	double AverageBalance;
    double Interest;
public:
	Savingsaccount();
	Savingsaccount(int,char *,int,int,double);
	void display();
	void accept();
	double calculatebalance();

};