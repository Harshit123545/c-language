//write a function that prints Namaste if user is indian and Bonjour if user is french
#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
	printf("enter f for french and i for india:");
	char ch;
	scanf("%c",&ch);
	if(ch=='i'){
		Namaste();
	}else{
		Bonjour();
	}
		return 0;
}

void Namaste(){
	printf("Namaste\n");
}

void Bonjour(){
	printf("Bonjour");
}
