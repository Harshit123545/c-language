#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="This is " , str2[]="Me,Sober";
	strcat(str1,str2);
	puts(str1);
	puts(str2);
	return 0 ; 
}
