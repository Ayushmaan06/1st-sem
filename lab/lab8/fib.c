#include<stdio.h>
int fib(int n)
{

    if (n==0||n==1)
    {
        return n;
    }
    return fib(n-1) +fib(n-2);
    
}
int main()
{
    puts("enter number");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        int s=fib(i);
        printf("%d  ",s);
    }


}