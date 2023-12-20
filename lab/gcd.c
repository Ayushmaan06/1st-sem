#include <stdio.h>
int main()
{
    int a,b,cd;
    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number: ");
    scanf("%d", &b);
    int i=1;
    cd=1;
    for( ;i<=a;i++)
    {
        if (a%i==0 && b%i==0)
        {
            if (i>cd)
            {
                cd=i;
            }    
            else
                continue;
        }
        else
            continue;}
        
    printf("%d", cd);
    
}