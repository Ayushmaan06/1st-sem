# include<stdio.h>
int main()
{
    int n,sum;
    sum=0;
     printf("enter a  number");
     scanf("%d", & n);
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        else
        sum==0;
    }
    if (sum==n)
        printf("perfect");
    else
        printf("imperfect");
     return 0;
}