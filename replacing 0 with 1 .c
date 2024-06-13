#include<stdio.h>
int main()
{
	int num,rem,result=0,count=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem==0)
		{
			rem=1;
		}
		result=result+rem*count;
		count=count*10;
		num=num/10;
	}
	printf("the number after replacing all 0's with 1's is:%d",result);
	return 0;
}
