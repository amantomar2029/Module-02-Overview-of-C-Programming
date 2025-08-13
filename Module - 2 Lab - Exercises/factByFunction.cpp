#include <stdio.h>

// Function declaration
long factorial(int n);

int main() {
    int num;
    long fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    fact = factorial(num); // Function call

    printf("Factorial of %d = %ld\n", num, fact);

    return 0;
}

// Function definition
long factorial(int n) {
    long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

