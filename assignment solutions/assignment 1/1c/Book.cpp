#include"Book.h"
#include<string.h>

Book::Book()
{
	strcpy(bname,"");
	id=0;
	strcpy(author,"");
	price=0;
}

Book::Book(char *ptr1,int i,char *ptr2,int p)
{
	strcpy(bname,ptr1);
	id=i;
	strcpy(author,ptr2);
	price=p;

}

void Book::setbname(char *ptr1)
{
	strcpy(bname,ptr1);
}

void Book::setid(int i)
{
	id=i;
}

void Book::setauthor(char *ptr1)
{
	strcpy(author,ptr1);
}

void Book::setprice(int p)
{
	price=p;
}

char *Book::getbname()
{
	return bname;
}


int Book::getid()
{
	return id;
}

char *Book::getauthor()
{
	return author;
}


int Book::getprice()
{
	return price;
}

void Book::display()
{
	cout<<"\n\nBook info :\n"<<bname<<"  "<<id<<"  "<<author<<"  "<<price<<"\n";
}

void Book::accept()
{
	cout<<"Enter the info of book : ";
	cin>>bname>>id>>author>>price;
}