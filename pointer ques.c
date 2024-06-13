#include<stdio.h>
void mca()
{
	int var=10;
	int*ptr;
	ptr=&var;
	printf("value at ptr=%p\n",ptr);
	printf("value at var=%d\n",var);
	printf("value at *ptr=%d\n",*ptr);
}
int main()
{
	mca();
	return 0;
}
