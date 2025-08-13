#include <stdio.h>
int main() {
    float side, base, height;
    printf("Enter side length of square: ");
    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side);
    printf("Surface Area of Cube = %.2f\n", 6 * side * side);
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", 0.5 * base * height);
    return 0;
}

