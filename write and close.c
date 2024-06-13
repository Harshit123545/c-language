#include<stdio.h>
#include<string.h>
int main()
{
	FILE*filePointer;
	char datatobeWritten[50]="file Handling.A C Programming concept";
	filePointer=fopen("Harsh.c","W");
	    if(filePointer==NULL)
	{
		printf("Harsh.c file failed to open");
	}
	else{
		printf("The file is now opened\n");
		if(strlen(datatobeWritten)>0)
		{
			fputs(datatobeWritten,filePointer);
			fputs("\n",filePointer);
		}
		fclose(filePointer);
		printf("Data successfully written in file Harsh.c\n");
		printf("The file is now closed");
	}
}
