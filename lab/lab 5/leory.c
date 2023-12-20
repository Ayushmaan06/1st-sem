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
    int omax=a[0];
    int somax=a[0];
    for (int i = 0; i < n; i+=2)
    {
        if (a[i]>omax)
        {
            omax=a[i];
        }
        
    }
    printf("maxm number at odd place is %d\n", omax);
    for (int i = 0; i < n; i+=2)
    {
        if (a[i]<omax && somax<a[i])
        {
            somax=a[i];
        }
        
    }
    printf("second maxm number at odd place is %d\n", somax);
    int emax=a[0];
    int semax=a[0];
    for (int i = 1; i < n; i+=2)
    {
        if (a[i]>emax)
        {
            emax=a[i];
        }
        
    }
    printf("maxm number at odd place is %d\n", emax);
    for (int i = 1; i < n; i+=2)
    {
        if (a[i]<emax && semax<a[i])
        {
            semax=a[i];
        }
        
    }
    printf("second maxm number at even place is %d", semax);
    
 

}