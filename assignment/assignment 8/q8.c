#include <stdio.h>

void input(int a[][3][3], int face, int row) {
    printf("Enter values for face %d:\n", face);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            scanf("%d", &a[face][i][j]);
        }
    }
}

void print(int a[][3][3], int face, int row) {
    printf("Face %d:\n", face);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", a[face][i][j]);
        }
        printf("\n");
    }
}

void rotateLeft(int a[][3][3], int n) {
    int temp[3][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[5][i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[5][i][j] = a[3][i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[3][i][j] = a[2][i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[2][i][j] = a[4][i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[4][i][j] = temp[i][j];
        }
    }
}

void rotateRight(int a[][3][3], int n) {
    int temp[3][3];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[4][i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[4][i][j] = a[2][i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[2][i][j] = a[3][i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[3][i][j] = a[5][i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[5][i][j] = temp[i][j];
        }
    }
}
void rotateDown(int a[][3][3], int n) {
    int temp[3][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[0][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[0][i][j] = a[5][i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[5][i][j] = a[1][i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[1][i][j] = a[2][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[2][i][j] = temp[i][j];
        }
    }
}
void rotateUp(int a[][3][3], int n) {
    int temp[3][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[0][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[0][i][j] = a[4][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[4][i][j] = a[5][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[5][i][j] = a[1][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[1][i][j] = temp[i][j];
        }
    }
}
void rotateBack(int a[][3][3], int n) {
    int temp[3][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = a[3][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[3][i][j] = a[4][i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[4][i][j] = a[5][n - 1 - i][n - 1 - j]; // Rotate right face 180 degrees
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[5][i][j] = a[2][n - 1 - j][i]; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[2][i][j] = temp[n - 1 - i][n - 1 - j]; // Rotate up face 180 degrees
        }
    }
}



int main() {
    int n = 3; 

    int a[6][3][3] = {0}; 

    printf("Enter front face:\n");
    input(a, 0, n);
    printf("Enter back face:\n");
    input(a, 1, n);
    printf("Enter down face:\n");
    input(a, 2, n);
    printf("Enter up face:\n");
    input(a, 3, n);
    printf("Enter left face:\n");
    input(a, 4, n);
    printf("Enter right face:\n");
    input(a, 5, n);


    printf("Entered cube:\n");
    for (int face = 0; face < 6; face++) {
        print(a, face, n);
    }

    char choice;
    while (1) {
        printf("Choose the direction to rotate (l/r/u/d/f/b or q to quit): ");
        scanf(" %c", &choice); // Note the space before %c to consume newline character

        if (choice == 'q') {
            break;
        }

        switch (choice) {
            case 'l':
                rotateLeft(a, n);
                break;
            case 'r':
                rotateRight(a, n);
                break;
            case 'u':
                rotateUp(a, n);
                break;
            case 'd':
                rotateDown(a, n);
                break;
            case 'b':
                rotateBack(a, n);
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }

        // Print the cube after rotation
        printf("Cube after rotating %c:\n", choice);
        for (int face = 0; face < 6; face++) {
            print(a, face, n);
        }
    }

    return 0;
}
