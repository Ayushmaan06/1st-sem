# include<stdio.h>
int main()
{
    float bs,s,da,hra;
    printf("enter your basic salary: ");
    scanf("%f", & bs);
    da=0.42*bs;
    hra=0.18*bs;
    s=bs+da+hra;

    printf("your salary is %f ", s);

    return 0;
}