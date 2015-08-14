#include<iostream.h>

class person
{
	int age;
	char name[10];

public:
	char *getname();
	int getage();
	void setname(char *);
	void setage(int);
	
	void accept();
	void display();
	
};



