# include <stdio.h>
# include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    int n,sum=0,r=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        sum=0;
        for (int j = 2; j <i; j++)
        {
            if (i%j==0)
            {
                sum++;
            }
        }
        if (sum>0)
        {
            continue;;
        }
        else
            printf("%d\n", i);
            r+=i;
        }
    
    printf("sum = %d", r);
}