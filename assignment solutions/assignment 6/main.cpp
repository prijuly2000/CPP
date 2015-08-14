#include"Savingsaccount.h"
#include"Currentaccount.h"

void main()
{
	Savingsaccount s1;
	Currentaccount c1;
	
	s1.accept();
	c1.accept();

	s1.display();
	c1.display();
}