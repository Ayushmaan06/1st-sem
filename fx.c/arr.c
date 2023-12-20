#include<stdio.h>
void arr(int a[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d",a[i]);
    }
    
}
int main()
{
    int a[5] = {1,2,3,4,5};
    arr(a);
}