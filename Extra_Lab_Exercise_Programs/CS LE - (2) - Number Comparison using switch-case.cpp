#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;
    int choice;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest and smallest
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Menu for display
    printf("\nChoose option:\n1. Display Largest\n2. Display Smallest\n3. Display Both\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch-case decision
    switch (choice) {
        case 1:
            printf("Largest number: %d\n", largest);
            break;
        case 2:
            printf("Smallest number: %d\n", smallest);
            break;
        case 3:
            printf("Largest number: %d\n", largest);
            printf("Smallest number: %d\n", smallest);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

