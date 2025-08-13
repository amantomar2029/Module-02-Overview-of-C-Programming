#include <stdio.h>

void countCharacters(char str[], int *vowels, int *consonants, int *digits, int *special) {
    int i = 0;
    *vowels = *consonants = *digits = *special = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowels)++;
        }
        // Check for consonants
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            (*consonants)++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        }
        // Everything else is a special character (including spaces)
        else {
            (*special)++;
        }

        i++;
    }
}

int main() {
    char str[200];
    int vowels, consonants, digits, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str, &vowels, &consonants, &digits, &special);

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);

    return 0;
}

