#include"Date.h"

void main()
{
	Date d1;
	d1.display();

	Date d2(3,12,1990);
	d2.display();

	Date d3(19,3,1989);
	cout<<"Date :"<<d3.getdd();
	cout<<" : "<<d3.getmm()<<" : "<<d3.getyy()<<endl;

	Date d4;
	d4.accept();
	d4.display();

}