#include<stdio.h>
int main()
{
	int first , second, *p,*q,sum;
	printf("enter two number:");
	scanf("%d %d",&first,&second);
	*p=first;
	*q=second;
	sum=(*p + *q);
	printf("sum of two number is %d",sum);
	return 0;

}
