#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    
    int c = 0;
    char s[100];
    puts("string: ");
    fgets(s, sizeof(s), stdin);
    
    char *ptr = s;
    

    while (*ptr != '\0') {
        c++;
        ptr++;
    }
    
    ptr = s; 
    for (int i = 0; i < c - 1; i++) {
        for (int j = 0; j < c - 1 - i; j++) {
            if (*ptr > *(ptr + 1)) {
                char temp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = temp;
            }
            ptr++;
        }
        ptr = s; 
    }
    
    printf("Sorted string: %s\n", s);
    
    return 0;
}
