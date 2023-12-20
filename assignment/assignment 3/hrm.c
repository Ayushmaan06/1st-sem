# include <stdio.h>
# include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    float n,a,d,sum=0;
    printf("enter number of terms to be summed: ");
    scanf("%f", &n);
    printf("enter first term for ap ");
    scanf("%f", &a);
    printf("enter common difference for ap: ");
    scanf("%f", &d);
    for (int i = 0; i <n; i++)
    {
        sum=sum+(1/(a+i*d));
    }
    printf("%f", sum);
    return 0;
}