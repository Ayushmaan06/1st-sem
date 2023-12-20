#include<stdio.h>
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    else
      return fact(n-1)*n; 
}
int main()
{
    int n;
    scanf("%d", &n);
    int f= fact(n);
    printf("%d",f);
}