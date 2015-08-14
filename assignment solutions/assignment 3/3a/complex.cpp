#include"complex.h"

complex::complex()
{
	real=imag=0;
}

void complex::accept()
{
	cout<<"Enter the real & imag : ";
	cin>>real>>imag;
}

complex complex::operator+(complex &c)
{
	complex result;
	result.real=real+c.real;
	result.imag=imag+c.imag;
	return result;
}

complex complex::operator-(complex &c)
{
	complex result;
	result.real=real-c.real;
	result.imag=imag-c.imag;
	return result;
}

/*void complex::display()
{
	if(imag<0)
		cout<<"\n complex number : "<<real<<imag<<"i";
	else
		cout<<"\n complex number : "<<real<<"+"<<imag<<"i";

}
*/
ostream & operator<<(ostream &o,complex &c)
{
	if(c.imag<0)
		o<<" complex number : "<<c.real<<c.imag<<"i\n\n";
	else
		o<<" complex number : "<<c.real<<"+"<<c.imag<<"i\n\n";
	return o;
}

istream & operator>>(istream &in,complex &c)
{
	cout<<"Enter the real & imag : ";
	in>>c.real>>c.imag;	
	return in;
}

bool complex::operator<(complex &c2)
{
	if(real<c2.real)
		return true;
	if(real==c2.real)
		if(imag<c2.imag)
			return true;
	return false;
}

bool complex::operator>(complex &c2)
{
	if(real>c2.real)
		return true;
	if(real==c2.real)
		if(imag>c2.imag)
			return true;
	return false;

}

complex complex::operator++(int x)
{
	complex result;
	result.real=this->real++;
	result.imag=this->imag++;
	return result;
}
	
complex complex::operator++()
{
	complex result;
	result.real=++this->real;
	result.imag=++this->imag;
	return result;
}

complex complex::operator--(int x)
{
	complex result;
	result.real=this->real--;
	result.imag=this->imag--;
	return result;
}

complex complex::operator--()
{
	complex result;
	result.real=--this->real;
	result.imag=--this->imag;
	return result;
}