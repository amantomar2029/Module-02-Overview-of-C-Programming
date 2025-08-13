#include <stdio.h>

int main() {
    int num, digit, sum = 0, reverse = 0, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store original number for display

    while (num > 0) {
        digit = num % 10;        // Extract last digit
        sum += digit;            // Add to sum
        reverse = reverse * 10 + digit; // Build reverse number
        num /= 10;               // Remove last digit
    }

    printf("\nSum of digits of %d is: %d\n", original, sum);
    printf("Reverse of %d is: %d\n", original, reverse);

    return 0;
}

