#include<stdio.h>
int even_odd(int);
void main()
{
	int n,flag=0;
	printf("\nto check whether a number is even or odd: ");
	printf("\nenter the number:");
	scanf("%d,&n");
	flag=even_odd(n);
	if(flag==0)
	{
		printf("\nthe number is odd");
		
	}
	else
	{
		printf("\nthe number is even");
    }
}
int even_odd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0
	}
}
