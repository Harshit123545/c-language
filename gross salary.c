#include<stdio.h>
int main()
{
	int bs,gs,da,ta;
	printf("enter Basic salary:");
	scanf("%d",&bs);
	da=(bs*10)/100;
	ta=(bs*12)/100;
	gs=bs+da+ta;
	printf("the gross salary:%d\n",gs);
	return 0;
}
