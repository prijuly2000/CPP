#include<iostream.h>

class array
{
	int *ptr;
public:
	array();
	
	friend ostream &operator<<(ostream &,array &);
	friend istream &operator>>(istream &,array &);
	array operator+(array &);
	array operator-(array &);
	array operator=(array &);// when there is pointer in the class then we have to overload operator = & write copy constructor
	array(array &);
	~array();
	int operator[](int);

};