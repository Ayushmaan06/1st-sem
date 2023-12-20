#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    int max=a[0];
    int smax=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("maxm number is %d \n", max);
    for (int i = 0; i < n; i++)
    {
        if (a[i]<max && smax<a[i])
        {
            smax=a[i];
        }
        
    }
    printf("second maxm number is %d", smax);
 

}