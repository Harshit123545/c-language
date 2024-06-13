//#include<stdio.h>
//int main()
//{
//	int marks[5];
//	printf("Enter five integers:");
//	int i;
//	for(i=0;i<=5;i++)
//	{
//		scanf("%d",&marks[i]);
//	}
//	printf("display integers:\n");
//	for(i=0;i<=5;i++)
//	{
//		printf("%d\n",marks[i]);
//	}
//	return 0;	
//}
//---------------------------------------------------------------------------------------------------------------------------------

// Program to find the average of n numbers using arrays
#include <stdio.h>
int main()
{
	int marks[5],i,n,sum=0;
	double average;
	printf("enter no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter numbers:%d",i+1);
		
		scanf("%d",&marks[i]);
		
		sum+=marks[i];
	}
	
	average=(double)sum/n;
	printf("average:%.2lf",average);
	return 0;
	
}

