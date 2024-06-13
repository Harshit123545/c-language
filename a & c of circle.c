a//to find area and circumference of circle
#include<stdio.h>
//user define pi=3.14;
int main(){
	float radius;
	printf("enter radius");
	scanf("%f",&radius);
	printf("area is:%.1f\n",3.14*radius*radius);
	printf("circumference is:%.1f\n",2*3.14*radius);
	return 0;
}
