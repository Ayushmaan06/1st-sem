#include<stdio.h>
int pri(int a, int b){
        if (b%a==0)
        {
            return a;
        }
        else
            return pri(a-1,b);
}
int main(){
    int n;
    puts("enter  number: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        int a=pri(i-1,i);
        if (a==1)
        {
            printf("%d  ",i);
        }
    }
    
}