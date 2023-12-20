# include<stdio.h>
int main()
{
    float w,m,g,p;
    printf("enter weight on earth: ");
    scanf("%f", & w);
    m=w/9.8;
    printf("your mass is  %f \n", m);
    printf("enter g of the planet u like: ");
    scanf("%f", &g);
    p=m*g;
    printf("your weight on ur chosen planet is %f ", p);

    return 0;
} 