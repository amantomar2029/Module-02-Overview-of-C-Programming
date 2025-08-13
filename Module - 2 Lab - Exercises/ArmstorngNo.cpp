#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // ---------- Using While Loop ----------
    original = num;
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        printf("Using while loop: %d is an Armstrong number.\n", num);
    else
        printf("Using while loop: %d is not an Armstrong number.\n", num);

    // ---------- Using For Loop ----------
    result = 0;
    original = num;

    for (n = 0, remainder = num; remainder != 0; remainder /= 10, n++);

    for (original = num; original != 0; original /= 10) {
        remainder = original % 10;
        result += pow(remainder, n);
    }

    if (result == num)
        printf("Using for loop: %d is an Armstrong number.\n", num);
    else
        printf("Using for loop: %d is not an Armstrong number.\n", num);

    return 0;
}

