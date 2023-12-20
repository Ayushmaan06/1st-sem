#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
    int id;
    char name[60];
}e;
e em[5];
e e1;
int size = sizeof(e1);
FILE *fp  ;
void in(e em[]);
void dis(e em[]);
void mod(e em[]);
void del(e em[]);
int main(){
   fp= fopen("in.txt","wb+");
    in(em);
    dis(em);
    mod(em);
    del(em);
}
void in(e em[]){
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",em[i].id);
        fgets(em[i].name,60,stdin);
        fscanf(&em[i],size,1,fp);
    }
    fclose(fp);
}
void dis(e em[]){
    FILE *fop = fopen("in.txt","r");
    while (fread(&e1,size,1,fop)==1)
    {
        printf("Name : %s\nID : %d",e1.name,e1.id);
    }
    fclose(fp);
}
void mod(e em[]){
    char name [60];
    fgets(name,60,stdin);
    e e2;
    while (freads(&e1,size,1,fp)==1)
    {
        if (strcmp(name,e1.name)==0)
        {
            fgets(e2.name,60,stdin);
            scanf("%d",&e2.id);
            fseek(fp,-size,SEEK_CUR);
            fwrite(&e2,size,1,fp);
        }
        
    }
    
}