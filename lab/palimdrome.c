//palindrome : even after reversing the no is same
# include<stdio.h>
int main()
{
    int n,th,h,t,o;
     printf("enter a 4 digit number");
     scanf("%d", & n);
    o=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    h=n%10;
    n=n/10;
    th=n%10;
    if((o==th)&&(t==h))
    printf("palimdrome");
    else
    printf("not palindrome");
    return 0;
}








    // h=n/100;
    // o=n%10;
    // if(h==o)
    // {
    //     printf("palimdrone");
    // }
    // else
    // {
    //     printf("not palindrome");
    // }