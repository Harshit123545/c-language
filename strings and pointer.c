#include<stdio.h>
int main(void)
{
	char name[]="Harry Potter";
	printf("%c\n",*name);
	printf("%c\n",*(name+1));
	printf("%c\n",*(name+7));
	char*namePtr;
	namePtr=name;
	printf("%c\n",*namePtr);
	printf("%c\n",*(namePtr+1));
	printf("%c\n",*(namePtr+7));
	
}
