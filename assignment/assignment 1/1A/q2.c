#include <stdio.h>
#include <time.h>
int main() {
    double radius;
    
    // Read the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    // Calculate the area of the circle
    double area = 3.14159265359 * radius * radius;
    
    // Display the result
    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);
    time_t t;
    time (&t);
    printf("%s" ,ctime(&t));
    return 0;
}
