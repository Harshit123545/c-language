#include<stdio.h>
int main()
{
   double a,b,c;
   printf("enter three different number:");
   scanf("%lf %lf %lf",&a,&b,&c);
   if(a>=b && a>=c)
     printf("%.2f is greatest number",a);
   if(b>=a && b>=c)
     printf("%.2f is greatest number",b);
   if(c>=a && c>=b)
     printf("%.2f is greatest number:",c);
    return 0;

}
