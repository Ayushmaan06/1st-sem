#include<stdio.h>
int stairs(int n)
{

    if (n==1)
    {
        return 1;
    }
    
    if( n==2)
        return 2;
    return stairs(n-1) + stairs(n-2);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int s=stairs(n);
    printf("%d",s);

}