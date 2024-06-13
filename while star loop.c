#include<stdio.h>
int main(){
    int x,ctr;
    x=0;
    printf("input no. of rows:");
    scanf("%d",&ctr);
    while(x<ctr)
    {
        printf("*\n");
        x++;
    }
    return 0;
}
