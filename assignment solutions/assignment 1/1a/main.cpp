#include"person.h"

void main()
{
	person p;
	cout<<"\n\n";
	p.display();

	cout<<"\n\n";
	person p1("neeraj",23,"brmt");
	p1.display();

	p.setname("nt");
	p.setage(23);
	p.setcity("Jaipur");
	

	cout<<"\n\nName :"<<p.getname();
	cout<<"\nage  :"<<p.getage();
	cout<<"\nCity :"<<p.getcity()<<endl<<endl;

	person p4;
	p4.accept();
	p4.display();

}