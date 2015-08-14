#include"employee.h"

class admin:public employee
{
	int incentive;

public:
	admin();
	admin(int,char*,double,int);
	~admin();
	void display();
	void accept();
	double calsal();

};