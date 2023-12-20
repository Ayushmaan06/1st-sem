# include<stdio.h>
int main()
{
    int num1, num2, o,h,t;
    printf("enter a no. :  ");
    scanf("%d", &num1);
    num2=num1%100;
    o=num2%10;
    t=(num2-o)/10;
    h=(num1-num2)/100;
    
     if (99<num1 && num1<1000)
     {
         if (num1==(o*o*o) + (t*t*t) + (h*h*h))
         {
             printf("armstrong no");
         } 
         else 
         {
            printf("not an armstrong no");
         }
     }
    else
     {
         printf("not a valid no for armstrong test");
     }
 return 0;}