#include<stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    int a,b,te,o;
    printf("enter two digit num1  :  ");
    scanf("%d", &a);
    
    printf("enter two digit num2  :  ");
    scanf("%d", &b);
    o=b%10;
    te=b-o;
    printf("\t  %d\n \t* %d\n______________________\n", a, b);
    printf("%d * %d = %d\n%d * %d = %d\n", o, a, o*a, te, a, te*a);
    printf("______________________\n");
    printf("Add them %d", a*b);
}