#include"person.h"

void main()
{
	person p;

	cout<<endl<<"Enter the information "<<endl;

	p.setname("neeraj");
	p.setage(23);

	p.display();

	p.accept();
	p.display();

	
	

}
