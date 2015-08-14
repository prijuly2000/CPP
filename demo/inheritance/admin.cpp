#include"admin.h"


admin::admin()
{
	cout<<"\nadmin default constructor called\n";
	com=0;


}

admin::admin(double c)
{
	com=c;

}

admin::admin(int id,char *name,double b,double c):employee(id,name,b)
{
	com=c;

}

void admin::display()
{
	employee::display();
	cout<<"\ncommission:"<<com;
}

void admin::accept()
{
	employee::accept();
	cout<<"\nenter the commission\n";
	cin>>com;
}

admin::~admin()
{
	cout<<"\nadmin destroyed\n";
}
void admin::calsal()
{
	cout<<"\nsalary : "<<employee::basic+com<<endl;
}

