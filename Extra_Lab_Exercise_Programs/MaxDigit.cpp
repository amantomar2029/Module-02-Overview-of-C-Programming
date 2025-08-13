#include <stdio.h>

int main() {
    int num, digit, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;    // extract last digit
        if (digit > max) {
            max = digit;     // update max if larger
        }
        num /= 10;           // remove last digit
    }

    printf("Maximum digit is: %d\n", max);

    return 0;
}

