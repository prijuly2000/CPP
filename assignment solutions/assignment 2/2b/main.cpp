#include"Person.h"

void main()
{
	Person p1[5];
	Person::displaycount();
	Person p2("Pritzz",21,"nt");
	cout<<"\n\n  ";
	Person::displaycount();

	Person *p;
	p=new Person[3];
	delete []p;

	Person p4;
	p4.accept();

	Person p3(p4);
	p3.display();

	
}