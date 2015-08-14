#include"time.h"
#include<malloc.h>

time::time()
{
	hr=min=sec=0;

}

ostream & operator<<(ostream &o,time &t)
{
	o<<"Time = "<<t.hr<<" : "<<t.min<<" : "<<t.sec<<endl; 
	return o;
}

istream &operator>>(istream &in,time &t)
{
	t.ptr=new int[3];
	in>>t.hr>>t.min>>t.sec;
	t.ptr[0]=t.hr;
	t.ptr[1]=t.min;
	t.ptr[2]=t.sec;
	return in;
}

time time::operator+(time &t)
{
	time result;
	result.hr=this->hr+t.hr;
	result.min=this->min+t.min;
	result.sec=this->sec+t.sec;
	return result;

		
}

time time::operator -(time &t)//t3=t1-t2   t3=t1.operator-(t2);
{
	time result;
	result.hr=this->hr-t.hr;
	result.min=this->min-t.min;
	result.sec=this->sec-t.sec;
	return result;
}

bool time::operator<(time &t)
{
	if(hr<t.hr)
		return true;
	else if(min<t.min)
		return true;
	else if(sec<t.sec)
		return true;

	return false;

}

time::time(int hr,int min,int sec)
{
	this->hr=hr;
	this->min=min;
	this->sec=sec;
}

bool time::operator>(time &t)
{
	if(hr>t.hr)
		return true;
	else if(min>t.min)
		return true;
	else if(sec>t.sec)
		return true;
	return false;

}

time time::operator++(int x)//t1++ t1=t1+1   t3=t1.operator++(1)
{
	time result;
	result.hr=this->hr++;
	result.min=this->min++;
	result.sec=this->sec++;
	return result;
}

time time::operator ++()
{
	++this->hr;
	++this->min;
	++this->sec;
	return *this;
}

time time::operator--(int x)
{
	time result;
	result.hr=this->hr--;
	result.min=this->min--;
	result.sec=this->sec--;
	return result;
}

time time::operator--()
{
	--this->hr;
	--this->min;
	--this->sec;
	return *this;
}

time::~time()
{
	cout<<"\ndest called\n";
}

int &time::operator [](int index)
{
	return ptr[index];
}

void * time::operator new(size_t s)
{
	cout<<"\nmy new called\n";
	void * m=malloc(s); //char *m=(char *)malloc(sizeof(char));
	return m;
}

void time::operator delete(void * m)
{
	cout<<"\nMy delete called \n";
	free(m);
}

