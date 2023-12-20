#include <stdio.h>
int main()
{
    int n,k;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    printf("enter target value: ");
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n,j!=i; j++)
        {
            for (int l = 0; l < n,l!=j; l++)
            {
                if (a[i]+a[j]+a[l]==k)
            {
                printf("%d %d %d\n",a[i],a[j],a[l]);
            }
            }
        }
    }
}