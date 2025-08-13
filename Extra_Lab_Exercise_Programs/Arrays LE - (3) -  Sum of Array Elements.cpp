#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array to store numbers

    // Taking input from user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Summing elements while taking input
    }

    // Calculating average
    average = sum / n;

    // Display results
    printf("\nSum of all elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}

