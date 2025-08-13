#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Manually calculate length (excluding '\0' and newline if present)
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') // stop counting at newline from fgets
            break;
        length++;
    }

    // Display result
    printf("Length of the string: %d\n", length);

    return 0;
}

