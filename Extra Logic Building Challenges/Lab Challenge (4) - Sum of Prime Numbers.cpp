#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers up to %d are: ", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of prime numbers up to %d = %d\n", N, sum);

    return 0;
}

