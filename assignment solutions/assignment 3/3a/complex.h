#include<iostream.h>

class complex
{
	int real,imag;
public:
	complex();
	void accept();
	complex operator+(complex &);
	complex operator-(complex &);
	friend ostream & operator<<(ostream &,complex &);
	friend istream & operator>>(istream &,complex&);
	bool operator<(complex &);
	bool operator>(complex &);
	complex operator++(int );
	complex operator++();
	complex operator--(int);
	complex operator--();
	//void display();
};