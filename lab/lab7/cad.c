#include <stdio.h>

int main() {
    int r1,sum;
    printf("Enter number of rows for the sq matrix: ");
    scanf("%d", &r1);
    int a[r1][r1];
    for (int i = 0; i < r1; i++) {

        for (int j = 0; j < r1; j++) {
            printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);

        }

    }
    for (int i = 0; i < r1; i++) {
        sum=0;
        for (int j = 0; j < r1; j++) {
            sum+=a[j][i];
            
        }
        printf("sum for coloumn %d is: %d \n ", i+1, sum);
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}