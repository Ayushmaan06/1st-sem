#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n] ;

    for (int i = 0; i < n; i++)
    {
        printf("enter no %d : ", i+1);
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int smax=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        else
            continue;
        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>smax && a[i]<max)
        {
            smax=a[i];
        }
        else
            continue;
        
    }
    printf("%d\n", max);
    printf("%d", smax);
}
