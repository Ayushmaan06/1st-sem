#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows: " );
    scanf("%d", &n);
    int nst=n;
    int nsp=1;
    for (int i = 1; i <= n; i++)  
    {
        // int a=1;
        // int b=5;
        // for (int j = 1; j <= n-i+1; j++)
        // {
        //     printf("%d",a);
        //     a++;
        // }
        // for (int k = 1; k <= 2*i-1; k++)
        // {
        //     printf(" ");
        // }
        // for (int l = 1; l <= n-i+1; l++)
        // {
        //     printf("%d",b);
        //     b++;
        // }
        // b++;
        // printf("\n");
        int a=1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d", a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    
}