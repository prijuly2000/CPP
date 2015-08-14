#include"Complex.h"
void main()
{
	Complex c1[5];
	Complex::displaycount();
	Complex c2(10,20);
	Complex::displaycount();
	c2.display();

	Complex *p=new Complex[4];
	Complex::displaycount();
	delete []p;

	Complex c4;
	c4.accept();

	Complex c3(c4);
	c3.display();


}