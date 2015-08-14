#include"time.h"
#include"timmer.h"

void main()
{
	/*time t1,t2,t3;
	cout<<"Enter hr,min,sec for t1 & t2 : ";
	cin>>t1>>t2;
	t3=t1+t2;
	cout<<t1<<t2<<"addition is "<<t3;
	t3=t1-t2;
	cout<<"Subtraction is "<<t3;

	if(t1<t2)
		cout<<"\n\nt1 is less\n\n";
	else
		cout<<"\n\nt2 is less\n\n";

	if(t1>t2)
		cout<<"\n\nt1 is greater\n\n";
	else
		cout<<"\n\nt2 is greater\n\n";

	t3=t1++;
	cout<<"\n(original t1) t3 "<<t3<<"(post-increment) t1 "<<t1;

	t3=++t1;
	cout<<"\n(original t1) t3 "<<t3<<"(pre-increment) t1"<<t1;

	t3=t1--;
	cout<<"\n(original t1) t3 "<<t3<<"(post-decrement) t1 "<<t1;

	t3=--t1;
	cout<<"\n(original t1) t3 "<<t3<<"(pre-decrement) t1 "<<t1;

	time t5[3];
	int index,value;
	cin>>t5;
	cout<<"\nEnter 0 for hour, 1 for minutes, 2 for seconds :\t";
	cin>>index;
	cout<<index<<"of time "<<"is "<<t5[index]<<endl;


	cout<<"\n\nEnter 0 for setting hour, 1 for setting minutes, 2 for setting seconds :\t";
	cin>>index;
	cout<<"\n\nEnter the value to be set : ";
	cin>>value;
	t5[index]=value;
	cout<<"\nNew set value : "<<t5[index]<<endl;*/

	time *t=new time();
	
	delete t;//operator delete (ptr)


}
