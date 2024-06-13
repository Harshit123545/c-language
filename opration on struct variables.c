#include<stdio.h>
struct point
{
	int x;
	int y;
};
	int main()
	{
		struct point p1={10,20};
		struct point p2=p1;
		printf("p2.x=%d,p2.y=%d",p2.x,p2.y);
		return 0;
	}
