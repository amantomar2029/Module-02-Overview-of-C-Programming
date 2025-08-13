#include <stdio.h>

int main() {
    int num, start, end, i;

    // Take the number for which to print the multiplication table
    printf("Enter the number: ");
    scanf("%d", &num);

    // Take the start and end range
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("\nMultiplication Table of %d from %d to %d:\n", num, start, end);

    // Print the table
    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

