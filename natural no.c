#include<stdio.h>
int main()
{
	int n,sum,count=0;
	printf("enter a positive integer:");
	scanf("%d",&n);
	for(count=1;count<=n;++count);
	{
		sum+=count;
	}
	printf("sum=%d",sum);
	return 0;
}
