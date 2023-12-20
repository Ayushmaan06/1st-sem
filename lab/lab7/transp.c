#include <stdio.h>

int main() {
    int r1,c1,max;
    printf("Enter number of rows for the sq matrix: ");
    scanf("%d", &r1);
    printf("Enter number of coloumns for the sq matrix: ");
    scanf("%d", &c1);
    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element (%d,%d) of matrix 1: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}