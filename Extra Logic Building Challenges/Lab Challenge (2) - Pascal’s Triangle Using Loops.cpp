#include <stdio.h>

// Function to generate Pascal's Triangle using loops
int main() {
    int n, coef, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++)
            printf("  ");

        coef = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}

