# include<stdio.h>
int main()
{
    int age;
    printf("enter ur age:  ");
    scanf("%d",&age);
    if (age>=18) 
    {
        printf("adult");
    }
    else if (13<=age<18)
    {
        printf("teen");
    }
    else 
    {
        printf("child");
    }
    return 0;
}