#include <stdio.h>
int main() {
    int n, i;

    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    int arr[n]; // Variable Length Array

    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers stored in array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

