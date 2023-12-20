#include<stdio.h>
int main()
{
    int l=0,m=1;
    char s[100];
    printf("enter the string");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
        l++;
    }
    for (int i = 0,j=l-1; i < j; i++,j--)
    {
        if (s[i]!=s[j])
        {
            puts("\nNot A Palindrome");
            m++;
            break;
        }
    }
    if (m==1)
    {
        puts("\npalindrome");
    }
    
    
    
}