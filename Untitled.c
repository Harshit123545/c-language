#include<stdio.h>
int main()
{
	int week;
	printf("enter the number 1 to 7=");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
			printf("it is not value of 1 to 7");
	}
	return 0;
	
}