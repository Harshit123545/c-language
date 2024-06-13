#include<stdio.h>
int main()
{
	char color[30];
	printf("enter color:");
	fgets(color,sizeof(color),stdin);
	printf("color:");
	puts(color);
	return 0;
}
