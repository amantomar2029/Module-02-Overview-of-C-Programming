#include <stdio.h>
int main() {
    int arr[5];
    int i;

    // Input
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Output in reverse
    printf("Numbers in reverse order: ");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

