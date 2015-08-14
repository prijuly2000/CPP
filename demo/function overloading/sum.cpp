#include"sum.h"

add::add()
{
	a=b=c=0;

}

add::add(int x,int y)
{
	a=x;
	b=y;
	c=0;
}

add::add(int x,int y,int z)
{
	a=x;
	b=y;
	c=z;
}

int add::sum()
{
	return (a+b+c);
}

int add::sum(int x,int y)
{
	a=x;
	b=y;
	c=0;
	return a+b+c;
}

int add::sum(int x,int y,int z)
{
	a=x;
	b=y;
	c=z;
	return a+b+c;
}