#include<stdio.h>
int main()
{
	int x=6;
	int N=4;
	int*ptr1,*ptr2;
	ptr1=&N;
	ptr2=&x;
	printf("ptr1=%u,ptr2=%u\n",ptr1,ptr2);
	int z=ptr1-ptr2;
	printf("subtraction of ptr1" "&ptr2 is %d\n",z);
	return 0;
}

