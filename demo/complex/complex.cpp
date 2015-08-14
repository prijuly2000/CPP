

#include"complex.h" 
int complex::count=0;

complex::complex()
{
	real=imag=0;
	count++;
}
complex::complex(int r,int i)
{
	real=r;
	imag=i;
	count++;
}

inline int complex::getreal()
{
	return real;
}
int complex::getimag()
{
	return imag;
}
void complex::setreal(int r)
{
	real=r;
}

void complex::setimag(int i)
{
	imag=i;
}

void complex::accept()
{
	cin>>real>>imag;
}
void complex::display()
{
	cout<<"\n"<<count<<"     "<<real<<"+i"<<imag;
}

void complex::displaycount()
{
	cout<<"\n number :   "<<count;
}
