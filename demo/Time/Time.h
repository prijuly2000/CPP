#include<iostream.h>

class Time
{
private:
	int Hr,Min,Sec;
public:
	int getHr();
	int getMin();
	int getSec();
	void setHr(int h);
	void setMin(int m);
	void setSec(int s);
	void accept();
	void display();

};