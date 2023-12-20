#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k<=n-i+1; k++)
        {
            printf(" ");
        }
           
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //     for (int j =1; j <=n+1-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("*");
    //     }
    //     for (int m = 1; m < i; m++)
    //     {
    //         printf("*");
    //     }
    //     for (int l =1; l <=n+1-i; l++)
    //     {
    //         printf(" ");
    //     }
        
    //     printf("\n");
    // }
    
}
    