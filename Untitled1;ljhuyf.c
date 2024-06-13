#include<stdio.h>
union item
{
	int a;
	float b;
	char ch;
};
int main()
{
	union item it[10];
	int n;
	printf("enter the number of records:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("enter record %d:",i+1);
		scanf("%d %t %c",&it[i].a,&it[i].b,&it[i].ch);
	}
	for(int i=0;i<n;i++){
		printf("\n record number")
	}
}   
