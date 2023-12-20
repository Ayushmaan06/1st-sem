# include <stdio.h>
# include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            sum++;
        }
    }
    if (sum>0)
    {
        printf("not a prime");
    }
    else
        printf("prime");
    
}