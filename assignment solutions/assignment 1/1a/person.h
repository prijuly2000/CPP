#include<iostream.h>

class person
{
	char name[10],city[10];
	int age;
public:
	person();
	person(char *,int,char *);
	void setname(char *);
	void setage(int );
	void setcity(char *);
	char * getname();
	int getage();
	char *getcity();
	void display();
	void accept();
};