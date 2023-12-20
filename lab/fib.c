#include<stdio.h>
int main()
{
    int n;
    printf("enter no of terms: ");
    scanf("%d", &n);
    int a=0;
    int b=1;
    int fib;
    printf("0 \n 1");
    for (int i = 1; i <= 10; i++)
    {
        
        fib=a+b;
        printf("%d \n", fib);
        a=b
        ; b=fib;
    }
    
}