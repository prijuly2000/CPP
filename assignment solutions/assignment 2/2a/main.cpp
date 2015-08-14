#include"swap.h"

void main()
{
	swap w;
	int x,y;


	x=w.geta();
	y=w.getb();

	w.swap1(x,y);
	w.swap2(&x,&y);
	
	x=w.geta();
	y=w.getb();
	w.swap3(x,y);

	swap w1;
	cout<<"\n enter numbers :\n";
	w1.accept();

	x=w1.geta();
	y=w1.getb();

	w.swap1(x,y);
	w.swap2(&x,&y);
	
	x=w1.geta();
	y=w1.getb();
	w1.swap3(x,y);

}
