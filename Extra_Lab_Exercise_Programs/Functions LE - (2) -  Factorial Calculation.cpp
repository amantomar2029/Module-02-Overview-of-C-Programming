#include <stdio.h>
#include <time.h>

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    clock_t start, end;
    double time_recursive, time_iterative;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Recursive method timing
    start = clock();
    unsigned long long fact_rec = factorial_recursive(num);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Iterative method timing
    start = clock();
    unsigned long long fact_itr = factorial_iterative(num);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nFactorial of %d (Recursive): %llu", num, fact_rec);
    printf("\nTime taken (Recursive): %lf seconds", time_recursive);

    printf("\n\nFactorial of %d (Iterative): %llu", num, fact_itr);
    printf("\nTime taken (Iterative): %lf seconds\n", time_iterative);

    return 0;
}

