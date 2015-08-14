class timmer:public time
{
	time *p;
public:
	timmer(int hr,int min,int sec);
	time &operator->();
	void display();
};

void timmer::display()
{
	cout<<"Time = "<<hr<<" : "<<min<<" : "<<sec<<endl;
}

time &timmer::operator->()
{
	return *p;
}

timmer::timmer(int hr,int min,int sec)
{
	p=new time(hr,min,sec);

}