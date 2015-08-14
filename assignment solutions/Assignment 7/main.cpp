#include"Enggstudent.h"
#include"Medicalstudent.h"

void main()
{
	
	int i,index[3],*ind;
	double per[3];

	
	cout<<"\n\n---Engineering Student---";
	Enggstudent e1[3];
	for( i=0;i<3;i++)
	{
		e1[i].accept();
		per[i]=e1[i].getpercentage();
		index[i]=i;
	}

	ind=e1[0].calculaterank(per,index);

	for(i=0;i<3;i++,ind++)
	{
		cout<<"Rank    :"<<i;
		e1[*ind].display();
	}
	
	cout<<"\n\n----Medical Student---\n";
	Medicalstudent m1[3];
	
	
	for(i=0;i<3;i++)
	{
		m1[i].accept();
		per[i]=m1[i].getpercentage();
		index[i]=i;
	}

	ind=m1[0].calculaterank(per,index);

	for(i=0;i<3;i++,ind++)
	{
		cout<<"\n\n--------Medical Stuident info-------\n";
		cout<<"Rank    :"<<i+1;
		m1[*ind].display();
	}


		
}