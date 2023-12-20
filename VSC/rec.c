# include<stdio.h>
//summmmmmmmmmm

// int sum(int n);
// int main()
// {
//     int n, s;
//     printf("enter a number");
//     scanf("%d", &n);
//     s=sum(n);
//     printf("sum is %d", s);
// return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//         return 1;
//     int sumNm1= sum(n-1);
//     int sumN= sumNm1+n;
//     return sumN;
// // }
// //factoriallllllllllllll
// int fact(int n);
// int main()
// {
//     int n,f;
//     printf("enter a number:");
//     scanf("%d", &n);
//     f=fact(n);
//     printf("factorial is %d", f);
//     return 0;
// }
// int fact(int n)
// {
//     if(n==0 || n==1)
//         return 1;
//     int fNm1=fact(n-1);
//     int fN=fact(n-1)*n;
//     return fN;
// }
int fib(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int f= fib(n);
    printf("%d", f);
    return 0;
}

int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    int fibNm1= fib(n-1);
    int fibNm2= fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;

}