#include <stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int isDiagonal = 1;

    // Input elements
    printf("Enter 9 elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Traversing the matrix
    printf("\nMatrix is:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Checking square matrix
    // Since it is 3x3, it is always a square matrix
    printf("\nThe matrix is a Square Matrix.\n");

    // Printing diagonal elements
    printf("Diagonal elements are: ");

    for (i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
    }

    // Checking diagonal matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j && a[i][j] != 0) {
                isDiagonal = 0;
            }
        }
    }

    if (isDiagonal == 1) {
        printf("\nThe matrix is a Diagonal Matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Diagonal Matrix.\n");
    }

    return 0;
}