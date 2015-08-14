#include"time.h"

void main()
{ 
	time t1;
	t1.display();

	time t2(12,36,56);
	t2.display();

	time t3;
	t3.accept();

	time t4(t3);
	t4.display();


}
