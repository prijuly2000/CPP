#include"string.h"

void main()
{
	string s1("Hello");
	string s2(s1),s3;

	s2.display();
	s3=s1+s2;
	s3.display();

	char ch=s3[2];
	cout<<"\nchar s3[2] = "<<ch<<endl<<endl;

	s3[2]='*';
	s3.display();

}
