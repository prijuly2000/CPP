#include"emp.h"

class Programmer: public Emp
{
	int extrahrs;
	double costperhrs;
public:
	Programmer();
	Programmer(int,char *,int,int,int);
	~Programmer();
	void display();
	double calsal();
	void accept();
};