#include<iostream.h>

void main()
{
	int a[4],index;
	cin>>index;
	try
	{
		if(index>=4)
			throw index;
		else if(index<0)
			throw "sory";
		else
			cout<<"no problem";
		
	}
	catch(int e)
	{
		cout<<"\nindex invalid"<<e;
	}
	catch(...)
	{
		cout<<"\nNot possible\n"<<index;
	}
}