#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; // arrays to hold strings
    char result[200];          // array to hold concatenated result

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline character if present

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline character if present

    // Copy first string to result
    strcpy(result, str1);

    // Concatenate second string to result
    strcat(result, str2);

    // Display concatenated string
    printf("\nConcatenated String: %s", result);

    // Display length of concatenated string
    printf("\nLength of Concatenated String: %zu\n", strlen(result));

    return 0;
}

