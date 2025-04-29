#include<stdio.h>

int main() {
    int i, j, size = 0, isIdentity = 1; // Assume it is identity matrix
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
        printf("%d ", array[i][i]); // Print diagonal elements
    }

    printf("\nNon-diagonal elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j != i) {
                printf("%d ", array[i][j]); // Print non-diagonal elements
            }
        }
    }

    // Check if the matrix is identity matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j != i && array[i][j] != 0) {
                isIdentity = 0; // Non-diagonal element is not zero
            }
            if (j == i && array[i][j] != 1) {
                isIdentity = 0; // Diagonal element is zero
            }
        }
    }

    printf("\n\nFinal Answer: ");
    if (isZero) {
        printf("This matrix is identity matrix.\n");
    } else {
        printf("This matrix is not identity matrix.\n");
    }

    return 0;
}