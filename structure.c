#include<stdio.h> 
#include<string.h>
struct employee
{
	int id,mobile_number;
	char name[50];
	float salary;
}e1,e2;
int main()
{
	e1.id=2314133;
	e1.mobile_number=639222556;
	e1.salary=639222556;
	
	strcpy(e1.name,"Harshit Gupta");
	e2.id=2311947;
	strcpy(e2.name,"Sachin Gupta");
	printf("employee 1 id:%d\n",e1.id);
	printf("employee 1 name:%s\n",e1.name);
	printf("employee 1 mobile_number:%d\n",e1.mobile_number);
	e2.mobile_number=934654828;
	
	
	printf("employee 2 id:%d\n",e2.id);
	printf("employee 2 name:%s\n",e2.name);
	printf("employee 2 mobile_number:%d\n",e2.mobile_number);
	
	return 0;
	
}
