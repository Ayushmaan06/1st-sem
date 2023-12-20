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
    int min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("minm number is %d", min);
    
 

}