//#include<stdio.h>
//int main()
//{
//	float area,circumference,radius;
//	printf("enter no. of radius:");
//	scanf("%f",&radius);
//	area=(3.14*radius*radius);
//	printf("area of circle is :%f\n",area);
//	circumference=2*(3.14*radius*radius);
//	printf("circumference of circle is:%f",circumference);
//	return 0;
//}
#include<stdio.h>
int main()
{
	float celcius,farenheit;
	printf("enter no. of temperature in celcius:");
	scanf("%f",&celcius);
	farenheit=(celcius*1.8)+32;
	printf("temperature in farenheit:%.2f",farenheit);
	return 0;
	
}
