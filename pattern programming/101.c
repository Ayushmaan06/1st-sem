#include <stdio.h>
int main()
{
    int n,a;
    printf("enter no of rows: ");
    scanf("%d", &n);
    
    for (int i =1; i <= n; i++)
    {
        if (i%2==0)
        {
             a=0;
        }
        else
            a=1;
        
        for (int j = 1; j <=i; j++)
        {
            printf("%d", a);
            if (a==1)
            {
                a=0;
            }
            else
            {
                a=1;
            }
        }
        printf("\n");
    }
    return 0;
}