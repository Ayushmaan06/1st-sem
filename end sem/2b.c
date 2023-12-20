#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < 2*n; )
    {
        if (i%2==1)
        {
            static int k = 0;
            for (; k < n; )
            {
                if (i%4==0 || i%4==1)
                {
                    c[i]=a[k];
                    k++;
                    i++;
        
                }
                else{
                    c[i]=a[k];
                    c[i+1]=a[k+1];
                    i+=2;
                    k+=2;
     
                }
                continue;
            }
        }
        else
        {
            static int j=0;
            for (; j < n; )
            {
                if (i%4==0 || i%4==1)
                {
                    c[i]=b[j];
                    j++;
                    i++;
                  
                }
                else{
                    c[i]=b[j];
                    c[i+1]=b[j+1];
                    i+=2;
                    j+=2;
                  
                }
                               continue;
            }
        }
    
    }  
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d",c[i]);
    }
     
}