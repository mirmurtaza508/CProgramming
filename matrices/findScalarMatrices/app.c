#include<stdio.h>

int main() {
    int i, j, size = 0, isScalar = 1; // Assume it is scalar
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

    // Initialize first diagonal element after populating the matrix
    int firstElMatrices = array[0][0];

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

    // Check if the matrix is scalar
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j != i && array[i][j] != 0) {
                isScalar = 0; // Non-diagonal element is not zero
            }
            if (j == i && array[i][j] != firstElMatrices) {
                isScalar = 0; // Diagonal element is not equal to the first diagonal element
            }
        }
    }

    printf("\n\nFinal Answer: ");
    if (isScalar) {
        printf("This matrix is scalar.\n");
    } else {
        printf("This matrix is not scalar.\n");
    }

    return 0;
}