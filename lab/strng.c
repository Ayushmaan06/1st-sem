#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d");
    int i=n;
    int d;
    int sum=0;
    for ( ; i >0; i/10)
    {
        d=i%10;
        int fact=d;
        for (int j = 0; j < d; j++)
        {
            fact*=i;
        }
        sum=sum+fact;
    }
    printf("%d", sum);
}