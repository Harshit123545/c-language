#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,i,*ptr;
	printf("enter no. of elements:");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("address of previously:\n");
	for(i=0;i<n1;++i)
	printf("%p\n",ptr+i);
	printf("\nEnter the new size:");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("Addresses of newly allocated memory:\n");
	for(i=0;i<n2;++i)
	printf("%p\n",ptr+i);
	free(ptr);
	return 0;
}
