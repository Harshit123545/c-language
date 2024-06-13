#include<stdio.h>
int main(){
	int a,b;
	printf("enter two different values\n");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d\n is largest number",a);
	}
	else if(a<b)
	{
		printf("%d\n is largest number",b);
	}
	else
	{
		printf("both are equal");
	}
	return 0;
	
}
