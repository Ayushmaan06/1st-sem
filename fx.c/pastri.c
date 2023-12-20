#include<stdio.h>
int fact(int n)
{
    int f=1;
    for (int i = 1; i <=n; i++)
    {
        f*=i;
    }
    return f;
}
int pncc(int n, int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main()
{
    int n,r,c;

    printf("enter number of rows: ")
    ;scanf("%d",&n);
    int nsp=n-1,nst=1;
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < nsp; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < nst; k++)
        {
            c= pncc(i, k);
            printf("%d ", c);
        }
        printf("\n");
        nsp--;
        nst++;
        
    }
    

}