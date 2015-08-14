#include"salesmgr.h"

Salesmgr::Salesmgr()
{
	target=0;
	commission=0;

}

Salesmgr:: Salesmgr(int i,char*n,double b,double t,double c):employee(i,n,b)
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
	cout<<"\n\n-------Sales Manager Info -------\n";
	employee::display();
	cout<<"\ntarget      :"<<target;
	cout<<"\ncommission  :"<<commission;
	//cout<<"\ntotal salary:"<<calsal();
	cout<<"\n\n---------------------------------\n";
}

void Salesmgr::accept()
{
	employee::accept();
	cout<<"\nenter target  :";
	cin>>target;
    cout<<"\nenter comision:";
	cin>>commission;

}

double Salesmgr::calsal()
{
	return basic+(target*commission);
}