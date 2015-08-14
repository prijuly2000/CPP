#include<iostream.h>

class complex
{
	int real,imag;
	static int count;


public:
	complex();
	complex(int,int);


	int getreal();
	int getimag();
	void setreal(int);
	void setimag(int);
	void accept();
	void display();
    static void displaycount();
    
};
