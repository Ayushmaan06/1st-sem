#include<stdio.h>
void dec(int n)
{
    if(n==0)
        return;
    printf("%d\n",n);
    n-1;
    dec(n-1);
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    dec(n);
}