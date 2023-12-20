#include<stdio.h>
int main()
{
    int r1, c1, temp;
    printf("enter no of rows for first matrix ");
    scanf("%d", &r1);
    printf("enter no of coloumns for first matrix ");
    scanf("%d", &c1);

    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter (%d,%d) element of matrix 1 : ", i+1, j+1);
            scanf("%d",& a[i][j]);
        }
    }
    for (int i = 0; i < c1 ; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }   
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0,k=c1-1; j < k; j++,k--)
        {
            temp=a[j][i];
            a[j][i]=a[k][i];
            a[k][i]=temp;
        }
    }
    for (int i = 0; i < c1 ; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }   
}
        
