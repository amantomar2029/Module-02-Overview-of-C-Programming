#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, temp;

    // Count number of digits
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;

    // Part 1: Check single number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    // Part 2: List Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

