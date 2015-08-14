#include"player.h"

void main()
{
	player p1[3],temp;
	int len[3],i,wkts[3],index[3],*ptr,*ptr1;

	

	for(i=0;i<3;i++)
		p1[i].accept();



	for(i=0;i<3;i++)
	{
		index[i]=i;
		wkts[i]=p1[i].getwkts();
	}
	for(i=0;i<3;i++)
		p1[i].display();

	

	ptr=p1[0].dis_max_wkts(wkts,index);
	
	cout<<"\n\n----------------------\nPlayer with maximum wickets : ";
	p1[*ptr].display();
	cout<<"\n-------------------------\n\n";

	for(i=0;i<3;i++)
	{
		index[i]=i;
		wkts[i]=p1[i].getwkts();
	}
	for(i=0;i<3;i++)
	{
		len[i]=p1[i].getlen();
	}


	ptr1=p1[0].dis_name(len,index);
	ptr=ptr1;
	
	/*for(i=0;i<3;i++,ptr1++)
	{
		p1[*ptr1].display();
	}*/

	

	cout<<"\n\n-------------Sorted Record--------------\n";
	player p3[3];

	for(i=0;i<3;i++,ptr++)
		p3[i].copyobject(p1[*ptr]);
	

	for(i=0;i<3;i++,ptr++)	
		p3[i].display();
	cout<<"\n\n----------------------\n\n";
	
	


}