#include"operator+.h"

void complex::accept()
{
	cin>>real>>imag;
}

complex complex::operator+(complex &c)
{
	complex temp;
	temp.real=real+c.real;
	temp.imag=imag+c.imag;
	return temp;
}

void complex::display()
{
	cout<<"\nAddition : "<<real<<"+"<<imag<<"i\n\n";
}