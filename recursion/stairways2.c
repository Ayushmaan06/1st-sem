#include<stdio.h>
int stairs(int n)
{
    if (n==1)
    {
        return 1;
    }   
    if( n==2)
        return 2;
    if (n==3)
    {
        return 4;
    }
    
    return stairs(n-1) + stairs(n-2) + stairs(n-3);   
}
int main()
{
    int n;
    scanf("%d", &n);
    int s=stairs(n);
    printf("%d",s);

}