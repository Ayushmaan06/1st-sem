#include<stdio.h>
float sine(float t){
    return (t-(t*t*t)/6 +(t*t*t*t*t)/120);
}
int main()
{
    float m=0;
    for (int i = 0; i < 6; i++)
    {
        float a,f,t,s,b;

        scanf("%f %f %f", &a, &f, &t);
        s=sine(t);
        b=0.5*a*f*s;
        printf("%f", b);

        if (m>b)
        {
            m=a;
        }
    }
    printf("max=%f",&m);
}