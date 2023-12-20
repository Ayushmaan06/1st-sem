#include<stdio.h>
long long int powe(long long int a, long long int b)
{
    if (b==0)
    {
        return 1;
    }
    
    if(b==1)
        return a;
    if (b%2==0)
    {
        return powe(a,b/2)*powe(a,b/2);
    }
    else
    {
        return powe(a,b/2)*powe(a,b/2)*a;
    }
    
    
}
int main()
{
    long long int a,b;
    scanf("%d %d", &a, &b);
    long long int s=a;
    for (int i = 1; i < b; i++)
    {
        s=powe(s, a);
        
    }
    
    printf("%lli",s);

}