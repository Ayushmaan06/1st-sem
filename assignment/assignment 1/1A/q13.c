#include <stdio.h>
#include <time.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    
    // Get the current date and time
    time_t t;
    time(&t);
    printf("Current Date and Time: %s", ctime(&t));
    
    // Read marks of 5 subjects from the user
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);
    
    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);
    
    printf("Enter marks for subject 5: ");
    scanf("%d", &marks5);
    
    // Calculate the total marks
    int totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    
    // Calculate the percentage
    double percentage = (double)totalMarks /5;
    
    // Display the percentage
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2lf%%\n", percentage);
    
    return 0;
}
