#include<iostream.h>

class Book
{
	char bname[20],author[20];
	int id,price;

public:
	Book();
	Book(char *,int,char *,int);
	void setbname(char *);
	void setid(int );
	void setauthor(char *);
	void setprice(int);
	char *getbname();
	int getid();
	char *getauthor();
	int getprice();
	void display();
	void accept();
};
