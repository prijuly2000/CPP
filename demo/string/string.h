#include<iostream.h>
#include<string.h>
 
class string
{
	char *pstr;
	int length;

public:
   
	string();
	string(char *);
	string(string &);
	void display();
    ~string();
	string operator+(string &);
	string operator=(string &);
	char &operator[](int);

};
