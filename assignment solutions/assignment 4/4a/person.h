#include<iostream.h>

class person
{
	char name[20];
	int age;
	double incentive;
public :
	person();
	person(char *,int,int) ;
	~person();
	double calsal();
	void display();
	void accept();

};