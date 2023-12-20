#include <stdio.h>
int main()
{
    int n,k;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n], b[n], fact=1;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        fact*=n;
    }
    
    for(int m=1; m<=fact/2; m++)
    {
        
        for (int j = 0; j < n-1; j++)
        {
            b[j+1]=a[j];
        }
        b[0]=a[n-1];
        for (int k = 0; k < n; k++)
        {
            printf("%d", b[k]);
            
        }
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            a[j]=b[j];
            b[j]=0;
        }
        
    }
    
    
    

}