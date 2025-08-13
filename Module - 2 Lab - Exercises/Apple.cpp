#include <stdio.h>
int main() {
    int students, applesPerStudent = 5, totalApples;
    
    printf("Enter number of students: ");
    scanf("%d", &students);
    
    totalApples = students * applesPerStudent;
    
    printf("Total apples required = %d\n", totalApples);
    return 0;
}

