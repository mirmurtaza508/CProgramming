#include<stdio.h>

int main() {
    int i, j, size = 0,isDiagonal = 1; // Assume it is diagonal;
    printf("Enter the size of the matrix (e.g., 3, 4, 5): ");
    scanf("%d", &size);

    int array[size][size];
    printf("Enter your matrix:\n");
    for (i = 0; i < size; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < size; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nDiagonal elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j == i) {
                printf("%d ", array[i][j]);
            }
        }
    }

    printf("\nNon-diagonal elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j != i) {
                printf("%d ", array[i][j]);
            }
        }
    }

    // Check if the matrix is diagonal

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j != i && array[i][j] != 0) {
                isDiagonal = 0; // Non-diagonal element is not zero
            }
        }
    }

    printf("\n\nFinal Answer: ");
    if (isDiagonal) {
        printf("This matrix is diagonal.\n");
    } else {
        printf("This matrix is not diagonal.\n");
    }

    return 0;
}