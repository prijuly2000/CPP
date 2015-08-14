#include"student.h"
#include"engg.h"
#include<string.h>

Engg::Engg()
{
	internal=0;
	strcpy(branch,"");

}
Engg::Engg(int m,char*br)
{
	internal=m;
	strcpy(branch,br);


}	


void Engg::display()
{
	cout<<"\n---------student info-------\n";
	//cout<<"\nstudent id:"<<id;
	cout<<"\nstudent name:"<<name;
	cout<<"\nstudent percent:"<<percent;
    //cout<<"\ninternal marks:"<<internal;
	//cout<<"\nbranch name:"<<branch;
	cout<<"\n----------------------------\n";


}

Engg::~Engg()
{
}

void Engg::accept()
{
	//cout<<"\nenter id:";
    //cin>>id;
	cout<<"\nenter name:";
	cin>>name;
	cout<<"\n enter percent:";
	cin>>percent;
	//cout>>"\nenter marks:";
	//cin>>internal;
	//cout<<"\n enter branch:";
	//cin>>branch;
}

void Engg::calrank(Engg s[3])
{
	int i,j;
	Engg temp;
	for(i=0;i<3;i++)
		for(j=0;j<2;i++)
			if(s[j].percent>s[j+1].percent)
			{
				temp.percent=s[j].percent;
				s[j].percent=s[j+1].percent;
				s[j+1].percent=temp.percent;

				strcpy(temp.name,s[j].name);
				strcpy(s[j].name,s[j+1].name);
				strcpy(s[j+1].name,temp.name);
			}

	for(i=0;i<3;i++)
		s[i].display();

}
