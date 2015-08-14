#include"Batsman.h"
#include"Bowler.h"

void main()
{
	Player *p;
	
	p=new Batsman[2];
	
	cout<<"\n\n----------------\n\n";
	//b=p[0];

	for(int i=0;i<2;i++)
		p[i].accept();

	cout<<"\n\n-----Players info-----\n";
	for(i=0;i<2;i++)
	{
		p[i].display();
		cout<<"\nPlayer rank:"<<p[i].calculaterank();
		cout<<"\n----------------------";
	}
	
	
}