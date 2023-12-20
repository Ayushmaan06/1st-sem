#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
        sum+=a[i];
    }
    int avg=sum/n;
    printf("avg is: %d", avg);
 

}