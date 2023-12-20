#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    
    for (int i =1; i <= n; i++)
    {
        char a='A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    
}