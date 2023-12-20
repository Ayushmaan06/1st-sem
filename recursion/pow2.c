#include<stdio.h>
int powe(int a, int b)
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
    int a,b;
    scanf("%d %d", &a, &b);
    int s=powe(a, b);
    printf("%d",s);

}