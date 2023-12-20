#include<stdio.h>
int powe(int a, int b)
{
    if(b==0)
        return 1;
    return powe(a,b-1)*a;
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int s=powe(a, b);
    printf("%d",s);

}