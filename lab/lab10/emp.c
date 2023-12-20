#include <stdio.h>

typedef struct date {
    int d;
    int m;
    int y;
} Date;

typedef struct emp {
    int id;
    float sal;
    char name[60];
    Date bd;
    Date dj;
} Employee;

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    Employee a[n];

    for (int i = 0; i < n; i++) {
        printf("For employee %d\n", i + 1);
        printf("\tWrite id: ");
        scanf("%d", &a[i].id);
        printf("\tWrite salary: ");
        scanf("%f", &a[i].sal);

        printf("\tWrite name: ");
        while (getchar() != '\n');
        fgets(a[i].name, sizeof(a[i].name), stdin);
        printf("\tWrite date of birth (dd mm yyyy): ");
        scanf("%d %d %d", &a[i].bd.d, &a[i].bd.m, &a[i].bd.y);

        printf("\tWrite date of joining (dd mm yyyy): ");
        scanf("%d %d %d", &a[i].dj.d, &a[i].dj.m, &a[i].dj.y);
    }
    for (int i = 0; i < n; i++) {
        printf("For employee %d\n", i + 1);
        printf("\tid: ");
        printf("%d\n", a[i].id);
        printf("\tsalary: ");
        printf("%f\n", a[i].sal);

        printf("\tname: ");
        puts(a[i].name);
        printf("\tdate of birth (dd mm yyyy): ");
        printf("%d %d %d\n", a[i].bd.d, a[i].bd.m, a[i].bd.y);

        printf("\tdate of joining (dd mm yyyy): ");
        printf("%d %d %d", a[i].dj.d, a[i].dj.m, a[i].dj.y);
    }
    
    return 0;
}
