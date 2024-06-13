#include<stdio.h> 
int main() {
    int row, cal = 1, space, i, j; 
    printf("Input number of rows: ");
    scanf("%d", &row); 
	for (i = 0; i < row; i++) {
        for (space = 1; space <= row - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                cal = 1;
            else
                cal = cal * (i - j + 1) / j;
            printf("% 4d", cal); 
        }

        printf("\n");
    }

    return 0; 
}


