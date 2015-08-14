#include"player.h"
#include<string.h>


     
player::player()
{
	//cout<<"\n\n default constructor is called\n\n";
    strcpy(name,"");
	strcpy(role,"");
    id=ar=wkts=ip=0;

}

void player::accept()
{
	cout<<"\nEnter the info in name,role,id,avg runs,wickets,innings played\n\n";
	cin>>name>>role>>id>>ar;
	cin>>wkts>>ip;
}

void player::display()
{
	cout<<endl<<name<<"  "<<role<<"  "<<id<<"  "<<ar<<"  ";
	cout<<wkts<<"  "<<ip<<endl;
}

int *player::dis_max_wkts(int wkts[],int index[])
{
	int i,j,temp;
	
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			if(wkts[j]<wkts[j+1])
			{
				temp=wkts[j];
				wkts[j]=wkts[j+1];
				wkts[j+1]=temp;
				temp=index[j];
				index[j]=index[j+1];
				index[j+1]=temp;
			}

	return index;	
}

int * player::dis_name(int len[],int index[])
{
	int i,j,temp;
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			if(len[j]>len[j+1])
			{
				temp=len[j];
				len[j]=len[j+1];
				len[j+1]=temp;
				temp=index[j];
				index[j]=index[j+1];
				index[j+1]=temp;

			}
			return index;

}

int player::getlen()
{
	return strlen(name);
}


int player::getwkts()
{
	return wkts;
}

void player::copyobject(player p)
{
	strcpy(this->name,p.name);
	strcpy(this->role,p.role);
	this->id=p.id;
	this->ar=p.ar;
	this->wkts=p.wkts;
	this->ip=p.ip;
}
