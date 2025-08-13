#include <stdio.h>
int main() {
    int i;

    // Using break
    printf("Using break (stop at 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break; // exit loop when i = 5
        printf("%d ", i);
    }
    printf("\n");

    // Using continue
    printf("Using continue (skip 3):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 3)
            continue; // skip when i = 3
        printf("%d ", i);
    }

    return 0;
}

