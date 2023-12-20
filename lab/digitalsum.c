# include<stdio.h>

int main()
{
    int n,d,i;
    printf("enter a  number");
    scanf("%d", & n);
    i=n;
    d=0;
    do
    {
        if (i==0)
        {
            i=d;
            d=0;
        }
        d+=i%10;
        i/10;
        
    } while (i>0||d>9);
    printf("%d", d);
    
     

    

}

    