#include<iostream.h>

class complex
{
	int real,imag;
public:
	
	void accept();
	complex operator+(complex &c);
	void display();
};
