#include<stdio.h>
int main()
{
	int inttype;
	float floattype;
	char chartype;
	double doubletype;
	long double longdoubletype;
	printf("sizeof int: %zu bytes\n",sizeof (inttype));
	printf("sizeof float: %zu bytes\n",sizeof (floattype));
	printf("sizeof char: %zu bytes\n",sizeof (chartype));
	printf("sizeof double: %zu bytes\n",sizeof (doubletype));
	printf("sizeof longdouble: %zu bytes\n",sizeof (longdoubletype));
	return 0;
}
