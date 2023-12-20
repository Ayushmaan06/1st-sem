#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    int nst=n*n;
    
    for (int i =1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst=(n-i)*(n-i);
        printf("\n");
    }
}