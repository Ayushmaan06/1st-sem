#include<stdio.h>
int main()
{
    char s[100];
    printf("enter the string: ");
    gets(s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>='A' && s[i]<'Z')
        {
            s[i]+=32;
        }
    }
    printf("\n");
    puts(s);
}