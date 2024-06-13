#include<stdio.h>
int main(){
	int a=5,b=5,c=10;
	printf("%d\n",(a>b)||(b>c));
	printf("%d\n",(a<c)&&(b<a));
	printf("%d\n",!(c<a));
	printf("%d\n",(a==b)&&(b<c));
	printf("%d\n",!(b<a));
	printf("%d\n",(a!=c)||(c<b));
	return 0;
	
}
