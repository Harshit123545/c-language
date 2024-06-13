#include<stdio.h>
voidodd_even(int number);
int main()
{
	int number1;
	printf("please enter the number");
	scanf("%d",&number1);
	odd_even(number1);
	return 0;
}
voidodd_even(int number)
{
	if(number%2==0)
	  printf("%d is an even number",number);
	else
	  printf("%d is an odd number",number);
}
