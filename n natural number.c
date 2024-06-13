#include<stdio.h>
int main()
{
	int n,count,sum=0;
	printf("enter no.");
	scanf("%d",&n);
	for(count=1;count<=n;count++){
		sum+=count;
	}
	return 0;
}
