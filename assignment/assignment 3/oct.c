# include <stdio.h>
# include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    int r=0,n,sum=0;
    printf("enter binary number : ");
    scanf("%d",&n);
    int p=1;
    do{
        int i=n%1000;
        sum=(i%10)*1+((i/10)%10)*2+((i/100)%10)*4;
        r=r+sum*p;
        n/=1000;
        p*=10;
    }while (n>0);
    printf("%d",r);
}
    
    