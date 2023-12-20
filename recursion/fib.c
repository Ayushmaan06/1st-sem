#include<stdio.h>
int fib(int n)
{

    if (n==0)
    {
        return 0;
    }
    
    if( n==1)
        return 1;
    int f= fib(n-1) +fib(n-2);
    printf("%d", f);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int s=fib(n);
    printf("%d",s);

}