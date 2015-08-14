#include"Emp.h"

class Salesmgr:public Emp
{
	int target,commission;
public:
	Salesmgr();
    Salesmgr(int,char*,double,int,int);
    ~Salesmgr();
	void display();
	void accept();
	double calsal();
};