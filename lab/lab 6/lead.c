#include <stdio.h>
int main()
{
    int n,k;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n], b[n], sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
        b[n-1-i]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 0; j < i; j++)
        {
            if (b[i]>b[j])
            {
                sum++;   
            }
            
        }
        if (sum==i)
        {
           printf("%d is leader\n", b[i]);
        }
        
        
    }
}
    