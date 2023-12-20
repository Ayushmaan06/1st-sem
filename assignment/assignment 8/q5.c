#include <stdio.h>
#include <time.h>

int add(int* a, int* b);
int subtract(int* a, int* b);
int multiply(int* a, int* b);
int divide(int* a, int* b);

int main() {
    int choice,res, num1, num2;

    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t)); // Display current time

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int *a=&num1;
    int *b =&num2;

    printf("Choose an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        if (choice == 1)
        {
            res=add(a,b);
        }
        if (choice == 2)
        {
            res=subtract(a,b);
        }
        if (choice == 3)
        {
            res=multiply(a,b);
        }
        if (choice == 4)
        {
            res=divide(a,b);
        }
        
    } else {
        printf("Invalid choice\n");
    }
    printf("%d", res);
    return 0;
}


int add(int* a, int* b) {
    return *a + *b;
}

int subtract(int* a, int* b) {
    return *a - *b;
}

int multiply(int* a, int* b) {
    return *a * *b;
}

int divide(int* a, int* b) {
    if (b != 0) {
        return *a / *b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
