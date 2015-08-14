#include"Medicalstudent.h"
#include<string.h>

Medicalstudent::Medicalstudent()
{
	strcpy(Branch,"");
    InternalMarks=0;
}

Medicalstudent::Medicalstudent(int i,char*nm,int a,double per,char*b,int in)
:Student(i,nm,a,per)
{
	strcpy(Branch,b);
	InternalMarks=in;
}

void Medicalstudent::display()
{
	
	Student::display();
	cout<<"\nBranch        :"<<Branch;
	cout<<"\nInternal Marks:"<<InternalMarks;
	cout<<"\n--------------------------------------\n\n";
}

void Medicalstudent::accept()
{
	Student::accept();
	cout<<"\nEnter Branch : ";
	cin>>Branch;
	cout<<"\nEnter Internal Marks : ";
	cin>>InternalMarks;
}

int * Medicalstudent::calculaterank(double per[],int index[])
{
	int i,j,temp1;
	double temp;
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			if(per[j]<per[j+1])
			{
				temp=per[j];
				per[j]=per[j+1];
				per[j+1]=temp;

				temp1=index[j];
				index[j]=index[j+1];
				index[j+1]=temp1;
			}
	
	return index;

}