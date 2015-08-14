#include<iostream.h>




class Complex
{
	int real,imag;
	static int count;

public:
	Complex();
	Complex(int,int);
	~Complex();
	Complex(Complex &);
	void accept();

	void display();
    static void displaycount();
    
};