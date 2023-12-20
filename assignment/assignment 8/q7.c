#include <stdio.h>

typedef struct student {
    char name;
    int roll;
    float marks;
} st;

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);

    st a[n];

    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d marks: ", i + 1);
        scanf("%f", &a[i].marks);
    }

    st *p = a; 
    st temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if ((p + j)->marks > (p + j + 1)->marks) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Sorted marks:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", (p + i)->marks);
    }

    return 0;
}
