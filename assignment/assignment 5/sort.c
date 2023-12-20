#include<stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int a[size], temp;

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int choice;
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 0; i < size-1; i++)
        {
            for (int j = 0; j < size-1-i; j++)
            {
                if (a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for (int i = 0; i < size; i++) {
            printf("Element %d: %d ", i + 1, a[i]);
            printf("\n");
    }}
        if (choice == 2) {
        for (int i = 0; i < size-1; i++)
        {
            for (int j = 0; j < size-1-i; j++)
            {
                if (a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for (int i = 0; i < size; i++) {
            printf("Element %d: %d ", i + 1, a[i]);
            printf("\n");
    }}
}
