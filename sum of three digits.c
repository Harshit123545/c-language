
#include<stdio.h>
int main(){
	int num,sum=0;
	printf("the number is=");
	scanf("%d",&num);
	while(num!=0){
		(sum+=num%10);
		(num=num/10);
	}
printf("%d",sum);
return 0;
}










































