#include <stdio.h>

int main() {
    float marks;

    // Input marks
    printf("Enter marks: ");
    scanf("%f", &marks);

    // Decision-making for grades
    if (marks > 90) {
        printf("Grade: A\n");
    }
    else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    }
    else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: D\n");
    }

    return 0;
}

