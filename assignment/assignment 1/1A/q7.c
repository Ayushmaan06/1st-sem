#include <stdio.h>
#include <time.h>
int main() {
    char lowercase, uppercase;

    // Read a lowercase character from the user
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowercase);

    // Convert to uppercase
    uppercase = lowercase - 32; // Assuming ASCII values

    // Display the uppercase character
    printf("Uppercase Character: %c\n", uppercase);
    time_t t;
    time (&t);
    printf("%s", ctime(&t));
    return 0;
}
