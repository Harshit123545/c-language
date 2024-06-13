#include<stdio.h>
int main()
{
	int n,reverse=0,remainder;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0){
		int remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
printf("the reversed no.is:%d\n",reverse);
return 0;
}

