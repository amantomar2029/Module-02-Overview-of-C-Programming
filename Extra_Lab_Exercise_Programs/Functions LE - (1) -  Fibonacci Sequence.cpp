#include <stdio.h>
#include <time.h>

// Recursive Fibonacci function
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative Fibonacci function
int fibonacci_iterative(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N, i;

    printf("Enter number of terms for Fibonacci sequence: ");
    scanf("%d", &N);

    printf("\nFibonacci Sequence (Recursive):\n");
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    // Compare efficiency for Nth Fibonacci number
    int nth;

    printf("\nEnter N to calculate the Nth Fibonacci number: ");
    scanf("%d", &nth);

    clock_t start, end;
    double time_recursive, time_iterative;

    // Recursive timing
    start = clock();
    int fib_rec = fibonacci_recursive(nth);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Iterative timing
    start = clock();
    int fib_itr = fibonacci_iterative(nth);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nNth Fibonacci number (Recursive) = %d", fib_rec);
    printf("\nTime taken (Recursive) = %f seconds", time_recursive);

    printf("\n\nNth Fibonacci number (Iterative) = %d", fib_itr);
    printf("\nTime taken (Iterative) = %f seconds\n", time_iterative);

    return 0;
}

