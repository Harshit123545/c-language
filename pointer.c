//#include<stdio.h>
//int main()
//{
//	int*pc,c,d;
//	c=7;
//	d=-19;
//	pc=&c;
//	printf("%d\n",c);
//	pc=&d;
//	printf("%d",*pc);
//	return 0;
//	
//}
#include<stdio.h>
int main()
{
	int*pc,c;
	c=20;
	printf("Address of c:%p\n",&c);                     
	printf("value of c:%d\n\n",c);
	pc=&c;
	printf("Address of pointer pc:%p\n",pc);
	printf("content of pointer pc:%d\n\n",*pc);
	c=11;
	printf("Address of pointer pc:%p\n",pc);
	printf("content of pointer c:%d\n\n",*pc);
	*pc=2;
	printf("Address of c:%p\n",&c);
	printf("value of c:%d\n\n",c);
	return 0;
}
//defrencing operator *
