#include"string.h"

string::string()
{
	length=0;
	pstr=new char[length+1];   
}


string::string(char *ptr)
{
	this->length=strlen(ptr);
	pstr=new char[this->length+1];
	strcpy(this->pstr,ptr);	
}

string::string(string &st)
{
	length=st.length;
	pstr=new char[length+1];
	strcpy(pstr,st.pstr);
}

void string::display()
{
	cout<<"\nlength = "<<length;
	cout<<"\tstring = "<<pstr<<endl;
}

string::~string()
{
	cout<<"dest called\n";
	delete []pstr;
}

string string::operator+(string &st)
{
	string result;
	result.length=this->length+st.length;
	delete []result.pstr;
	result.pstr=new char[result.length+1];
	strcpy(result.pstr,this->pstr);
	strcat(result.pstr,st.pstr);
	return result;
}

string string::operator=(string &t)
{
	this->length=t.length;
	delete []this->pstr;
	this->pstr=new char[this->length+1];
	strcpy(this->pstr,t.pstr);
	return *this;
}

char &string::operator[](int index)
{
	return pstr[index];

}
