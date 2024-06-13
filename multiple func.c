#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int product(int a,int b)
{
	return a*b;
}
double area_of_circle(double radius)
{
	return radius*radius*3.14;
}
int main()
{
	int result=sum(100,90);
	printf("the sum is %d\n",result);
	result= product(10,20);
	printf("the product is%d\n",result);
	double area=area_of_circle(8);
	printf("the area of circle is %f\n",area);
	return 0;
}
