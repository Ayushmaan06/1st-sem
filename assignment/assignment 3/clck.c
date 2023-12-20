#include <stdio.h>
#include <time.h>


int main() {
    while (1) {
        time_t t;
        struct tm* tm_info;

        time(&t);
        tm_info = localtime(&t);

        printf("\r%02d:%02d:%02d", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);



    }

    return 0;
}
