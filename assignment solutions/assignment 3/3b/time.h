#pragma once
#include<iostream.h>

class time
{
protected:
	int hr,min,sec;
	int *ptr;
public:
	time();
	void display();
	//virtual time &timmer::operator->()=0;

	friend ostream &operator<<(ostream &,time&);
	time(int,int,int);
	friend istream &operator>>(istream &,time&);
	time operator+(time &);
	time operator-(time &);
	bool operator<(time &);
	bool operator>(time &);
	time operator++(int);
	time operator++();
	time operator--(int);
	time operator--();
	int &operator[](int);
	~time();
	void * operator new(size_t);
	void operator delete(void *);

};


  