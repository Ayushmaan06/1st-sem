#include <stdio.h>
int main()
{
    int n,f;
    f=0;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
            {f=f+i;}
        else f=0;
    }

    if (f=n+1)
        {printf("prime");}
    else
        printf("not prime");
    return 0;
}