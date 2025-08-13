#include <stdio.h>
#include <string.h>

void countWordsAndLongest(char str[], int *wordCount, char longest[]) {
    int i = 0, len = 0, maxLen = 0, start = 0;
    *wordCount = 0;
    longest[0] = '\0';

    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            i++;
        }

        if (str[i] == '\0') break; // End of string

        (*wordCount)++;  // Found a new word
        start = i;
        len = 0;

        // Count the length of the current word
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0') {
            len++;
            i++;
        }

        // Update the longest word
        if (len > maxLen) {
            maxLen = len;
            strncpy(longest, &str[start], len);
            longest[len] = '\0'; // Null terminate
        }
    }
}

int main() {
    char str[200], longest[200];
    int wordCount;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    countWordsAndLongest(str, &wordCount, longest);

    printf("\nTotal Words: %d", wordCount);
    printf("\nLongest Word: %s (Length: %d)\n", longest, (int)strlen(longest));

    return 0;
}

