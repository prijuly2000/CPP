#include"array.h"

array::array()
{
	ptr=new int[3];
	for(int i=0;i<3;i++)
		ptr[i]=0;
	
}



ostream &operator<<(ostream &o,array &a)
{
	o<<"\n\narray :\t";
	for(int i=0;i<3;i++)
		o<<a.ptr[i]<<" ";
	return o;	
}

istream &operator>>(istream &in,array &a)
{
	cout<<"\nEnter the numbers :\t";
	for(int i=0;i<3;i++)
		in>>a.ptr[i];
	return in;
}

array::~array()
{
	delete []ptr;
}

array array::operator+(array &a)
{
	array result;
	for(int i=0;i<3;i++)
		result.ptr[i]=this->ptr[i]+a.ptr[i];
	return result;

}

array array::operator=(array &a)
{
	cout<<"\n\nequal called\n";
	delete []ptr;
	ptr=new int [3];
	for(int i=0;i<3;i++)
		ptr[i]=a.ptr[i];
	return *this;
}

array::array(array &a)
{
	cout<<"\ncopy called\n";
	ptr=new int[3];
	for(int i=0;i<3;i++)
		ptr[i]=a.ptr[i];

}

array array::operator-(array &a)
{
	array result;
	for(int i=0;i<3;i++)
		result.ptr[i]=this->ptr[i]-a.ptr[i];
	return result;
}

int array::operator[](int index)
{
	return ptr[index];
}

