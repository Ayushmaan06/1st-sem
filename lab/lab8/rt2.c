#include<stdio.h>
int main()
{
    int l=0;
    char s[100];
    printf("enter the string: ");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
        l++;
    }
    for (int i = 0,j=l-1; i < j; i++,j--)
    {
        char temp= s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    for (int i = 0,j=1; i < j; i++,j--)
    {
        char temp= s[i];
        s[i]=s[j];
        s[j]=temp;
    }for (int i = 2,j=l-1; i < j; i++,j--)
    {
        char temp= s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("\n");puts(s);
    
}