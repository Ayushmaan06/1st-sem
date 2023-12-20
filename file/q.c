#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 5


struct Employee {
    char name[50];
    int age;
    float salary;
    float weight;
    float height;
    char gender;
};


void SalaryStats(struct Employee employees[], int count, FILE *outputFile) {
    float min = employees[0].salary;
    float max = employees[0].salary;
    float total = employees[0].salary;

    for (int i = 1; i < count; ++i) {
        if (employees[i].salary < min) {
            min = employees[i].salary;
        }
        if (employees[i].salary > max) {
            max = employees[i].salary;
        }
        total += employees[i].salary;
    }

    float averageSalary = total/ count;

    fprintf(outputFile, "Minimum Salary: %.2f\n", min);
    fprintf(outputFile, "Maximum Salary: %.2f\n", max);
    fprintf(outputFile, "Average Salary: %.2f\n", averageSalary);
}



int main() {
    struct Employee employees[MAX_EMPLOYEES];
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file.\n");
        return -1;
    }


    for (int i = 0; i < 5; ++i) {
        fscanf(inputFile, "%s %d %f %f %f %c", employees[i].name, &employees[i].age, &employees[i].salary,
               &employees[i].weight, &employees[i].height, &employees[i].gender);
            
    }
    SalaryStats(employees,5,outputFile);
    

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
