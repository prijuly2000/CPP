#include"Book.h"

void main()
{

	Book b1;
	b1.display();

	Book b2("Neeraj",1,"tiwari",100);
	b2.display();

	Book b3;
	b3.setbname("Pritesh");
	b3.setid(2);
	b3.setauthor("Gandhi");
	b3.setprice(200);
	cout<<"\n\n-------------BOOK info-----------\n\n"<<b3.getbname()<<"  "<<b3.getid()<<"  "<<b3.getauthor()<<"  "<<b3.getprice()<<endl;
	
	Book b4;
	b4.accept();
	b4.display();
}