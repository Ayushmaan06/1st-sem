#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
    char name[15];
    int age;
    int salary;
    int weight;
    int height;
    char gender;
}emp;
emp a[5];
FILE *fp ;
FILE *fop ;

void input(emp a[], FILE *fp)
{
    for (int i = 0; i < 5; i++)
    {
        fscanf(fp, "%s %d %d %d %d %c", a[i].name, &a[i].age, &a[i].salary, &a[i].weight, &a[i].height, &a[i].gender);
    }
}

void sal(emp a[], FILE* fop)
{
    int sum=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (a[j].salary>a[j+1].salary)
            {
                emp temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sum+=a[i].salary;
    }
     
    fprintf(fop,"Minimum Salary: %d\nMaximum Salary: %d\nAverage Salary: %d\n",a[0].salary,a[4].salary,(sum/5));
}
void age(emp a[], FILE* fop)
{
    int sum=0,m=0,n;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (a[j].age>a[j+1].age)
            {
                emp temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        sum+=a[i].age;
    }

    for (int i = 0; i < 5; i++)
    {
        int l=0;
        for (int j = i+1; i < 5; i++)
        {
            if (a[i].age==a[j].age)
            {
                l++;
            }
            if (l>m)
            {
                m=l;
                n=a[i].age;
            }
        }
    }
    fprintf(fop,"\nMean Age: %d\nMedian Age: %d\nMod Age: %d\n",(sum/5),a[3].salary,n);

}
int main()
{
 
    fp = fopen("input.txt", "r");
    fop = fopen("output.txt", "w");
    input(a,fp);
    sal(a,fop);
    age(a,fop);
    return 0;
}