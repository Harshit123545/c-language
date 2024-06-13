#include<stdio.h>
struct address{
	char city[20];
	int pin;
	char phone[14];
};
struct employee{
	char name[20];
	struct address add;
};
int main()
{
	struct employee e1;
	printf("enter employee information:");
	scanf("%s %d %d %s",e1.name,e1.add.city,&e1.add.pin,e1.add.phone);
	printf("printing the employee information......\n");
	printf("name:%s\n city:%s\n pincode:%d\n phone number:%d",e1.name,e1.add.city,e1.add.pin,e1.add.phone);
	
}
