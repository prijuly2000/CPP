#include"Emp.h"

class admin:public Emp
{
	double incentive;

public:
	admin();
	admin(int,char*,double,double);
	~admin();
	void display();
	void accept();
	double calsal();

};