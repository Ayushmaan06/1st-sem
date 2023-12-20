#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    while (n%2==0)
    {
        printf("  2   ");
        n/=2;
    }
    for (int i = 3; i <= n; i+=2)
    {
        while(n%i==0)
        {
            printf("  %d   ", i);
            n/=i;
        }
    }
    
    
return 0;
}