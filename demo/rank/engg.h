#pragma once
#include"student.h"

class Engg:public Student
{
	int internal;
	char branch[20];

public:
	Engg();
	Engg(int,char*);
	void accept();
	void calrank(Engg[]);
	void display();
	~Engg();


};