#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    
    for (int i =1; i <= n; i++)
    {int a='A';
        for (int j = 1; j <= n+1-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", a);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}