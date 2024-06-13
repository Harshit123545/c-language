#include<stdio.h>
int main()
{
	int arr[5];
	int *ptr1=&arr;
	int *ptr2=&arr[1];
	if(ptr1==ptr2)
	{
		printf("pointer to array name and first element are equal");
		
	}
	else
	{
		printf("pointer to array name and first element are not equal ");
	}
	return 0;
}
