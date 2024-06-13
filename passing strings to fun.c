#include<stdio.h>
void displaycolor(char str[]);
int main()
{
	char str[50];
	printf("Enter color:");
	fgets(str,sizeof(str),stdin);
	displaycolor(str);
	return 0;
}
void displaycolor(char str[])
{
	printf("String output:");
	puts(str);
}
