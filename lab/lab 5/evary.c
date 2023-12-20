#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
        if (a[i]%2==0)
        {
            count ++;
        }
        
    }
    printf("count is: %d", count);
 

}