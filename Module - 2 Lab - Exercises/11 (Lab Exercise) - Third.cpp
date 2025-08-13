#include <stdio.h>

// User-defined function to concatenate strings
void myConcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator at the end
    str1[i] = '\0';
}

int main() {
    char str1[200], str2[100];

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline from str1 if present
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str2 if present
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    // Call user-defined concatenation function
    myConcat(str1, str2);

    // Display result
    printf("\nConcatenated String: %s\n", str1);

    return 0;
}

