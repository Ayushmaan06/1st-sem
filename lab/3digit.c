//palindrome : even after reversing the no is same
# include<stdio.h>
int main()
{
    int n,h,t,o;
     printf("enter a 3 digit number");
     scanf("%d", & n);
    o=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    h=n%10;
    if(o==h)
    printf("palimdrome");
    else
    printf("not palindrome");
    return 0;
}
