#include <stdio.h>

void pattern1() { // 1 10 101 ...
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}

void pattern2() { // A, BC, DEF...
    int i, j;
    char ch = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}

void pattern3() { // pyramid
    int i, j, space;
    for (i = 1; i <= 5; i++) {
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern4() { // diamond-like half pyramid
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern5() { // numbers in sequence
    int i, j, num = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void pattern6() { // alphabet increasing
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n----- Pattern Menu -----\n");
        printf("1. Pattern 1 \n");
        printf("2. Pattern 2 \n");
        printf("3. Pattern 3 \n");
        printf("4. Pattern 4 \n");
        printf("5. Pattern 5 \n");
        printf("6. Pattern 6 \n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: pattern1(); break;
            case 2: pattern2(); break;
            case 3: pattern3(); break;
            case 4: pattern4(); break;
            case 5: pattern5(); break;
            case 6: pattern6(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

