# include<stdio.h>

int main()
{
    float h,m;
    printf("enter your height in feet: ");
    scanf("%f", & h);
    m=h*12*2.5;
    printf("your height in cm is %f", m);

    return 0;
}