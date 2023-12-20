#include<stdio.h>
int gcd(int a, int b){
    if (b>a)
    {
        if (b%a==0)
        {
            return a;
        }
        else
            return gcd(a-1,b);
    }
    if (a>b)
    {
        return gcd(b,a);
    }
    else
        return a;
    
}
int main(){
    int a,b;
    puts("enter 1st number: ");
    scanf("%d", &a);
    puts("enter 2nd number: ");
    scanf("%d", &b);
    int hcf = gcd(a,b);
    printf("hcf of %d & %d is %d",a,b,hcf);
}