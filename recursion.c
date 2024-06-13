//#include<stdio.h>
//int sum(int n);
//int main()
//{
//	int number,result;
//	printf("Enter a postive number: ");
//	scanf("%d",&number);
//	result=sum(number);
//	printf("Sum = %d",result);
//	return 0;
//}
//int sum(int n)
//{
//	if (n!=0)
//	{
//		return n+sum(n-1);
//	}
//	else
//	{
//		return n;
//	}
//}
#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
	int number;
	printf("Enter a postive number: ");
	scanf("%d",&number);
	printf("factorial of %d=%ld",number,multiplyNumbers(number));
	return 0;
}
long int multiplyNumbers(int number)
{
	if (number>=1)
	{
		return number*multiplyNumbers(number-1);
	}
	else
	{
		return 1;
	}
}
