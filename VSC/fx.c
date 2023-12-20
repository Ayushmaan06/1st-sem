# include<stdio.h>
// // declaration or prototype
//  void printHello();
// int main()
// {
//    printHello();//function call
//    return 0;
// }
// //function definition
// void printHello()
// {
//     printf("hello");
int sum (int a, int b);
int main()
{
    int a,b;
     printf("enter num1:     ");
    scanf ("%d",& a);
     printf("enter ur num2:     ");
    scanf ("%d",& b);

    int s=sum(a,b);
    printf ("sum is %d", s);
    return 0;
}
int sum(int a, int b)
{
    return(a+b);
}
