#include"Student.h"

class Enggstudent:public Student
{
	char Specialization[20];
	int  MarksOfInternship;
public:
	Enggstudent();
	Enggstudent(int,char*,int,double,char *,int);
	void display();
	void accept();
	int *calculaterank(double[],int[]);


};