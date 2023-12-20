#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        char name[50];
        int page;
        float price;
    }a,b,c;

    a.page=100;
    a.price=411.5;
    //  a.name="secret seven";  error
    //  a.name[]="dfg";         error
    //  a.name[0]='s';
    //         1.......
    //it will print but weird chars at end
    //ek baar agar[50] ho gaya to alag alag hi kr k baad mai define krna hoga
    strcpy(a.name,"secret seven");

    printf("%d", a.page);
    printf("%f", a.price);
    printf("%s", a.name);
}