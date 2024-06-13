#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[10];
};
int main()
{
	int i;
	struct student st[5];
	printf("enter records of 5 students:");
	for(i=0;i<5;i++){
		printf("\n enter Rollno:");
		scanf("%d",&st[i].rollno);
		printf("\n enter name:");
		scanf("%s",&st[i].name);
		
	}
	printf("\n student information list:");
	for(i=0;i<5;i++)
	{
		printf("\n rollno:%d,name:%s",st[i].rollno,st[i].name);
	}
	return 0;
}
