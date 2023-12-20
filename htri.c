#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    int nsp=n-1;
    int nst=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <=2*n-1; j++)
        {
            if (i+j==n+1||j-i==n-1||(i==n&&j>1&&j<2*n-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    
}