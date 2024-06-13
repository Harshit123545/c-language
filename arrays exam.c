#include<stdio.h>
int main()
{
	int values[5];
	printf("enter 5 integers:");
	int i;
	for(i=0;i<5;++i)
	{
		scanf("%d",&values[i]);		
	}
	printf("displaying integers:");
	for(i=0;i<5;++i)
	{
		printf("%d\n",values[i]);
	}
	return 0;
}
