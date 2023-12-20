#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Read total time in seconds from the user
    printf("Enter total time elapsed in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display the time in hours:minutes:seconds format
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
