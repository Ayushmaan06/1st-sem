# include <stdio.h>
# include <time.h>
int main()
{
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    char a='A';
    int n;
    printf("enter number of rows: ");
    scanf("%d", &n);
    int nsp= n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i ; k++)
        {
            printf("%c", a+k-1);
        }
        for (int l = 1; l < i; l++)
        {
            printf("%c", a+i-l-1);
        }
        
        printf("\n");
        nsp--;
    }
    
}