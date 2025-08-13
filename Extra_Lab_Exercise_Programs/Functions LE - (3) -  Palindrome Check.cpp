#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return (original == reversed);
}

// Function to check if a string is a palindrome
int isStringPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters and make comparison case-insensitive
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right]))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main() {
    int choice;
    printf("1. Check Number Palindrome\n2. Check String Palindrome\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num))
            printf("%d is a palindrome.\n", num);
        else
            printf("%d is not a palindrome.\n", num);

    } else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        getchar(); // Clear newline left by scanf
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; // Remove newline

        if (isStringPalindrome(str))
            printf("\"%s\" is a palindrome.\n", str);
        else
            printf("\"%s\" is not a palindrome.\n", str);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

