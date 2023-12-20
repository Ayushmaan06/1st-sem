#include<stdio.h>
int main()
{
    FILE *ptr = fopen("txt.txt","r");
    char s[100];
    while(fgets(s,100,ptr)!=NULL)
    {
        printf("%s", s);
    }
    fclose(ptr);
}