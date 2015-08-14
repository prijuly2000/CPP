#include"admin.h"
#include<string.h>

admin::admin()
{
	incentive=0;

}
admin::admin(int i,char*n,double b,double in):Emp(i,n,b)
{
		incentive=in;

}
	admin::~admin()
{
		cout<<"\nadmin destroyed";
	
}
	void admin::display()
{
		Emp::display();
		cout<<"\n\n-------Admin Info -------\n";
		cout<<"\nadmin incentive :"<<incentive;
		cout<<"\ntotal salary    :"<<calsal();

}
	void admin::accept()
{
		Emp::accept();
		cout<<"\nadmin incentive :";
		cin>>incentive;

}
	double admin::calsal()
{
		return Emp::calsal()+incentive;

}
