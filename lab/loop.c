# include<stdio.h>
int main()
{
    int n,d,rev;
    rev=0;
     printf("enter a  number");
     scanf("%d", & n);
     if (n<0)
        {
            n*=(-1);
            for (int i= n; i > 0 ; i/=10)
            {
                d=i%10;
                rev=rev*10+d;
            }
            if (n==rev)
                printf("palindrome");
            else
                printf("not palindrome");
        }
    else
    {
        for (int i= n; i > 0 ; i/=10)
            {
                d=i%10;
                rev=rev*10+d;
            }
        if (n==rev)
            printf("palindrome");
        else
            printf("not palindrome");
    }
return 0;
}





    //  for(int i=1; i<=5;i+=1)
    //  {
    //     printf("this is ayushmaan \n");
    //     printf("%d \n",i);
     
    // }