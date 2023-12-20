/*
123 123
456 654
789 789
*/
#include<stdio.h>
int main()
{
    int r1, c1;
    printf("enter no of rows for first matrix ");
    scanf("%d", &r1);
    printf("enter no of coloumns for first matrix ");
    scanf("%d", &c1);

    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter (%d,%d) element of matrix 1", i+1, j+1);
            scanf("%d",& a[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        if (i%2!=0)
        {
            for (int j = c1-1; j > 0; j--)
        {
            printf("%d", a[j][i]);
        }
        }
        else{
            for(int j=0; j<c1; j++)
            {
                printf("%d", a[j][i]);
            }
        }
        
        
    }
}