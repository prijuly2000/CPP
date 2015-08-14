#include"student.h"
#include<string.h>
#include"medical.h"
Medical::Medical()
{
	internship=0;
	strcpy(special,"");

}
Medical::Medical(int in,char *sp)
{
	internship=in;
	strcpy(special,sp);
}


void Medical::display()
{
	cout<<"\n---------student info-------\n";
	cout<<"\nstudent id:"<<id;
	cout<<"\nstudent name:"<<name;
	cout<<"\nstudent percent:"<<percent;
    
	
	cout<<"\ninternship marks:"<<internship;
	cout<<"\nspecialization:"<<special;
}

/*void Medical::calrank(Student[])
{

}*/

void Medical::accept()
{
	//cout<<"\nenter id:";
    //cin>>id;
	cout<<"\nenter name:";
	cin>>name;
	cout<<"\n enter percent:";
	cin>>percent;
	//cout>>"\nenter marks:";
	//cin>>internship;
	//cout<<"\n enter branch:";
	//cin>>special;
}

