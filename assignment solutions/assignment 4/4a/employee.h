#include"person.h"

class employee : public person
{
	int eid,basic;
public:
	employee();
	employee(char *,int,int,int,int);
	~employee();
	void display();
	double calsal();
	void accept();

};