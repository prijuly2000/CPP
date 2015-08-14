#include"employee.h"

class Salesmgr:public employee
{
	double target,commission;
public:
	Salesmgr();
    Salesmgr(int,char*,double,double,double);
    ~Salesmgr();
	void display();
	void accept();
	double calsal();
};