#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

/*class emp
{
	int id,age;
	char name[20];
public:
	emp()
	{
		id=0;
		strcpy(name,"");
		age=0;
	}
	emp(int i,char*nm,int a)
	{
		id=i;
		strcpy(name,nm);
		age=a;
	}
	void display()
	{
		cout<<"\nid="<<id;
		cout<<"\nname="<<name;
		cout<<"\nage="<<age;
	}
};
void main1()
{
	ofstream out;
	out.open("file.txt");
	
	char ch;
	cin>>ch;
	out.put(ch);
	out.close();
}

void main2()
{
	ofstream out;
	out.open("file.txt");
	char ch;
	cout<<"\nEnter data and press $ to stop";
	while(ch!='$')
	{
		cin>>ch;
		out.put(ch);
	}
	out.close(); 
	

}

void main3()
{
	ifstream in("file.txt");
	char ch;
	ch=in.get();
	cout<<ch;
	
}

void main4()
{
	ifstream in("file.txt");
	char ch;
	while((ch=in.get())!='$')
		cout<<ch;
	in.close();
}

void main5()
{
	ofstream out;
	out.open("file.txt");
	char str[30];
	cin>>str;
	out<<str;
	out.close();
	
}

void main6()
{
	ifstream in("file.txt");
	if(in==NULL)
	{
		cout<<"\nsory file NOT present\n";
		return;
	}
	char str[30];
	in>>str;
	cout<<str;
	in.close();
}

void main7()
{
	ifstream in("file.txt");
	char str[30];
	while(!in.eof())
	{
		in>>str;
		cout<<str;
	}
	in.close();
}

void main8()
{
	ofstream out;
	out.open("file.txt");
	char str[30];
	while(1)
	{
		cin>>str;
		out<<str<<"\n";
		if(*str=='$')
			break;
		
	}
	out.close();
}

void main9()
{
	ofstream out("file.txt");
	int d;
	double f;
	char nm[20];
	cin>>d>>nm>>f;
	out<<d<<" "<<nm<<" "<<f;
	out.close();
}

void main10()
{
	fstream inout;
    //inout.open("file.txt",ios_base::in | ios_base::out);
	inout.open("file.dat",ios_base::binary);//|ios_base::in|ios_base::out);
	char str[20];
	//cin>>str;
	//inout<<str;
	flushall();
	inout>>str;
	cout<<str;
	inout.close();
}

void main()
{
	int x;
	ifstream in;
	in.open("file.txt",ios_base::binary);
	in.read((char*)&x,sizeof(int));
	cout<<x;
	ofstream out("file.txt",ios_base::binary);
	out.write((char *)&x,sizeof(int));
	cin>>x;
	out.write((char *)&x,sizeof(int));
	out.close();
	in.close();
}
*/
void main()
{
	int x;
	ifstream in;
	in.open("file.txt",ios_base::binary);
	in.read((char*)&x,sizeof(int));
	cout<<"x="<<x;
	in.read((char*)&x,sizeof(int));
	cout<<"x="<<x;
	in.close();

}
/*
void main13()
{
	int x[4]={5,6,7,8};
	ofstream out("file.txt",ios_base::binary);
	out.write((char*)x,sizeof(int)*4);
	out.close();

}

void main14()
{
	int x[4];
	
	ifstream in("file.txt",ios_base::binary);
	in.read((char*)x,sizeof(int)*4);
	cout<<x[0]<<x[1]<<x[2]<<x[3];
	in.close();

}

void main15()
{
	emp e1(1,"pritesh",30);
	ofstream out("file.txt",ios_base::binary);
	out.write((char *)&e1,sizeof(e1));
	out.close();

}

void main16()
{
	emp e1;
	ifstream in("file.txt",ios_base::binary);
	in.read((char *)&e1,sizeof(e1));
	e1.display();
	in.close();

}

void main17(int argc,char *argv[])
{
	cout<<"\n no of Args="<<argc;
	for(int i=0;i<argc;i++)
		cout<<"  "<<argv[i];

} */




