#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("enter no of rows for first matrix ");
    scanf("%d", &r1);
    printf("enter no of coloumns for first matrix ");
    scanf("%d", &c1);
    printf("enter no of rows for second matrix ");
    scanf("%d", &r2);
    printf("enter no of coloumnss for second  matrix ");
    scanf("%d", &c2);
    if (r1 != r2 || c1 != c2)
    {
        printf("addition not possible");
    }
    int a[r1][c1], b[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter (%d,%d) element of matrix 1", i+1, j+1);
            scanf("%d",& a[i][j]);
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("enter (%d,%d) element of matrix 2", i+1, j+1);
            scanf("%d",& b[i][j]);
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            a[i][j] += b[i][j];
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
}