#include"Student.h"

class Medicalstudent:public Student
{
	char Branch[20];
    int InternalMarks;
public:
	Medicalstudent();
	Medicalstudent(int,char*,int,double,char*,int);
	void display();
	void accept();
	int *calculaterank(double[],int[]);

};