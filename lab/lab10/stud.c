#include <stdio.h>

typedef struct stud {
    int roll;
    float h;
    char ad[60];
    int y;
    int sem;
} s;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    s a[n];

    for (int i = 0; i < n; i++) {
        printf("For student %d\n", i + 1);
        
        printf("\twrite roll no.: ");
        scanf("%d", &a[i].roll);

        printf("\twrite height: ");
        scanf("%f", &a[i].h); 
        
        printf("\twrite address: ");

        while (getchar() != '\n');
        fgets(a[i].ad, sizeof(a[i].ad), stdin);

        printf("\twrite year: ");
        scanf("%d", &a[i].y);

        printf("\twrite semester: ");
        scanf("%d", &a[i].sem);
    }

    for (int i = 0; i < n; i++)
    {
        printf("For student %d\n", i + 1);
        
        printf("\troll no.: ");
        printf("%d", a[i].roll);

        printf("\theight: ");
        printf("%f", a[i].h); 
        
        printf("\taddress: ");

        puts(a[i].ad);

        printf("\tyear: ");
        printf("%d", a[i].y);

        printf("\tsemester: ");
        printf("%d\n", &a[i].sem);       
    }
    
    return 0;
}
