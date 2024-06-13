#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*filepointer;
	char datatobewrite[50]="the handling"
	filepointer=fopen("divyanshu.txt","w");
	if(filepointer==NULL){
		printf("file not opened");
		
	}
	else{
		printf("this file is now opened\n");
		if(strlen(datatobewrite)>0){
			fputs(datatobewrite,filepointer);
			fputs("\n",filepointer);
		}
		fclose(filepointer);
		printf("data sucessfull")
	}
