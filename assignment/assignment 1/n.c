#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        if(a>c)
            printf("a is greatest");
        else
            printf("c is greatest");
    }
    else 
    {
        if(b>c)
            printf("b is greatest");
        else
            printf("c is gretest");
    }
return 0;
}
