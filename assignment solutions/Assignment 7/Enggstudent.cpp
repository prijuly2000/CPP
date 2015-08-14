#include"Enggstudent.h"
#include<string.h>


Enggstudent::Enggstudent()
{
	strcpy(Specialization,"");
	MarksOfInternship=0;
}

Enggstudent::Enggstudent(int i,char*nm,int a,double per,char *s,int in)
:Student(i,nm,a,per)
{
	strcpy(Specialization,s);
	MarksOfInternship=in;
}

void Enggstudent::display()
{
	cout<<"\n\n-------Enggineer Student-------\n";
	Student::display();
	cout<<"\nEnter Specialization:"<<Specialization;
	cout<<"\nInternship marks:"<<MarksOfInternship;
	cout<<"\n---------------------------------\n\n";

}

void Enggstudent::accept()
{
	Student::accept();
	cout<<"\nEnter Specialization:";
	cin>>Specialization;
	cout<<"\nInternship marks:";
	cin>>MarksOfInternship;
}



int *Enggstudent::calculaterank(double per[],int index[])
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