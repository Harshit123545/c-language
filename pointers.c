#include<stdio.h>
int main()
{
	int*pc,c;
	c=7;
	pc=&c;
    *pc=1;
	printf("%d\n",*pc);
	printf("%d",c);
	return 0;
	
}






