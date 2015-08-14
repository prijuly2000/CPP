#include"salesmgr.h"

void main()
{
	Salesmgr s1[3];
	cout<<"\n\n------------------------------\n";
	for(int i=0;i<3;i++)
		s1[i].accept();

	cout<<"\n\n------Sales Manager Record-----\n";
	for(i=0;i<3;i++)
	{
		s1[i].display();
		cout<<"\n\n------------------------------\n";
	}

}