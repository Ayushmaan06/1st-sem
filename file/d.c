#include <stdio.h>

int main() {
    FILE *fp;
    char *str; 

    fp = fopen("demo.txt", "r");

/*Content of demo : "you are a 
good programmer."*/ 
    while (fgets(str, 6, fp) != NULL) {
        puts(str); 
    }

    fclose(fp);
    return 0;
}
