#include <stdio.h>
int main()
{
    int n,max=0,k,l;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", & a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i]>a[j])
            {
                a[i]-a[j];
                if (a[i]-a[j]>max)
                {
                    max=a[i]-a[j];
                    k=a[i];
                    l=a[j];
                }  
            }
            else{
                a[j]-a[i];
                if (a[j]-a[i]>max)
                {
                    max=a[j]-a[i];
                    k=a[j];
                    l=a[i];
                } 
            }
            
            
        }
        
    }
    printf("highest difference %d - %d = %d", k,l,max);
    }
    