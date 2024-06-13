#include<stdio.h>
int main()
{
	int N=4;
	int*ptr1;
	ptr1=&N;
	printf("pointer ptrs before addition:");
	printf("%d\n",ptr1);
	ptr1=ptr1+3;
	printf("pointer ptr1 after addition:");
	printf("%d\n",ptr1);
	return 0;
	
}
