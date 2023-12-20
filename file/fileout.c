#include<stdio.h>
int main()
{
    FILE *ptr = fopen("imp.txt","w");
    char s[] = "aur baaki ki 50% sach nhi bolti";
    fputs(s,ptr);
    fclose(ptr);
}