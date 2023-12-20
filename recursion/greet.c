#include<stdio.h>
void greeting(int n)
{
    if(n==0)
        return;
    puts("Good Morning\n");
    n-1;
    greeting(n-1);
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    greeting(n);
}