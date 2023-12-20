#include<stdio.h>
void inc(int n, int x)
{
    if(n==x)
        return;
    printf("%d\n",n);
    n+1;
    inc(n+1,x);
    return;
}
int main()
{
    int n,x;
    scanf("%d %d", &n, &x);
    inc(n,x);
}