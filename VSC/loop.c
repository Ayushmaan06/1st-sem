# include<stdio.h>
int main()
{
    // for(int i=1; i<=5;i+=1)
    // {
    //     //printf("hellow world \n");
    //     printf("%d \n",i);
    // 
    //}

    // int i=1;
    // while(i<=10)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }

    // int i=1;
    // do
    // {
    //     printf("%d \n", i);
    //     i++;
    // } while (i<=10);

    // int n, sum ,r;
    // printf("enter no. :  ");
    // scanf("%d", &n);
    // r=n+3;
    //  sum=4*n+6;
    // //sum=sum+i loop for sum
    //  printf("sum of first 4 natural no: %d \n", sum);
    // while(r>=n)// dont put semicolon here
    // {
    //     printf("%d \n",r);
    //     r=r-1;
    // }

    // int n;
    // printf("enter no. :  ");
    // scanf("%d", &n);
    // for(int i=1; i<=10; i++)
    // {
    //     printf("%d \n", n*i );
    // }
    
    // int n;
    // do
    // {
    //     printf("enter no. :  ");
    //     scanf("%d", &n);
    // } while (n%2 != 0);
    
    // int n,fact;
    //  printf("enter no. :  ");
    //  scanf("%d", &n);
    //  fact=n;
    //  for(int i=1 ; i<n ; i++)
    //  {
    //     fact=fact*i;
    //    printf("n!= %d \n", fact);
    //  }
    // printf("n!= %d \n", fact);
    // return 0;
    int a,b,c;
    a=0;
    b=1;
    
    do
    {
       c=b+a;
      b=a;
      a=c;
      
      printf("%d \n", c);
    } while (c<100);
    
    


   
  return 0;

}