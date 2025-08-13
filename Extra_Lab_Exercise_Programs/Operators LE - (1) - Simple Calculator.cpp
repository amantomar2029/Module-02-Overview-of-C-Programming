#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // Input first number
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // Input operator
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to ignore leftover newline

    // Input second number
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator '%c'\n", op);
    }

    return 0;
}

