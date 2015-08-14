#include"cout.h"

void time::accept()
{
	cin>>hr>>min>>sec;
}

ostream &operator<<(ostream &o,time &t) //t=t1 o=cout
{
	o<<"time : "<<t.hr<<" : "<<t.min<<" : "<<t.sec<<endl;
	return o;
}

time time::operator+(int x)
{
	this->hr=this->hr+x;
	this->min=this->min+x;
	this->sec=this->sec+x;
	return *this;

}

time operator+(int x,time &t)  //friend function
{
	time result;
	result.hr=t.hr+x;
	result.min=t.min+x;
	result.sec=t.sec+x;
	return result;
}

time time::operator++()
{
	hr++;
	min++;
	sec++;
	return *this;
}