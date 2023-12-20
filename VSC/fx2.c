#include <stdio.h>
// void printHello();
// int main()
// {
//     printHello();
//     return 0;
// }
// void printHello()
// {
//     printf("hello");
// }
// void namaste();
// void bonjour();
// int main()
// {
//     char ch;
//     printf("enter f for french and i for indian");
//     scanf("%c", &ch);
//     if (ch == 'i')
//     {
//         namaste();
//     }
//     else
//         bonjour();
// return 0;
// }
    
// void namaste()
// {
//     printf("namaste");
// }
// void bonjour()
// {
//     printf("bonjour");
// }
// int sum(int a, int b);
// int main()
// {
//     int a,b;
//     printf("enter 2 no\n");
//     scanf("%d  %d ",&a, &b );
//     int s= sum(a,b);
//     printf("sum is %d", s);
//     return 0;
// }

// int sum(int a, int b)// can also write x and y 
// {
//     return(a+b);
// }
// void table(int n);
// int main()
// {
//     int n;
//     printf("enter a no.");
//     scanf("%d", &n);
//     table(n);
//     return 0;
// }
// void table(int n)
// {
//     int t;
//     for(int i=1; i<=10;i++)
//     {
//         t=n*i;
//         printf("%d\n", t);// no need for t printf(n*i) simple
//     }
// }
void ex(int a, int b);
int main()
{
    int a,b;
    printf("enter a no.:  ");
    scanf("%d", &a);
    printf("enter the power factor:  ");
    scanf("%d", &b);
    ex(a, b);
    return 0;
}

void ex(int a, int b)
{
    int p=1;
    for (int i = 1; i <= b; i++)
    {
        p=p*a;
    }
    printf("%d", p);
}