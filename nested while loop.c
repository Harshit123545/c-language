#include<stdio.h>
int main()
{
	int i=1,j=1;
	while(i<=3)
	{
		printf("outer loop iteration %d\n",i);
		while(j<=3)
		{
			printf("inner loop iteration %d\n",j);
			j++;
		}
		j=1;
		i++;
	}
	return 0;
}
