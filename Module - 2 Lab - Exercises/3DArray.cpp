#include <stdio.h>
int main() {
    int arr1D[5];
    int arr2D[3][3];
    int i, j, sum = 0;

    // -------- 1D Array --------
    printf("Enter 5 integers for 1D array:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1D[i]);
    }

    printf("\n1D Array elements: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }

    // -------- 2D Array --------
    printf("\n\nEnter elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2D[i][j]);
        }
    }

    printf("\n3x3 Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
            sum += arr2D[i][j];  // Sum calculation
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix = %d\n", sum);

    return 0;
}

