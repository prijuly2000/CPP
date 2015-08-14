#include"emp.h"

class admin :public employee
{
	double com;

public:
	admin();
	admin(double);
	admin(int,char *,double,double);
	void display();
	void accept();
	~admin();
	void calsal();


};