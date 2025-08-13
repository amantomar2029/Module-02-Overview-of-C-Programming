#include <stdio.h>

// Recursive function to get binomial coefficient
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= n - i; space++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}

