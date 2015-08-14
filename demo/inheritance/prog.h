#include"emp.h"
class programmer:public employee
{
	int extrahrs;
	double costperhrs;

public:
	programmer();
	programmer(int,double);
	programmer(int,char *,double,int,double);
	void display();
	void accept();
	~programmer();
	void calsal();


};

	