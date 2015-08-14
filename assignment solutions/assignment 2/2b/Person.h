#include<iostream.h>

class Person
{
	char name[10],city[10];
	int age;
	static int count;
public:
	Person();
	Person(char *,int,char *);
	Person(Person &);
	static void displaycount();
	~Person();
	void display();
	void accept();
};