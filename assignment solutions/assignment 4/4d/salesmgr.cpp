#include"salesmgr.h"

Salesmgr::Salesmgr()
{
	target=0;
	commission=0;

}

Salesmgr:: Salesmgr(int i,char*n,double b,int t,int c):Emp(i,n,b)
{
	target=t;
	commission=c;
}

Salesmgr:: ~Salesmgr()
{
	cout<<"\nsalesmgr destroyed";
}

void Salesmgr::display()
{
	Emp::display();
	cout<<"\ntarget      :"<<target;
	cout<<"\ncommission  :"<<commission;
	cout<<"\ntotal salary:"<<calsal();
}

void Salesmgr::accept()
{
	Emp::accept();
	cout<<"\nenter target      :";
	cin>>target;
    cout<<"\nenter commission  :";
	cin>>commission;

}

double Salesmgr::calsal()
{
	return Emp::calsal()+(target*commission);
}