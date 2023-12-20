#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    int nsp = 1; // no of spaces
    int nst = n;    // no of stars
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }   
        for (int k =1; k <=nsp; k++)
        {
            /* code */printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }   
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}