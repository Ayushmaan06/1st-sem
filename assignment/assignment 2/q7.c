#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    int a,b;
    printf("enter num1  :  ");
    scanf("%d", &a);
    
    printf("enter num2  :  ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped\n");
    printf("num1 : %d\n", a);
    printf("num2 : %d", b);
}