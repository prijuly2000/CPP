#include"Complex.h"

int Complex::count=0;

Complex::Complex()
{
	cout<<"\nDefault constructor called\n";
	real=imag=0;
	count++;
}

Complex::Complex(int r,int i)
{
	cout<<"\nParameterised constructor called\n";
	real=r;
	imag=i;
	count++;
}

void Complex::displaycount()
{
	cout<<"\n number :   "<<count;
}

void Complex::display()
{
	cout<<"\n "<<real<<"+"<<imag<<"i\n\n";
}

Complex::~Complex()
{
	cout<<"\nDestructor is called\n";
}

Complex::Complex(Complex &c)
{
	cout<<"\n\ncopy constructor called\n";
	this->real=c.real;
	this->imag=c.imag;

}

void Complex::accept()
{
	cout<<"Enter the real & imaginary values:";
	cin>>real>>imag;
}



