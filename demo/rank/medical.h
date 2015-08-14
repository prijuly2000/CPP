#include"student.h"

class Medical:public Student
{
	int internship;
	char special[20];

public:
	Medical();
	Medical(int,char *);
    void accept();
	void display();
    //void calrank(Student[]);

};