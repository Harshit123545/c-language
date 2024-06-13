#include<stdio.h>
int main()
{
    int n=10;
    int a=0,b=1,sum,i;
    int nextterm;
    printf("%d,%d",a,b);
   
    for(int i=2;i<n;i++){
    	nextterm=a+b;
    	a=b;
    	b=nextterm;
    	printf("%d",nextterm);
	}
	return 0;
}
