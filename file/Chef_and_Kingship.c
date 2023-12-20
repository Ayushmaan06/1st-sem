#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t-->0){
        int c=0,n,min=100;
        scanf("%d",&n);
        int p[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&p[i]);
            if (p[i]<min)
            {
                min=p[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i]==min)
            {
                continue;
            }
            else
                c+=p[i]*min;
        }
        
         printf("%d\n", c);       
    }
    return 0;
}