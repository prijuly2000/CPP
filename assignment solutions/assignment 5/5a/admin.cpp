#include"admin.h"
#include<string.h>

admin::admin()
{
	incentive=0;

}

admin::admin(int i,char*n,double b,int in):employee(i,n,b)
{
		incentive=in;

}

admin::~admin()
{
		cout<<"\nadmin destroyed";
	
}

void admin::display()
{		
		cout<<"\n\n-------Admin Info -------\n";
		employee::display();
		cout<<"\nadmin incentive :"<<incentive;
		//cout<<"\n Salary (CalSal):"<<calsal();
		cout<<"\n\n-------------------------\n";

}

void admin::accept()
{
		employee::accept();
		cout<<"\nadmin incentive :";
		cin>>incentive;

}

double admin::calsal()
{
		return basic+incentive;

}
