#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    int n;
    scanf("%d",&n);
    int *ptr=&n;
    printf("%d\n",n);
    printf("%d\n",*ptr);
    return 0;
}
