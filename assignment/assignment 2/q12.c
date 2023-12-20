#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    char rollNo;
    char name;
    int physics, maths, compApp, total;
    float percentage;

    printf("Enter Roll No: ");
    scanf("%s", &rollNo);

    printf("Enter Name of Student: ");
    scanf(" %s", &name);

    printf("Enter Marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter Marks in Maths: ");
    scanf("%d", &maths);

    printf("Enter Marks in Computer Application: ");
    scanf("%d", &compApp);

    total = physics + maths + compApp;
    percentage = (float)total / 3;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 60)
        printf("Division = First\n");
    else if (percentage >= 45)
        printf("Division = Second\n");
    else if (percentage >= 33)
        printf("Division = Third\n");
    else
        printf("Division = Fail\n");

    return 0;
}
