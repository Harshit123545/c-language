//#include<stdio.h>
//int main()
//{
//	void*ptr;
//	int x=5;
//	ptr=&x;
//	printf("the value of *ptr is %d",*(int*)ptr);
//	return 0;
//}
// void pointer

//#include<stdio.h>
//int main()
//{
//	int*ptr;
//	printf("value of *ptr is %d",*ptr);
//	return 0;
//}
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *ptr=(int*)malloc(sizeof(int));
	free(ptr);
	printf("value of *ptr is %d",*ptr);
	return 0;
}
