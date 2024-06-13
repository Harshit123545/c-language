#include<stdio.h>
int main()
{
	int a=10;
	int b=24;
	int c=42;
	int res=add(a,b,c);
	printf("sum of 3 numbers is %d",res);
}
int add(int a,int b,int c)
{
	int result=a+b+c;
	return result;
}
