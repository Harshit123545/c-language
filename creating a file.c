#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fptr;
	fptr=fopen("harsh.txt","w");
	if(fptr ==NULL)
	{
		printf("the file is not opened.the program will exit now");
		exit(0);
	}
	else{
		printf("the file is created successfully.");
	}
	return 0;
}
