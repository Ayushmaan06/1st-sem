#include <stdio.h>
int main()
{
    int a[5] ;//= {2,3,4,5,6};//5 dabbe create kr liye but unka naam kya hoga?
    // a[1]=100;//3is changed to 100
    // printf("%d", a[2]);//if u put more than 4 array out of bound
    // //character and float all possible
    for (int i = 0; i < 5; i++)
    {
        printf("enter no %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("%d", a[3]);
    return 0;
}