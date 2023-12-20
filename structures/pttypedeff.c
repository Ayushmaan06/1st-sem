#include<stdio.h>
typedef int* ptr;
int main(){
    int x=5,y=6;
    ptr a= &x,b =&y;
    printf("%p", a);
}