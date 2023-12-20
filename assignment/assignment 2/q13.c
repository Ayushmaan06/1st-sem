#include <stdio.h>
#include <time.h>

int main() {
    
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    float height;

    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height);

    if (height < 150)
        printf("The person is categorized as 'Short'.\n");
    else if (height >= 150 && height < 170)
        printf("The person is categorized as 'Average'.\n");
    else
        printf("The person is categorized as 'Tall'.\n");

    return 0;
}
