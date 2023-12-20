# include<stdio.h>

int main()
{
    int h,in,ft;
    printf("enter your height in centi metre: ");
    scanf("%d", & h);
    in=h/2.5;
    ft=in/12;
    in=in%12;


    printf("your height is %d ft %d in ", ft, in);

    return 0;
}