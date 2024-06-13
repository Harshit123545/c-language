//you just want to find out how many elements an array has, you have to
//divide the size of the array by the size of one array element:
#include<stdio.h>
int main()
{
	int marks[]={10,25,50,75,100};
	int length =sizeof(marks) / sizeof(marks[1]);
	printf("%d",marks);
	return 0;
}


