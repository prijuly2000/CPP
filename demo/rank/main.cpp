#include"engg.h"

void main()
{
	Engg s1[3];
		
	for(int i=0;i<3;i++)
		s1[i].accept();

	s1[0].calrank(s1);

	/*for(i=0;i<3;i++)
		s1[i].display();*/

}