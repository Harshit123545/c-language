#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d;
	d=(a=c,b+=a,c=a+b+c);
	printf("%d %d %d %d",d,a,b,c);
	return 0;
}

