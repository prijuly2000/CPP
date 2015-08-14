#include<iostream.h>


class player
{
	char name[10],role[10];
    int id,ar,ip;
	int wkts;

public:
	
	 player();	 
	 int getwkts();
	 void accept();
	 void display();
	 int *dis_max_wkts(int [],int[]);
	 int * dis_name(int [],int[]);
	 void copyobject(player);
	 int getlen();
	 

};





