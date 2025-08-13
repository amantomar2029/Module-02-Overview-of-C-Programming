#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Open file for writing
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Get string from user
    printf("Enter a string to write to the file: ");
    fgets(str, sizeof(str), stdin);

    // Write string to file
    fputs(str, fp);

    // Close file
    fclose(fp);

    // Open file for reading
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Display contents of file
    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    // Close file
    fclose(fp);

    return 0;
}

