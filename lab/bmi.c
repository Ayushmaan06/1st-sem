# include<stdio.h>
int main()
{
    int w,s1;
    float h,m,bmi;
    printf("enter your weight in kg: ");
    scanf("%d", & w);
    printf("select 1 for ur height in ft\n");
    printf("select 2 for ur height in m\n");
    scanf("%d", & s1);
    if (s1==1)
    {
        printf("enter your height in feet: ");
        scanf("%f", & h);
         m=(h*12*2.5)/100;
    }
    if (s1==2)
    {
        printf("enter your height in m: ");
        scanf("%f", & m);
    }
    bmi=w/(m*m);
    if (bmi<18.5)
        printf("underweight");
    if (bmi>18.5 && bmi<25)
         printf("healthy");
    if (bmi>25)
         printf("overweight");
    return 0;
}