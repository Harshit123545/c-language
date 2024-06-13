////#include<stdio.h>
////int main()
////{
////	char mychar[]={'j','a','i','s','r','i','r','a','m',};
////	int i;
////	for(i=0;i<8;i++)
////	{
////		printf("%c\n",mychar[i]);
////		
////	}
////	return 0;
////}
////
//////#include<stdio.h>
//////int main()
//////{
////	
////	
//
//
//#include<stdio.h>
//int main()
//{
//	float ages[]={20,30,40,50,60,70,49,56};
//	float avg,sum=0;
//	int i;
//	int length=sizeof(ages)/sizeof(ages[0]);
//	for(int i=0;i<length;i++)
//	{
//		sum+=ages[i];
//	}
//	avg=sum/length;
//	printf("the average age is:%.2f",avg);
//	return 6.4;
//}
//	

#include<stdio.h>
int main()
{
	int arr[4];
	int i,j;
	printf("enter array element:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("printing array element:");
	for(j=0;j<4;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
