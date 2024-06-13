#include<stdio.h>
#include<string.h>
struct address{
	char city[20];
	int pincode;
	char phone[10];
};
struct employee
{
	char name[20];
	struct address add;
};

void display(struct employee);
void main()
{
	struct employee emp;
	printf("enter employee information:\n");
	scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pincode,emp.add.phone);
	display(emp);
		
}
	void display(struct employee emp)
	{
		printf("printing the details....\n");
		printf("%s %s %d %s",emp.name,emp.add.city,emp.add.pincode,emp.add.phone);
	}

