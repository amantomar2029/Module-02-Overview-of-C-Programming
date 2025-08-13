#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // pointer declaration

    ptr = &num; // store address of num in ptr

    printf("Original value of num: %d\n", num);

    *ptr = 20; // modify value of num using pointer

    printf("Modified value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value stored in ptr (address of num): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

